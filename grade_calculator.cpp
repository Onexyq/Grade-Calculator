#include "grade_calculator.h"
#include "ui_grade_calculator.h"

static double h = 0;

Grade_Calculator::Grade_Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Grade_Calculator)
{
    ui->setupUi(this);


    QObject::connect(ui->spinBox1,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox1_2,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox1_3,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox1_4,SIGNAL(valueChanged(int)),
                       this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox1_5,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox1_6,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));

    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Boverall()));

    QObject::connect(ui->spinBox1_7,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Coverall()));
    QObject::connect(ui->spinBox1_8,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Coverall()));
    QObject::connect(ui->spinBox1_9,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Coverall()));
    QObject::connect(ui->spinBox1_10,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Coverall()));

    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Coverall()));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                     this, SLOT(update_10Coverall()));


    QObject::connect(ui->radioButton,SIGNAL(clicked()),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->radioButton_2,SIGNAL(clicked()),
                     this, SLOT(update_10Boverall()));
    QObject::connect(ui->radioButton_3,SIGNAL(clicked()),
                     this, SLOT(update_10Coverall()));
    QObject::connect(ui->radioButton_4,SIGNAL(clicked()),
                     this, SLOT(update_10Coverall()));


}

Grade_Calculator::~Grade_Calculator()
{
    delete ui;
}

void Grade_Calculator::update_10Boverall(){

    double hw_average = (ui->spinBox1->value()+ui->spinBox1_2->value()+ui->spinBox1_3->value()
            +ui->spinBox1_4->value()+ui->spinBox1_5->value()+ui->spinBox1_6->value())/6;

    double score;
    if(ui->radioButton->isChecked()){
        score=hw_average/4+ui->spinBox->value()*3/20
            +ui->spinBox_2->value()*3/20+ui->spinBox_3->value()*9/20;
    }
    else {
        score=hw_average*3/20+ui->spinBox->value()*1/10
            +ui->spinBox_2->value()*1/10+ui->spinBox_3->value()*13/20;
    }

    ui->S_label->setNum(score);
    return;
}

void Grade_Calculator::update_10Coverall(){

    double hw_average = (ui->spinBox1_7->value()+ui->spinBox1_8->value()+ui->spinBox1_9->value()
            +ui->spinBox1_10->value())/4;

    double score;
    if(ui->radioButton_3->isChecked()){
        score=hw_average/4+ui->spinBox_4->value()*3/10
            +ui->spinBox_6->value()*9/20;
    }
    else {
        score=hw_average*3/20+ui->spinBox_4->value()*2/10
            +ui->spinBox_6->value()*13/20;
    }

    ui->S_label_2->setNum(score);
    return;
}

void Grade_Calculator::on_pushButton_clicked()
{
    this-> close();
}


void Grade_Calculator::on_horizontalSlider1_valueChanged(int value)
{
    ui->spinBox1->setValue(value);
}

void Grade_Calculator::on_spinBox1_valueChanged(int arg1)
{
    ui->horizontalSlider1->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_2_valueChanged(int value)
{
    ui->spinBox1_2->setValue(value);
}

void Grade_Calculator::on_spinBox1_2_valueChanged(int arg1)
{
    ui->horizontalSlider1_2->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_3_valueChanged(int value)
{
    ui->spinBox1_3->setValue(value);
}

void Grade_Calculator::on_spinBox1_3_valueChanged(int arg1)
{
    ui->horizontalSlider1_3->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_4_valueChanged(int value)
{
    ui->spinBox1_4->setValue(value);
}

void Grade_Calculator::on_spinBox1_4_valueChanged(int arg1)
{
    ui->horizontalSlider1_4->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_5_valueChanged(int value)
{
    ui->spinBox1_5->setValue(value);
}

void Grade_Calculator::on_spinBox1_5_valueChanged(int arg1)
{
    ui->horizontalSlider1_5->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_6_valueChanged(int value)
{
    ui->spinBox1_6->setValue(value);
}

void Grade_Calculator::on_spinBox1_6_valueChanged(int arg1)
{
    ui->horizontalSlider1_6->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void Grade_Calculator::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
}

void Grade_Calculator::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
}

void Grade_Calculator::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
}

void Grade_Calculator::on_comboBox_currentIndexChanged(int index)
{

    ui->stackedWidget->setCurrentIndex(index);
}

void Grade_Calculator::on_horizontalSlider1_7_valueChanged(int value)
{
    ui->spinBox1_7->setValue(value);
}

void Grade_Calculator::on_spinBox1_7_valueChanged(int arg1)
{
    ui->horizontalSlider1_7->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_8_valueChanged(int value)
{
    ui->spinBox1_8->setValue(value);
}

void Grade_Calculator::on_spinBox1_8_valueChanged(int arg1)
{
    ui->horizontalSlider1_8->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_9_valueChanged(int value)
{
    ui->spinBox1_9->setValue(value);
}

void Grade_Calculator::on_spinBox1_9_valueChanged(int arg1)
{
    ui->horizontalSlider1_9->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider1_10_valueChanged(int value)
{
    ui->spinBox1_10->setValue(value);
}

void Grade_Calculator::on_spinBox1_10_valueChanged(int arg1)
{
    ui->horizontalSlider1_10->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
}

void Grade_Calculator::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
}

void Grade_Calculator::on_horizontalSlider_6_valueChanged(int value)
{
    ui->spinBox_6->setValue(value);
}

void Grade_Calculator::on_spinBox_6_valueChanged(int arg1)
{
    ui->horizontalSlider_6->setValue(arg1);
}


void Grade_Calculator::on_pushButton_2_clicked()
{
    this->close();
}
