#include <QApplication>
#include "console.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    CallerMainWindow window(nullptr);
    window.setFixedSize(240,680);
    window.show();
    return app.exec();
}
