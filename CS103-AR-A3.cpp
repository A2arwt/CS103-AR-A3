// Code file created by alex t (Alex Thompson) hi
// Date created: 8/06/2021 5:00 

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <vector>
#include <time.h>

const int namesize = 50;

using namespace std;

struct UserLogin
{
    char Username[namesize];
    char Password[namesize];
    char AccType[namesize];
};
UserLogin LoginDetails;

struct AdminInfo
{
    char FirstName[namesize];
    char LastName[namesize];
    char Gender[namesize];
    char Dob[namesize];
    char Email[namesize];
    char PhoneNum[namesize];
};
AdminInfo A;

struct TeacherInfo
{
    char FirstName[namesize];
    char LastName[namesize];
    char Gender[namesize];
    char Dob[namesize];
    char Email[namesize];
    char PhoneNum[namesize];
    char ClassNum[namesize];
    char Year[namesize];
    char Username[namesize];
    char Password[namesize];
    char AccType[namesize];
};
TeacherInfo T;

struct ParentInfo
{
    char FirstName[namesize];
    char LastName[namesize];
    char Gender[namesize];
    char Dob[namesize];
    char Email[namesize];
    char PhoneNum[namesize];
};
ParentInfo P;

struct StudentInfo
{
    char FirstName[namesize];
    char LastName[namesize];
    char Gender[namesize];
    char Dob[namesize];
    char Email[namesize];
    char PhoneNum[namesize];
    char ClassNum[namesize];
    char Year[namesize];
    char EmergencyContact[namesize];
    char Parent1[namesize];
    char Parent2[namesize];
    char Maths[namesize];
    char Science[namesize];
    char Reading[namesize];
    char Writing[namesize];
    char OtherGrades[namesize];
    char FinalGrade[namesize];
};
StudentInfo S;


void PrintLine();
void TeacherMenu();
void ParentMenu();
void AdminMenu();
void StudentMenu();
void IntroScreen();
void Menu();
void ClassInfo();
void GetLoginMenu();
void GetLogin();
void NewTeacher();
void NewParent();
void ReadTeacher(char usernamechar[], char passwordchar[], char acctypechar[], char teacher[]);
void ReadParent(char acctypechar[], char parent[]);




int main()
{
    IntroScreen();
}

void TeacherMenu()
{

}

void ParentMenu()
{

}

void AdminMenu()
{
    system("CLS");

    cout << "\nAdmin Menu\n";
    PrintLine();

    char Cnum[namesize];
    char Pname[namesize];
    char Sname[namesize];
    int ans1;
    char yn1;

    cout << "\n1. class records\n";
    cout << "\n2. Parent records\n";
    cout << "\n3. Student records\n";
    cout << "\n4. Back to menu\n";

    cout << "\nWhat records would you like to access: ";
    cin >> ans1;

    if (ans1 == 1)
    {
        system("CLS");

        cout << "\nEnter the class you want to pull records for: ";
        cin >> Cnum;
        if (strcmp(Cnum, S.ClassNum) == 0)
        {
            //Pull up all students from the entered class
        }
        else
        {
            cout << "\nCouldn't find class, would you like to continue? (y/n)\n";
            cin >> yn1;
            if (yn1 == 'y' || yn1 == 'Y')
            {
                AdminMenu();
            }
            else
            {
                system("CLS");
                terminate;
            }
        }
    }

    if (ans1 == 2)
    {
        cout << "\nEnter the first or last name of the parent you want to pull records for: ";
        cin >> Pname;
        if (strcmp(Pname, P.FirstName) || (Pname, P.LastName) == 0)
        {
            cout << "First name: " << P.FirstName[namesize];
            cout << "Last name: " << P.LastName[namesize];
            cout << "Gender: " << P.Gender[namesize];
            cout << "Date of birth: " << P.Dob[namesize];
            cout << "Email: " << P.Email[namesize];
            cout << "Phone number: " << P.PhoneNum[namesize];
        }
    }

    if (ans1 == 3)
    {
        cout << "\nEnter the first or last name of the student you want to pull records for: ";
        cin >> Sname;;
        if (strcmp(Sname, S.FirstName) || (Sname, S.LastName) == 0)
        {
            //Pull up all students from the entered class
        }
    }

    if (ans1 == 4)
    {
        Menu();
    }
}

