#include "QApplication"

#include "wdbe_window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    WbdeWindow window; 
    window.show();  

    return app.exec(); 
}
