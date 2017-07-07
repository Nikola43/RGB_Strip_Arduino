#include <QApplication>
#include <QDebug>
#include <QColorDialog>
#include "colorpicker.h"

int main( int argc, char **argv )
{
    QApplication app( argc, argv );
    ColorPicker color_test;
    QString colorCode;

    colorCode = color_test.chooseColor();

    qDebug() << "Color Choosen : " << colorCode;
    return 0;
}