void StudentMenu()
{

}

void IntroScreen()
{
    char ans;

    PrintLine();
    cout << "\nWelcome to Rawhiti Primary School\n\n";
    PrintLine();

    cout << "\nContact Details:";
    cout << "\nPhone: (08)3889519";
    cout << "\nText: 02108271380";
    cout << "\nEmail: admin@rawhiti.school.nz\n";

    cout << "\nLatest events:\n";
    cout << "Lunches in schools\n";
    cout << "Rawhiti School A&P Show 2021\n";
    cout << "Queens Birthday Weekend\n";

    cout << "\nTerm Dates:\n";
    cout << "Term 1: 1/02/2021 - 16/04/2021\n";
    cout << "Term 2: 3/05/2021 - 9/07/2021\n";
    cout << "Term 3: 26/07/2021 - 1/10/2021\n";
    cout << "Term 4: 18/10/2021 - 20/12/2021\n\n";

    cout << "Do you wish to open the menu? (y/n) ";
    cin >> ans;

    if (ans == 'y' || ans == 'Y')
    {
        GetLoginMenu();
    }
    else if (ans == 'n' || ans == 'N')
    {
        PrintLine();
        system("CLS");
        cout << "\nFile Closed\n\n";
        PrintLine();
        terminate;
    }
    else
    {
        cout << "Please select a valid option: ";
        cin >> ans;
    }

}

void PrintLine()
{
    for (int i = 0; i < 50; i++)
    {
        cout << "~";
    }
    cout << endl;
}

void Menu()
{
    system("CLS");

    int ans1;
    if (!Menu)
    {
        cout << "\nERROR\n";
    }
    else
    {
        cout << "\nMenu\n";
        PrintLine();

        cout << "\n1. Admin Menu\n";
        cout << "2. Parent Menu\n";
        cout << "3. Student Menu\n";
        cout << "4. Teacher Menu\n";

        cout << "\nPlease select a menu to go to: ";
        cin >> ans1;

        if (ans1 == 1)
        {
            AdminMenu();
        }
        else if (ans1 == 2)
        {
            ParentMenu();
        }
        else if (ans1 == 3)
        {
            StudentMenu();
        }
        else if (ans1 == 4)
        {
            TeacherMenu();
        }

    }
}

void ClassInfo()
{

}

void GetLoginMenu()
{
    int menuopt;
    char move;

    while (1)
    {
        system("CLS");
        cout << "\nMenu\n";
        PrintLine();
        cout << "\n1. Login." << endl;
        cout << "2. New Teacher Register." << endl;
        cout << "3. New Parent Register." << endl;
        cout << "4. Exit." << endl;
        cout << "\nPlease select an option: ";
        cin >> menuopt;
        cin.ignore();

        switch (menuopt)
        {
        case 1:
        {
            cout << "\nLoading Login.." << endl;
            GetLogin();
            break;
        }
        case 2:
        {
            cout << "\nLoading New Teacher Register." << endl;
            NewTeacher();
            break;
        }
        case 3:
        {
            cout << "\nLoading New Parent Register." << endl;
            NewParent();
            break;
        }
        case 4:
        {
            cout << "\nExit." << endl;
            exit(0);
        }
        default:
        {
            cout << "\nPlease enter a valid option\n" << endl;
        }

        }
        cout << "\nWould you like to go back to the login menu? (y/n) : ";
        cin >> move;
        cin.ignore();
    } while (move == 'y');
}

