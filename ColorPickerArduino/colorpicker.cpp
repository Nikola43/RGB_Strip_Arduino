#include "colorpicker.h"
#include <QDebug>
#include <QColorDialog>
#include <QApplication>

//Constructors
ColorPicker::ColorPicker()
{

}

ColorPicker::ColorPicker(QColor color)
{
    this->color = color;
}

//Destructor
ColorPicker::~ColorPicker()
{

}

//Attribute access methods
QColor ColorPicker::getColor()
{
    return color;
}

void ColorPicker::setColor(QColor color)
{
    this->color = color;
}

//Returns choosen color
QString ColorPicker::chooseColor()
{
    QString colorCode = 0; //hexadecimal color code
    QColor color; //color

    //get color
    color = QColorDialog::getColor(Qt::white);

    if( color.isValid() )
    {
        colorCode = color.name();
    }

    return colorCode;
}





