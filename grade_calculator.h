#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class Grade_Calculator;
}

class Grade_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Grade_Calculator(QWidget *parent = nullptr);
    ~Grade_Calculator();


public slots:
    void update_10Boverall();
    void update_10Coverall();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider1_valueChanged(int value);

    void on_spinBox1_valueChanged(int arg1);

    void on_spinBox1_2_valueChanged(int arg1);

    void on_horizontalSlider1_2_valueChanged(int value);

    void on_horizontalSlider1_3_valueChanged(int value);

    void on_spinBox1_3_valueChanged(int arg1);

    void on_horizontalSlider1_4_valueChanged(int value);

    void on_spinBox1_4_valueChanged(int arg1);

    void on_horizontalSlider1_5_valueChanged(int value);

    void on_spinBox1_5_valueChanged(int arg1);

    void on_horizontalSlider1_6_valueChanged(int value);

    void on_spinBox1_6_valueChanged(int arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_spinBox_2_valueChanged(int arg1);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_spinBox_3_valueChanged(int arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_horizontalSlider1_7_valueChanged(int value);

    void on_spinBox1_7_valueChanged(int arg1);

    void on_horizontalSlider1_8_valueChanged(int value);

    void on_spinBox1_8_valueChanged(int arg1);

    void on_horizontalSlider1_9_valueChanged(int value);

    void on_spinBox1_9_valueChanged(int arg1);

    void on_horizontalSlider1_10_valueChanged(int value);

    void on_spinBox1_10_valueChanged(int arg1);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_spinBox_4_valueChanged(int arg1);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_spinBox_6_valueChanged(int arg1);



    void on_pushButton_2_clicked();

private:
    Ui::Grade_Calculator *ui;
};

#endif // GRADE_CALCULATOR_H