void GetLogin()
{
    system("CLS");
    UserLogin LoginDetails;
    TeacherInfo NewTeacher;
    fstream LoginFile, TeacherFile, ParentFile;

    int tries = 3;
    int attempts = 0;
    char usernamechar[namesize];
    char passwordchar[namesize];
    char acctypechar[namesize];
    char teacher[namesize] = "TEACHER";
    char parent[namesize] = "PARENT";
    char admin[namesize] = "ADMIN";
    bool flag = false;
    bool accflag = false;

    LoginFile.open("LoginFile.dat", ios::in | ios::binary);

    while (attempts < 3)
    {
        if (!LoginFile)
        {
            cout << "\nDatabase Error. The database file does not exist\n";
        }
        else
        {
            cout << "Login\n";
            PrintLine();

            cout << "Enter your details to login\n";
            cout << " \t*Login is case sensitive*\n" << "Please ensure all details are entered in correctly\n\n";
            cout << "Username: ";
            cin.getline(usernamechar, namesize);
            cout << " Password: ";
            cin.getline(passwordchar, namesize);
            cout << "Account Type: " << " (ADMIN | TEACHER | PARENT) : ";
            cin.getline(acctypechar, namesize);

            LoginFile.read(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));

            while (!LoginFile.eof())
            {
                if ((strcmp(usernamechar, LoginDetails.Username) == 0) && (strcmp(passwordchar, LoginDetails.Password) == 0) && (strcmp(acctypechar, teacher) == 0))
                {
                    ReadTeacher(usernamechar, passwordchar, acctypechar, teacher);
                    cout << endl << endl << endl;
                    cout << "Welcome " << LoginDetails.Username << "!\n";
                    cout << "Get Teacher Menu\n";
                    flag = true;
                    TeacherMenu();
                    break;
                }

                else if ((strcmp(usernamechar, LoginDetails.Username) == 0) && (strcmp(passwordchar, LoginDetails.Password) == 0) && (strcmp(acctypechar, parent) == 0))
                {
                    cout << endl << endl << endl;
                    ReadParent(acctypechar, parent);
                    cout << endl << endl << "Get Parent Menu\n";
                    flag = true;
                    ParentMenu();
                    break;
                }

                else if ((strcmp(usernamechar, LoginDetails.Username) == 0) && (strcmp(passwordchar, LoginDetails.Password) == 0) && (strcmp(acctypechar, admin) == 0))
                {
                    cout << endl << endl << endl;
                    ReadParent(acctypechar, admin);
                    cout << endl << endl << "Get Admin Menu\n";
                    flag = true;
                    AdminMenu();
                    break;
                }

                else
                {
                    cout << "Account type error\n";
                    attempts++;
                }
            }

            LoginFile.read(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));
        }
        if (flag == false)
        {
            cout << endl << "\nLogin not found\n";
            cout << "You have " << tries-- << " left\n";
            attempts++;
        }

    }

    LoginFile.close();
}

