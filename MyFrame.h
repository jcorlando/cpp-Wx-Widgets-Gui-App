#pragma once
#include "wx/wx.h"

class MyFrame: public wxFrame
{
private:
    void OnHello(wxCommandEvent &event);
    void OnExit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);

    void OnButtonClicked(wxCommandEvent &evt);
    void OnTxt1Enter(wxCommandEvent &evt);

    wxDECLARE_EVENT_TABLE();

public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    wxButton *m_btn1 = nullptr;
    wxTextCtrl *m_txt1 = nullptr;
    wxListBox *m_list1 = nullptr;
};



