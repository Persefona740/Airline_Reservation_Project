// Anna Cebula, year 1, 31833, IT, extramural studies
// Project name : Airline Reservation Project
// Open-source code editor : Visual Studio Code + C/C++ extensions
// GDB debugger from mingw-w64, latest version MSYS2.

#include <iostream> //basic input and output
#include <fstream> //operate on files
#include <iomanip>  //manipulator functions

using namespace std;

void mainMenu(); //function prototype

class Management //class and constructor
{
    public:
        Management()
        {
            mainMenu();
        }
};

class Details //user details
{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100]; //position from 0 to 99

        void information()
        {
            cout << "\nEnter the customer ID:"; // that could be the number from 0 to 99
            cin >> cId;
            cout << "\nEnter the name :";
            cin >> name;
            cout << "\nEnter the age :";
            cin >> age;
            cout << "\nAddress :"; // that could be just city or town name
            cin >> add;
            cout << "\nGender: ";
            cin >> gender;
            cout << "Details has been saved\n" << endl;

        }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration //that allows to display available flights, where user can book a flight
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","USA","Australia","Spain"};

            for(int a=0;a<6;a++)
            {
                cout << (a+1) << ".flight to " << flightN[a] << endl;
            }

            cout << "\nWelcome to the Airlines" << endl;
            cout << "Press the number of the country where you want to book a flight:";
            cin >> choice;

            switch (choice)
            {
                case 1:
                {
                    cout << "_________Welcome to Dubai Emirates__________\n" << endl;

                    cout << "Below are the available flights \n" << endl;

                    cout << "1. DUB - 123" << endl;
                    cout << "\t08-01-2024 8:00AM 7h PLN 1700" << endl;
                    cout << "2. DUB - 456" << endl;
                    cout << "\t09-01-2024 4:00AM 9h PLN 1300" << endl;
                    cout << "3. DUB - 789" << endl;
                    cout << "\t11-01-2024 10:00AM 8h PLN 1500" << endl;

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if (choice1==1)
                    {
                       charges=1700;
                       cout << "\nYou have booked the flight DUB - 123" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==2)
                    {
                       charges=1300;
                       cout << "\nYou have booked the flight DUB - 456" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==3)
                    {
                       charges=1500;
                       cout << "\nYou have booked the flight DUB - 789" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else
                    {
                        cout << "Invalid input,returning to previous menu" << endl;
                        flights();
                    }
                    
                    cout << "Press any key to go back to the main menu:" << endl;
                    cin >> back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                    
                }
                case 2:
                {
                    cout << "_________Welcome to Air Canada__________\n" << endl;

                    cout << "Below are the available flights \n" << endl;

                    cout << "1. ACA - 123" << endl;
                    cout << "\t08-01-2024 9:00AM 11h PLN 3900" << endl;
                    cout << "2. ACA - 456" << endl;
                    cout << "\t09-01-2024 3:00AM 12h PLN 4300" << endl;
                    cout << "3. ACA - 789" << endl;
                    cout << "\t11-01-2024 11:00AM 11h PLN 3700" << endl;

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if (choice1==1)
                    {
                       charges=3900;
                       cout << "\nYou have booked the flight ACA - 123" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==2)
                    {
                       charges=4300;
                       cout << "\nYou have booked the flight ACA - 456" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==3)
                    {
                       charges=3700;
                       cout << "\nYou have booked the flight ACA - 789" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else
                    {
                        cout << "Invalid input,returning to previous menu" << endl;
                        flights();
                    }

                    cout << "Press any key to go back to the main menu:" << endl;
                    cin >> back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                    
                }
                case 3:
                {
                    cout << "_________Welcome to UK Airlines__________\n" << endl;

                    cout << "Below are the available flights \n" << endl;

                    cout << "1. UKA - 123" << endl;
                    cout << "\t08-01-2024 7:00AM 2h PLN 300" << endl;
                    cout << "2. UKA - 456" << endl;
                    cout << "\t09-01-2024 10:00AM 3h PLN 400" << endl;

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if (choice1==1)
                    {
                       charges=300;
                       cout << "\nYou have booked the flight UKA - 123" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==2)
                    {
                       charges=400;
                       cout << "\nYou have booked the flight UKA - 456" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else
                    {
                        cout << "Invalid input,returning to previous menu" << endl;
                        flights();
                    }

                    cout << "Press any key to go back to the main menu:" << endl;
                    cin >> back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                    
                }
                case 4:
                {
                    cout << "_________Welcome to USA Airlines__________\n" << endl;

                    cout << "Below are the available flights \n" << endl;

                    cout << "1. USA - 123" << endl;
                    cout << "\t09-01-2024 7:00AM 11h PLN 3900" << endl;
                    cout << "2. USA - 456" << endl;
                    cout << "\t11-01-2024 5:00AM 12h PLN 4300" << endl;
                    cout << "3. USA - 789" << endl;
                    cout << "\t14-01-2024 9:00AM 11h PLN 3700" << endl;

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if (choice1==1)
                    {
                       charges=3900;
                       cout << "\nYou have booked the flight USA - 123" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==2)
                    {
                       charges=4300;
                       cout << "\nYou have booked the flight USA - 456" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==3)
                    {
                       charges=3700;
                       cout << "\nYou have booked the flight USA - 789" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else
                    {
                        cout << "Invalid input,returning to previous menu" << endl;
                        flights();
                    }

                    cout << "Press any key to go back to the main menu:" << endl;
                    cin >> back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                    
                }
                case 5:
                {
                    cout << "_________Welcome to Australian Airlines__________\n" << endl;

                    cout << "Below are the available flights \n" << endl;

                    cout << "1. AUL - 123" << endl;
                    cout << "\t04-01-2024 2:00AM 21h PLN 7300" << endl;
                    cout << "2. AUL - 456" << endl;
                    cout << "\t19-01-2024 6:00AM 23h PLN 6400" << endl;

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if (choice1==1)
                    {
                       charges=7300;
                       cout << "\nYou have booked the flight AUL - 123" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==2)
                    {
                       charges=6400;
                       cout << "\nYou have booked the flight AUL - 456" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else
                    {
                        cout << "Invalid input,returning to previous menu" << endl;
                        flights();
                    }

                    cout << "Press any key to go back to the main menu:" << endl;
                    cin >> back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                    
                }
                case 6:
                {
                    cout << "______Welcome to Spain Airlines IBERIA______\n" << endl;

                    cout << "Below are the available flights \n" << endl;

                    cout << "1. IBE - 123" << endl;
                    cout << "\t03-01-2024 1:00AM 2h PLN 400" << endl;
                    cout << "2. IBE - 456" << endl;
                    cout << "\t07-01-2024 10:00AM 3h PLN 500" << endl;
                    cout << "3. IBE - 789" << endl;
                    cout << "\t10-01-2024 08:00AM 2h PLN 400" << endl;

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if (choice1==1)
                    {
                       charges=400;
                       cout << "\nYou have booked the flight IBE - 123" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==2)
                    {
                       charges=500;
                       cout << "\nYou have booked the flight IBE - 456" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else if (choice1==3)
                    {
                       charges=400;
                       cout << "\nYou have booked the flight IBE - 789" << endl;
                       cout << "You can go back to menu and collect the ticket" << endl;
                    }
                    else
                    {
                        cout << "Invalid input,returning to previous menu" << endl;
                        flights();
                    
                    }
                    cout << "Press any key to go back to the main menu:" << endl;
                    cin >> back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                  
                }
                default :
                {
                    cout << "Invalid input, returning to previous menu ." << endl;
                    mainMenu();
                    break;
                }
            break;
            }
            
        }
        
};

float Registration::charges;
int Registration::choice;


class Ticket : public Registration, Details
    {
        public:
            void bill()
            {
                string destination="";
                ofstream outf("records.txt");
                {
                    outf << "         CPP Airlines       " << endl;
                    outf << "___________Ticket___________" << endl;
                    outf << "____________________________" << endl;

                    outf << "Customer ID:" << Details::cId << endl;
                    outf << "Customer Name:" << Details::name << endl;
                    outf << "Customer gender:" << Details::gender << endl;
                    outf << "\t";

                    if (Registration::choice==1)
                    {
                        destination="Dubai";
                    }
                    else if (Registration::choice==2)
                    {
                        destination="Canada";
                    }
                    else if (Registration::choice==3)
                    {
                        destination="UK";
                    }
                    else if (Registration::choice==4)
                    {
                        destination="USA";
                    }
                    else if (Registration::choice==5)
                    {
                        destination="Australia";
                    }
                    else if (Registration::choice==6)
                    {
                        destination="Spain";
                    }
                    outf << "Destination\t\t" << destination << endl;
                    outf << "Flight cost :\t\t" << Registration::charges << endl;
                }
                outf.close();
            }
            void dispbill()
            {
                ifstream ifs("records.txt");
                {
                    if (!ifs)
                    {
                        cout << "File error!" << endl;
                    }
                    while (!ifs.eof())
                    {
                        ifs.getline(arr, 100);
                        cout << arr << endl;
                    }
                }
                ifs.close();
            }
    };


void mainMenu() //main menu function
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t*********************  CPP Airlines  *********************\n" << endl;
    cout << "\t________________________Main Menu______________________" << endl;

    cout << "\t________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    
    //button to open functionality for user
    //1 - add customer details
    //2 - flight registration
    //3 - tickets and fees (charges)
    //4 - exit
    cout << "\t|\t Press 1 to add the Customer Details      \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration          \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Fees              \t|" << endl;
    cout << "\t|\t Press 4 to Exit                          \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t________________________________________________________" << endl;

    //taking input from the user
    cout << "Enter the choice : ";
    cin >> lchoice;

    //separate classes for 3 above
    Details d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {

        case 1/* switch case inside*/:
            {
            cout << "_________________Customers___________________\n" << endl;
            d.information();
            cout << "Press any key to go back to the Main menu";
            cin >> back;

            if (back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
            }
            
        case 2:
            {
                cout << "__________Book a flight using this system_________\n" << endl;
                r.flights();
                break;
            }

        case 3:
            {
            cout << "_________GET YOUR TICKET________\n" << endl;
            t.bill();

            cout << "Ticket is printed, please collect it \n" << endl;
            cout << "Press 1 to display ticket  ";

            cin >> back;
                if (back==1)
                {
                    t.dispbill();
                    cout << "Press any key to back to main menu";
                    cin >> back;

            if (back==1)
            {
                mainMenu();
            }
            
            }
            else
            {
                mainMenu();
            }
            break;
            }
        case 4:
            {
                cout << "\n\n\t________Thank you________" << endl;
                break;
            }

            default :
                {
                    cout << "Invalid input, please try again.\n" << endl;
                    mainMenu();
                    break;
                }
    break;
    }
    
}


int main() //object of a class, class name Management
{
    Management Mobj;
    return 0;
}