void NewTeacher()
{
    system("CLS");
    UserLogin LoginDetails;
    TeacherInfo NewTeacher;
    fstream LoginFile, TeacherFile;
    char PasswordCheck[namesize];
    char UsernameCheck[namesize];
    bool saveinfo = false;
    int teachernum = 1234;


    //////////////////////////
    // IOS :: APP TEACHER FILE
    TeacherFile.open("TeacherFile.dat", ios::out | ios::app | ios::binary);
    if (!TeacherFile)
    {
        cout << "Database Error. The database file does not exist\n";
    }
    else
    {

        cout << endl << " New Teacher Registration\n";
        cout << " Enter your details below to register\n";
        PrintLine();
        cout << "First Name: ";
        cin.getline(NewTeacher.FirstName, 50);
        cout << "Enter Last Name: ";
        cin.getline(NewTeacher.LastName, 50);
        cout << "Date of Birth: ";
        cin.getline(NewTeacher.Dob, 50);
        cout << "Gender: ";
        cin.getline(NewTeacher.Gender, 50);
        cout << "Email: ";
        cin.getline(NewTeacher.Email, 50);
        cout << "Phone Number: ";
        cin.getline(NewTeacher.PhoneNum, 50);
        cout << "Class Number: ";
        cin.getline(NewTeacher.ClassNum, 50);
        cout << "Class Year: ";
        cin.getline(NewTeacher.Year, 50);

        TeacherFile.write(reinterpret_cast<char*>(&NewTeacher), sizeof(NewTeacher));
    }
    TeacherFile.close();

    ////////////////////////
    // IOS :: APP LOGIN FILE
    LoginFile.open("LoginFile.dat", ios::out | ios::app | ios::binary);

    if (!LoginFile)
    {
        cout << "Database Error. The database file does not exist\n";
    }
    else
    {
        cout << endl << "Now please create your login details\n";
        cout << "Username: ";
        cin.getline(LoginDetails.Username, 50);
        (strcpy_s(NewTeacher.Username, LoginDetails.Username));
        cout << "Password: ";
        cin.getline(LoginDetails.Password, 50);
        (strcpy_s(NewTeacher.Password, LoginDetails.Password));
        LoginFile.write(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));
    }
    LoginFile.close();

    cout << endl << "Confirm your login details." << endl;

    LoginFile.open("LoginFile.dat", ios::in | ios::binary);

    if (!LoginFile)
    {
        cout << "Database Error. The database file does not exist.";
    }
    else
    {
        cout << "Confirm Username: ";
        cin.getline(UsernameCheck, 50);
        cout << "Confirm Password: ";
        cin.getline(PasswordCheck, 50);

        LoginFile.read(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));

        while (!LoginFile.eof())
        {
            if ((strcmp(UsernameCheck, LoginDetails.Username) == 0) && (strcmp(PasswordCheck, LoginDetails.Password) == 0))
            {

                saveinfo = true;
                PrintLine();
                cout << endl << endl;
                cout << "\tHello " << NewTeacher.FirstName << "!\n\n";
                cout << "\tWelcome to Rawhiti Primary Online. \n";
                cout << "\tYour Online Teacher Number is: #RPS" << teachernum << ".\n" << endl;
                cout << "\tMy Online Profile:" << endl;
                cout << "\t" << NewTeacher.FirstName << " " << NewTeacher.LastName << "\t\t\t\t\t\t\tMy O.T.N:  #RPS" << teachernum << endl;
                cout << "\tD.O.B: " << NewTeacher.Dob << "\tGender: " << NewTeacher.Gender << endl;
                cout << "\tPhone: " << NewTeacher.PhoneNum << " \tEmail: " << NewTeacher.Email << endl;
                cout << "\tClass: " << NewTeacher.ClassNum << " yy\tYear: " << NewTeacher.Year << endl << endl;
                cout << "\tYour login details have been saved as follows\n";
                cout << "\tUsername: " << LoginDetails.Username << "\tPassword: " << LoginDetails.Password << endl << endl << endl;
                PrintLine();

            }
            LoginFile.read(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));
            teachernum++;
        }
        if (saveinfo == false)
        {
            cout << "\nThe details you entered are incorrect. Please check your dtails and try again\n";
        }

    }

    LoginFile.close();
}

