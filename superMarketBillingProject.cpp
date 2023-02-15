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
    int password;

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

          if(email=="mdrafin@gmail.com"  &&  password==1111){
             
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
             remove();
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

void shopping ::add(){
  m:
  fstream data;
  int c;
  int token =0;
  float d;
  float p;
  string n;
   

  cout<<"\n\n\t\t\t Add new Product";
  cout<<"\n\n\t Product code of the product";
  cin>>pcode;
  cout<<"\n\n\t Name of the product";
  cin>>Pname;
  cout<<"\n\n\t Price of the Product";
  cin>>price;
  cout<<"\n\n\t Discount on product";
  cin>>dis;

  data.open("database.txt",ios::in);
  if(!data){
    data.open("database.txt",ios::app|ios::out);
    data<<" "<<pcode<<" "<<price<<" "<<dis<<"\n";
  }
  else{
    data>>c>>n>>p>>d;
   
    while(!data.eof())

    {
      if(c == pcode){
        
      token++;

      }
         data>>c>>n>>p>>d;
    }
    data.close();
  }
    if(token == 1){
      goto m;

    }else{

         data.open("database.txt", ios::app|ios::out);
         data<<" "<<pcode<<" "<<Pname<<" "<<price<<" "<<dis<<"\n";
         data.close();
    }
    cout<<"\n\n\t\t Record inserted !";

}

void shopping :: edit(){
     m:
  fstream data,data1;
  int pkey;
  int token =0;
  int c;
  float p;
  float d;
  string n;

  cout<<"\n\t\t\t Modify the record";
  cout<<"\n\t\t\t Product code";
  cin>>pkey;

  data.open("database.txt",ios::in);
  if(!data){
    cout<<"\n\nFiles dosen't";

  }else{

    data1.open("database.txt", ios::app|ios::out);
    data>>pcode>>Pname>>price>>dis;

    while(!data.eof()){
      if(pkey ==pcode){
        cout<<"\n\t\t Product new code";
        cout<<"\n\t\tName of the product";
        cin>>p;
        cout<<"\n\t\t Discount";
        cin>>d;
        data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
        data.close();

      
      }
      else{
        data>>c>>n>>p>>d;
        while(!data.eof()){
          if(c ==pcode){
            token++;
          }
          data>>c>>n>>p>>d;
        }
        data.close();
      }

      if(token==1)
        goto m;
      else{
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<price<<" "<<dis<<"\n";
        data.close();
      }
      
     }
cout<<"\n\n\t\tRecord inserted !";


}
}






