#include "cApp.h"
#include "cMain.h"
#include "wx/image.h"

#ifdef _DEBUG
wxIMPLEMENT_APP_CONSOLE(cApp);
#else
wxIMPLEMENT_APP(cApp);
#endif

cApp::cApp()
{
    //ctor
}

cApp::~cApp()
{
    //dtor
}

bool cApp::OnInit()
{
    m_frame1 = new cMain();
    m_frame1 -> Show();
    wxInitAllImageHandlers();
    return true;
}
