// #include <wx/wxprec.h>  // For precompiled headers
// #ifndef WX_PRECOMP
#include <wx/wx.h>
// #endif

class MyApp : public wxApp {
public:
    virtual bool OnInit() override {
        // Create and show the main frame (window)
        MyFrame* frame = new MyFrame();
        frame->Show(true);
        return true;
    }
};

class MyFrame : public wxFrame {
public:
    MyFrame() : wxFrame(nullptr, -1, "My Button App") {
        // Create a button
        wxButton* button = new wxButton(this, wxID_ANY, "Click Me!");

        // Connect the button click event to a function
        button->Bind(wxEVT_BUTTON, &MyFrame::OnButtonClick, this);
    }

private:
    void OnButtonClick(wxCommandEvent& event) {
        // This function will be called when the button is clicked
        wxMessageBox("The button was clicked!");
    }
};

int main() {
    wxApp application;  // Create an instance of the application object
    return wxApp::MainLoop();  // Start the event loop and run the application
}
