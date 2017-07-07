#ifndef COLORPICKER_H
#define COLORPICKER_H
#include <QColorDialog>


class ColorPicker
{
    private:
        //Attributes
        QColor color;

    public:
        //Constructors
        ColorPicker();
        ColorPicker(QColor color);

        //Destructor
        ~ColorPicker();

        //Attribute access methods
        QColor getColor();
        void setColor(QColor color);

        //Returns hexadecimal color code
        QString chooseColor();
};

#endif // COLORPICKER_H
