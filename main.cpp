#include <wx/wx.h>
#include "wxFrames/mainframe.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit() override;
};

bool MyApp::OnInit()
{
    MainFrame* frame = new MainFrame(nullptr, wxID_ANY, "Unitsview");
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(MyApp);
