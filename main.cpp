#include "widget.h"

#include <QApplication>
#include <QMatrix4x4>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);

    Widget w;
    w.show();
    return a.exec();
}
