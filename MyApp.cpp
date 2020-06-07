#include "MyApp.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame( "My First Wx Widget App", wxPoint(175, 66), wxSize(800, 600) );
    frame->Show( true );
    return true;
}


