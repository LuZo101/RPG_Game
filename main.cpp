#include <wx/wx.h>

class HelloWorldApp : public wxApp
{
public:
    virtual bool OnInit() override;
};

class HelloWorldFrame : public wxFrame
{
public:
    HelloWorldFrame(const wxString& title);
};

bool HelloWorldApp::OnInit()
{
    HelloWorldFrame* frame = new HelloWorldFrame("Hello World in wxWidgets");
    frame->Show(true);
    return true;
}

HelloWorldFrame::HelloWorldFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 200))
{
    wxPanel* panel = new wxPanel(this, wxID_ANY);
    wxStaticText* text = new wxStaticText(panel, wxID_ANY, "Hello, World!", wxPoint(50, 50));
}

wxIMPLEMENT_APP(HelloWorldApp);
