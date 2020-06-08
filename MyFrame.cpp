#include "MyFrame.h"

enum
{
    ID_Hello = 1, ID_Button = 2, ID_TextBox = 3
};

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(ID_Hello,   MyFrame::OnHello)
    EVT_MENU(wxID_EXIT,  MyFrame::OnExit)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
    EVT_BUTTON(ID_Button, MyFrame::OnButtonClicked)
    EVT_TEXT_ENTER(ID_TextBox, MyFrame::OnTxt1Enter)
wxEND_EVENT_TABLE()

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size, long style)
        : wxFrame(NULL, wxID_ANY, title, pos, size, style)
{
    m_btn1 = new wxButton(this, ID_Button, "Click Me", wxPoint(75, 10), wxSize(150, 50));
    m_txt1 = new wxTextCtrl(this, ID_TextBox, "", wxPoint(10, 70), wxSize(300, 30), wxTE_PROCESS_ENTER);
    m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));

    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&New\tCtrl-N",
                     "Create a Pop-up Log Message");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );

    CreateStatusBar();
    SetStatusText( "Welcome to My App!" );
}

void MyFrame::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( " This is my first message box example\n\n App version : 1.0",
                  " About my first app", wxOK | wxICON_INFORMATION );
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("This is my personal log message");
}

void MyFrame::OnButtonClicked(wxCommandEvent &evt)
{
    m_list1->AppendString(m_txt1->GetValue());
    evt.Skip();
}

void MyFrame::OnTxt1Enter(wxCommandEvent &evt)
{
    MyFrame::OnButtonClicked(evt);
}