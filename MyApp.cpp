#include "MyApp.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame( "My First Wx Widget App", wxPoint(175, 66), wxSize(800, 600), wxCAPTION|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL);
    frame->Show( true );
    return true;
}

