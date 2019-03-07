#include "grade_calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Grade_Calculator w;
    w.setWindowTitle("Grade Calculator");

    w.show();
    return a.exec();
}
