#ifndef CMAIN_H
#define CMAIN_H

#include "wx/wx.h"
#include "wx/listctrl.h"
#include <wx/sound.h>

using namespace std;

class cMain : public wxFrame
{
    public:
        cMain();
        ~cMain();
    public:
        wxPanel *pan = nullptr;
        wxPanel *pan1 = nullptr;
    void OnWindowEnter(wxMouseEvent &evt);
    void OnWindowLeave(wxMouseEvent &evt);
    wxDECLARE_EVENT_TABLE();
};

#endif // CMAIN_H
