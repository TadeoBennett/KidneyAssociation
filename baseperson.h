#ifndef BASEPERSON_H
#define BASEPERSON_H

#include <iostream>
#include <string>//These should be replaced with QT Equivalent
//using std::string;//These should be replaced with QT Equivalent
//using std::cout;
//using std::endl;
//using std::cin;

using namespace std; // I have used name space instead of using stds for each library

#include <QString>

class BasePerson
{
public:
    BasePerson();
    BasePerson(QString fname,QString lname,QString phone,QString email,int status);

private:
    int personID;
    QString firstName;//These should be replaced with QT Equivalent
    QString lastName;//These should be replaced with QT Equivalent
    QString phoneNumber;//These should be replaced with QT Equivalent
    QString email;//These should be replaced with QT Equivalent
    int status;

public:
    //--------------------------getters
    int getPersonID();
    QString getFirstName();
    QString getLastName();
    QString getPhoneNumber();
    QString getEmail();
    int getStatus();

    //--------------------------setters
    void setPersonID(int id);
    void setFirstName(QString fname);
    void setLastName(QString lname);
    void setPhoneNumber(QString pnumber);
    void setEmail(QString em);
    void setStatus(int flag);


};

#endif // BASEPERSON_H
