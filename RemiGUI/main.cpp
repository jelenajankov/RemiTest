#include "game.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    int currentExitCode = 0;

    do {
     QApplication a(argc, argv);
     Game w;
     w.show();
     currentExitCode = a.exec();
    } while( currentExitCode == Game::EXIT_CODE_REBOOT );

    return currentExitCode;
}
