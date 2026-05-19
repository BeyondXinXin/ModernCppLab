#include "MainWindow.h"

#include <QLabel>
#include <QString>

MainWindow::MainWindow(QWidget * parent)
  : QMainWindow(parent)
{
    setWindowTitle(QStringLiteral("ModernCppLab Qt"));

    auto * label = new QLabel(QStringLiteral("ModernCppLab Qt\nQt 6.8 + CMake + C++20"), this);
    label->setAlignment(Qt::AlignCenter);

    setCentralWidget(label);
    resize(640, 360);
}