void NewParent()
{
    system("CLS");
    UserLogin LoginDetails;
    ParentInfo NewParent;
    fstream LoginFile, ParentFile;
    char PasswordCheck[namesize];
    char UsernameCheck[namesize];
    bool saveinfo = false;
    int parentnum = 0234;

    ParentFile.open("ParentFile.dat", ios::out | ios::app | ios::binary);
    if (!ParentFile)
    {
        cout << " Database Error. The database file does not exist\n";
    }
    else
    {

        cout << endl << "New Parent Registration\n";
        cout << "Enter your details below to register\n";
        PrintLine();
        cout << "First Name: ";
        cin.getline(NewParent.FirstName, 50);
        cout << "Enter Last Name: ";
        cin.getline(NewParent.LastName, 50);
        cout << "Date of Birth: ";
        cin.getline(NewParent.Dob, 50);
        cout << "Gender: ";
        cin.getline(NewParent.Gender, 50);
        cout << "Email: ";
        cin.getline(NewParent.Email, 50);
        cout << "Phone Number: ";
        cin.getline(NewParent.PhoneNum, 50);


        ParentFile.write(reinterpret_cast<char*>(&NewParent), sizeof(NewParent));
    }
    ParentFile.close();

    LoginFile.open("LoginFile.dat", ios::out | ios::app | ios::binary);

    if (!LoginFile)
    {
        cout << "Database Error. The database file does not exist\n";
    }
    else
    {
        cout << "Username: ";
        cin.getline(LoginDetails.Username, 50);
        cout << "Password: ";
        cin.getline(LoginDetails.Password, 50);
        cout << endl;

        LoginFile.write(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));
    }
    LoginFile.close();

    cout << endl << "Now please confirm your login details\n";

    LoginFile.open("LoginFile.dat", ios::in | ios::binary);

    if (!LoginFile)
    {
        cout << "Database Error. The database file does not exist\n";
    }
    else
    {
        cout << "Confirm Username: ";
        cin.getline(UsernameCheck, 50);
        cout << "Confirm Password: ";
        cin.getline(PasswordCheck, 50);

        LoginFile.read(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));

        while (!LoginFile.eof())
        {
            if ((strcmp(UsernameCheck, LoginDetails.Username) == 0) && (strcmp(PasswordCheck, LoginDetails.Password) == 0))
            {
                saveinfo = true;
                PrintLine();
                cout << endl << endl;
                cout << "\tHello " << NewParent.FirstName << "!\n";
                cout << "\tWelcome to Rawhiti Primary Online\n";
                cout << "\tYour Online Teacher Number is: #RPS" << parentnum << "." << endl << endl;
                cout << "\tMy Online Profile:" << endl;
                cout << "\t" << NewParent.FirstName << " " << NewParent.LastName << "\t\t\t\t\t\t\t\tMy O.T.N:  #RPS" << parentnum << endl;
                cout << "\tD.O.B: " << NewParent.Dob << "\tGender: " << NewParent.Gender << endl;
                cout << "\tPhone: " << NewParent.PhoneNum << " \tEmail: " << NewParent.Email << endl;

                cout << "\tYour login details have been saved as follows." << endl;
                cout << "\tUsername: " << LoginDetails.Username << "\tPassword: " << LoginDetails.Password << endl << endl << endl;
                PrintLine();
                parentnum += 1;
            }
            LoginFile.read(reinterpret_cast<char*>(&LoginDetails), sizeof(LoginDetails));
        }
        if (saveinfo == false)
        {
            cout << endl << "The details you entered are incorrect. Please check your dtails and try again." << endl;
        }
    }
    LoginFile.close();
}

void ReadTeacher(char usernamechar[], char passwordchar[], char acctypechar[], char teacher[])
{
    UserLogin LoginDetails;
    TeacherInfo ReadTeacher;
    fstream LoginFile, TeacherFile;

    //////////////////////////
    // IOS :: APP TEACHER FILE
    TeacherFile.open("TeacherFile.dat", ios::in | ios::binary);
    if (!TeacherFile)
    {
        cout << "Database Error. The database file does not exist\n";
        cout << "Please register an account first if you have not\n";
    }
    else
    {
        TeacherFile.read(reinterpret_cast<char*>(&ReadTeacher), sizeof(ReadTeacher));
        while (!TeacherFile.eof())
        {

            if ((strcmp(usernamechar, ReadTeacher.Username) == 0) && (strcmp(passwordchar, ReadTeacher.Password) == 0))
            {
                cout << endl << endl;
                cout << "Welcome " << ReadTeacher.FirstName << " " << ReadTeacher.LastName << "!" << endl;
                cout << "Email: " << ReadTeacher.Email << endl;
            }

            TeacherFile.read(reinterpret_cast<char*>(&ReadTeacher), sizeof(ReadTeacher));
        }

    }
    TeacherFile.close();
}

void ReadParent(char acctypechar[], char parent[])
{
    UserLogin LoginDetails;
    ParentInfo NewParent;
    fstream LoginFile, ParentFile;

    //////////////////////////
    // IOS :: APP TEACHER FILE
    ParentFile.open("ParentFile.dat", ios::in | ios::binary);
    if (!ParentFile)
    {
        cout << "Database Error. The database file does not exist.";
    }
    else
    {
        ParentFile.read(reinterpret_cast<char*>(&NewParent), sizeof(NewParent));
        while (!ParentFile.eof())
        {
            if (strcmp(acctypechar, parent) == 0)
            {
                cout << endl << endl;
                cout << "Welcome " << NewParent.FirstName << " " << NewParent.LastName << "!" << endl;
                cout << "Email: " << NewParent.Email << endl;
            }
            ParentFile.read(reinterpret_cast<char*>(&NewParent), sizeof(NewParent));
        }

    }
    ParentFile.close();
}
