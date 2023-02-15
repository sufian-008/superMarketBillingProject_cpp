#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string Pname;
  
public:
        void menu();
        void adminastration();
        void buyer();
        void add();
        void edit();
        void remove();
        void list();
        void recipt();
};

void shopping :: menu()
{
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t***********************************\n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t          Supermarket Main Menu    \n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t***********************************\n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t  1)Adminstrator                   \n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t  2)Buer                           \n";
    cout<<"\t\t\t\t                                   \n";
    cout<<"\t\t\t\t  3)Exit                           \n";
    cout<<" \n\t\t\t\t please selsect                 \n";

    cin>>choice;

    switch(choice){
        case 1:
          cout<<"\t\t\t  Please Login\n";
          cout<<"\t\t\t  Enter Email  \n";
          cin>>email;
          cout<<"\t\t\t Password       \n";
          cin>>password;

          if(email="mdrafin008@gmail.com"  && password="rafin"){
             
             adminastration();

           
          }else{
           cout<<"Invalid Email\n";
    }
    break;

     case 2:
      {
        buyer();
      }

      case 3:
      {
        exit(0);
      }
      default:
      {
        cout<<"Please select from the given option";
      }
    }
    goto m;
      
      
     

}

void shopping :: adminastration()
{
    m:
    int choice;
    cout<<"\n\n\n\t\t\t Adminstrator menu";
    cout<<"\n\t\t\t|____1)Add the product____|";
    cout<<"\n\t\t\t                          |";
    cout<<"\n\t\t\t|____2)Modify the product_|";
    cout<<"\n\t\t\t                          |";
    cout<<"\n\t\t\t|____3)Delete the product_|";
    cout<<"\n\t\t\t                          |";
    cout<<"\n\t\t\t|____4)Back to main menu__|";
   
    cout<<"\n\n\t Please enter your choice";
    cin>>choice;

    switch(choice)
    {
        case 1:
        add();
        break;
        case 2:
            edit();
            break;
         case 3:
             rem();
             break;

         case 4:
            menu();
            break;
            default:
             cout<<"Invalid choice";

    }
    goto m;
}

void shopping :: buyer()
{
     m:
    int choice;
    cout<<"\t\t\t Buyer        \n";
    cout<<" \t\t\t_________    \n";
    cout<<"                    \n";
    cout<<"\t\t\t 1)Buy product\n";
    cout<<"                    \n";
    cout<<"\t\t\t 2)Go Back    \n";
    cout<<"Enter Your Choice   \n";

    cin>>choice;

    switch(choice){
        case 1:
            recipt();
            break;

            case 2:
            menu();

            default:
            cout<<"Invalid choice\n";
    }
      
      goto m;
    
}



