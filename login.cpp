#include "login.h"
#include "ui_login.h"

#include <QMessageBox>
#include <QSqlDatabase>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    //Validate what is currently entered!
    connect(ui->loginButton,SIGNAL(clicked()),this,SLOT(validateLoginCredentials()));






}


login::~login()
{
    delete ui;
}

void login::validateLoginCredentials()
{
    //Create a database connection? Or let it be handled by a database class system?
    //Pass in the password and user
    //Send this data to the database


    qDebug() <<  "Pass: " << ui->PasswordEdit->text();
    qDebug() << "User: " << ui->UsernameEdit->text();

    QString username = ui->UsernameEdit->text();
    QString password = ui->PasswordEdit->text();



    switch ( db.loginUser(username,password)){

    case -1:
    {
        //AN Internal Error has occured!
        QMessageBox::critical(this,tr("Internal Server Error"),tr("An Internal Error occured, Please contact the administrators!"),QMessageBox::Ok);
        //Close the application
        break;

    }//Case -1

    case 0:{
    //The user credential was incorrect

     QMessageBox::warning(this,tr("Invalid Login!"),tr("The information is incorrect, please try again!"),QMessageBox::Ok);

    break;
    }

    case 1:{

        //User logged in as ADMIN
        QMessageBox::information(this,tr("Welcome ADMIN"),tr("Successfully logged in as %1").arg(username),QMessageBox::Ok);
        //Create a main menu

        this->close();

        break;
    }

    case 2:{
        //User logged in as DESK
        QMessageBox::information(this,tr("Welcome DESK"),tr("Successfully logged in as %1").arg(username),QMessageBox::Ok);
        break;
    }

    case 3:{
        //User logged in as DOCTOR
        QMessageBox::information(this,tr("Welcome DOCTOR"),tr("Successfully logged in as %1").arg(username),QMessageBox::Ok);
        break;
    }

    }//switch end statement



}//validateLoginCredentials()
