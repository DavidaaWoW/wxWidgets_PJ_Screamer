#ifndef CAPP_H
#define CAPP_H

#include "wx/wx.h"
#include <cMain.h>

class cApp : public wxApp
{
    public:
        cApp();
        ~cApp();
    public:
        virtual bool OnInit();
    private:
        cMain* m_frame1 = nullptr;
};

#endif // CAPP_H
