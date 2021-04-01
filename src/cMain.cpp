#include "cMain.h"
#include "cApp.h"
#include <fstream>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
 EVT_LEAVE_WINDOW(OnWindowLeave)
 EVT_ENTER_WINDOW(OnWindowEnter)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 12, "screamer", wxPoint(0,0), wxSize(600,600),wxSYSTEM_MENU | wxCAPTION | wxCLIP_CHILDREN)
{
    pan = new wxPanel(this, 250,250,100,100,wxBORDER_NONE);
    pan1 = new wxPanel(this,0,0,1920,1080);
    pan1->Hide();
}
cMain::~cMain()
{
    //dtor
}
void cMain::OnWindowEnter(wxMouseEvent &evt)
{
    pan -> SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DDKSHADOW));
    Refresh();
}
void cMain::OnWindowLeave(wxMouseEvent &evt)
{
    pan -> SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DHIGHLIGHT));
    Refresh();
    wxSound("Untitled.wav").Play(wxSOUND_ASYNC|wxSOUND_LOOP);
    wxClientDC dc(this->pan1);
    pan1->Show();
    int w,h;
    this->SetSize(1920,1080);
    wxMemoryDC mdc;
    dc.GetSize(&w, &h);
    wxImage img(wxT("scr.jpg"), wxBITMAP_TYPE_JPEG);
    wxBitmap logo(img.Scale(w,h,wxIMAGE_QUALITY_HIGH));
    mdc.SelectObject(logo);
    dc.Blit(0,0, logo.GetWidth(), logo.GetHeight(), &mdc, 0, 0,wxCOPY, 0);
    mdc.SelectObject(wxNullBitmap);
}
