
//  included header files list 

#include<iostream>  // c++ program must need iostream to run, it's not optional
#include<conio.h>   // for use clrscr(); function, it's optional
#include<iomanip>   // for use manipulator like setw, setfill etc...
#include<fstream>   // file that store user's order

// it's necessary for declare stadard name like cout, cin, endl etc...
using namespace std;



// that function use only for output style
void line()
{
    cout << endl << "----------------------------------------------------------------------------------------------------------------------------------------";
}



// class shop_data is a base class and an abstrack class too
class shop_data
{
    protected:
    int qunt=0;
    int price=0;
    int ch;

    public:
    virtual void get_qunt() {}    
};


// class food_data is have data of food like pizza, burger etc...,
class food_data : public shop_data
{
    public:

    void get_qunt()
    {
        cout << setw(80) << "Enter Quanties Of Your Choice: ";
        cin >> qunt;
    }
    void food()
    {
        
        system("CLS");
        line();
        cout << setw(75) << "AVAILABLE FOOD IN SHOP ";
        line();
        cout << "\n\n";
        cout << setw(55) << "Options" << setw(20) << "Price\n\n";
        cout << setw(56) << "1. Pizza" << setw(23) << "329 rupees\n";
        cout << setw(57) << "2. Burger" << setw(22) << "119 ruppes\n";
        cout << setw(59) << "3. Sandwich" << setw(20) << "110 rupees\n";
        line(); 
        cout << setw(80) << "Select Your Favourite One: ";
        cin >> ch;      line();
        
        qunt=0;
        get_qunt();

        switch (ch)
        {
        case 1: price = qunt*329;
                cout << "You Have To Pay " << price << " for " << qunt << " pizza" << endl;
                break;

        case 2: price = qunt*119;
                cout << "You Have To Pay " << price << " for " << qunt << " burger" << endl;
                break;

        case 3: price = qunt*110;
                cout << "You Have To Pay " << price << " for " << qunt << " sandwich" << endl;
                break;
        
        default: cout << "please choose available choice\n";
                 break;
        }
    }
};


// class drinks_data is have data of drinks like pepsi, cola etc...,
class drinks_data : public shop_data
{
    public:

    void get_qunt()
    {
        cout << setw(80) << "Enter Quanties Of Your Choice: ";
        cin >> qunt;
    }
    void drinks()
    {
        system("CLS");
        line();
        cout << setw(75) << "AVAILABLE DRINKS IN SHOP ";
        line();
        cout << "\n\n";
        cout << setw(55) << "Options" << setw(20) << "Price\n\n";
        cout << setw(56) << "1. Pepsi" << setw(23) << "79 rupees\n";
        cout << setw(60) << "2. Coka Cola" << setw(22) << "69 ruppes\n";
        cout << setw(59) << "3. Diet Coke" << setw(20) << "51 rupees\n";
        line();
        cout << setw(80) << "Select Your Favourite One: ";
        cin >> ch;      line();
        
        qunt=0;
        get_qunt();

        switch (ch)
        {
        case 1: price = qunt*79;
                cout << "You Have To Pay " << price << " for " << qunt << " pepsi" << endl;
                break;

        case 2: price = qunt*69;
                cout << "You Have To Pay " << price << " for " << qunt << " coka cola" << endl;
                break;

        case 3: price = qunt*51;
                cout << "You Have To Pay " << price << " for " << qunt << " diet coke" << endl;
                break;
        
        default: cout << "please choose available choice\n";
                 break;
        }
    }
};



class sweets_data : public shop_data
{
    public:

    void get_qunt()
    {
        cout << setw(80) << "Enter Quanties Of Your Choice: ";
        cin >> qunt;
    }
    void sweets()
    {
        system("CLS");
        line();
        cout << setw(75) << "AVAILABLE SWEETS IN SHOP ";
        line();
        cout << "\n\n";
        cout << setw(55) << "Options" << setw(20) << "Price\n\n";
        cout << setw(56) << "1. Gulab jamun" << setw(23) << "270 rupees per KG\n";
        cout << setw(56) << "2. Jalebi" << setw(23) << "300 ruppes per KG\n";
        cout << setw(56) << "3. Kheer" << setw(23) << "220 rupees per KG\n";
        line();
        cout << setw(80) << "Select Your Favourite One: ";
        cin >> ch;      line();
        
        qunt=0;
        get_qunt();

        switch (ch)
        {
        case 1: price = qunt*270;
                cout << "You Have To Pay " << price << " for " << qunt << " KG Gulab jamun" << endl;
                break;

        case 2: price = qunt*300;
                cout << "You Have To Pay " << price << " for " << qunt << " KG Jalebi" << endl;
                break;

        case 3: price = qunt*220;
                cout << "You Have To Pay " << price << " for " << qunt << " KG Kheer" << endl;
                break;
        
        default: cout << "please choose available choice\n";
                 break;
        }
    }
};


// class option is carry data of main three option make order, history, quit 
class option : public food_data, public drinks_data, public sweets_data
{
    public:
    void in_service()
    {
        system("CLS");
        line();
        cout << setw(80) << "choose your order category\n";
        line();
        cout << setw(65) << "1. FOOD\n";
        cout << setw(64) << "2. DRINKS\n";
        cout << setw(65) << "3. DESERTS\n";
        int ch;
        cout << "Give Your Choice Here: ";
        cin >> ch;

        switch(ch)
        {
            case 1: food_data :: food();
                    break;

            case 2: drinks_data :: drinks();
                    break;

            case 3: sweets_data :: sweets();
                    break;

           default: cout << "please choose available choice\n";
                    break;
        }
    
    }
};



class Menu : public option
{
    public:
    Menu()
    {
        line();
        cout << setw(70) << "ORDER FOOD ONLINE AT HOME";
        line();
        cout << setw(68) << "1. MAKE ORDER\n";
        cout << setw(62) << "2. HISTORY\n";
        cout << setw(59) << "3. QUIT\n";
        int ch; 
        line();
        cout << setw(74) << "Choose Any One Option From List: ";
        cin >> ch;

        switch(ch)
        {
            case 1: option :: in_service();
                    break;

            default: cout << "choice invalid..///";
                     break;
        }
    }
};





int main()
{
    Menu M;
    return 0;
}