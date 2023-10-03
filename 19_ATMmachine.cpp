// program to check withdrawal, deposit, check and do other functions
#include <iostream>
#include <random>
using namespace std;


class ATM{ // a class ATM is declared
private:
    double balanceinAcc; // the balance is set as private becuase balance should not display everytime unless called
public:
    ATM(): balanceinAcc(100000.0){}  // balance set as 1,00,000
    
    void Greenpin(){  // function declared to generate a green pin which is used to activate a credit card
        // variables declared
        int answer;
        long cardno;
        long cifno;
        int max;
        int OTP;
        int newpass;
        int confirmpass;
        int DebitCard;
        int Creditcard;
        cout<< "Do you want to generate a green pin for \n";
        cout<<"1. Credit Card\n "; // selection for credit and debit card
        cout<<"2. Debit Card\n ";
        cin>>answer;
        if (answer==1){  // if credit card option is chosen
            cout<<"Enter your card number: \n";
            cin>> cardno;

            cout<<"Enter you CIF number: \n";
            cin>>cifno;

            max = 1000000; // range set for random function
            srand(time(0));
            cout << "The GREEN PIN number is: \n"<<rand()%max;
        }
        else{
            cout<<"Enter your card number: \n";  // if debit card option is chosen
            cin>> cardno;

            cout<<"Enter you CIF number: \n";
            cin>>cifno;

            max = 1000000;   //range set for number generation
            srand(time(0));
            cout << "The GREEN PIN number is: \n"<<rand()%max;
        }
    }
    void ChangePin(){ //function to change card passowrd
        //int answer;
        int cardno1;
        int cifno1;
        int max1;
        int OTP;
        int OTP1;
        int newpass;
        int confirmpass;
        int random;
        //int DebitCard;
        //int Creditcard;
            cout<<"Enter your card number:\n ";
            cin>> cardno1;

            cout<<"Enter you CIF number: \n";
            cin>>cifno1;

            //max1 = 1000000; 
            srand(time(0));
            
            
            int i,rdno;
            // random function used
            rdno=(rand()%1000000)+15;
                
            cout << "\nThe OTP number is: \n"<< rdno;
            // OTP is generated
           
            // OTP is verified i.e. you have to enter thhe same OTP entered
            cout<<"\nReenter the OTP here to verify: \n";
            cin>>OTP1;
           
            if(OTP1==rdno){ // if the OTP is same and then verified

                cout<<"OTP verified!\n";
                cout<<"  \n";
                cout<<"Enter new password\n"; // asks to set new passowrd
                cin>>newpass;

                cout<<"  \n";
                cout<<"Confirm new password\n";   // the password is then confirmed by renetering to verify
                cin>>confirmpass;
                if (newpass==confirmpass){
                    cout<<"NEW PASSWORD SET SUCCESSFULLY!"; // if both input matches then the password is set
                }
                else{
                    cout<<"Re-eneter confirmation password"; // if both input doesnt match then asks for reconfirmation
                    cin>>confirmpass;
                    cout<<"NEW PASSWORD SET SUCCESSFULLY!";
                    cout<<"  \n";
                    cout<<"  \n";
                }
            }
            else{
                cout<<"Invalid OTP"; // if OTp is fed wrong, the program will go back to main function
                return;
            }
            

        };
    
    

    
    void BalanceInquiry(){  //function to check the balance in account 
              
        cout<<" \n";
        cout<<"  \n";
        cout<<"\nThe balance in your bank account is "<< balanceinAcc; // display balance
        cout<<"  \n";
        cout<<"  \n";
    };

    void DepositinAcc(){ // function to deposit a certain amount in the account
        double amount;
        cout<< "Enter the amount you want to deposit in your account: \n"; // taking input of balance
        cin>>amount;

        if (amount<0){
            cout<<"The amount is invaild!: \n";        // to check for appropriate balance
            return;
        }
            balanceinAcc += amount;       // adding the amount deposited to the balance
            cout<<"\nThe amount "<< amount << " Has been succesfully deposited!\n";
            cout<<"\n The total amount now in your account is "<< balanceinAcc<<" \n";  // displaying total balance
        };
    void Withdraw(){        // withdrawal of amount from balance
        double amount;
        cout<<"Enter the amount you want to enter: ";
        cin>> amount;


        if (amount> balanceinAcc || amount<0){      //to check appropriate balance
            cout<<"The amount you enter is exceeding the balance (Insufficient amount) \n";
                return;
        }
        balanceinAcc -= amount;       //taking out 
        cout<<amount<<" Succesfully withdrawn from your account\n";
        cout<<"\n The total amount now in your account is "<< balanceinAcc<< "  \n";
        };
    };


int main(){
    ATM atm;
    int options;
    int choice;



    do{  // do loop to chose between optionss
        cout<<"   \n";
        cout<<"----------TEAM 8 ATM-----------\n";
        cout<<"   \n";
        cout<<"---------WELCOMES YOU----------\n";
        cout<<"   \n";
        cout<<"Choose your option\n";
        cout<<"1. Generate Green Pin\n";
        cout<<"2. Change CARD password\n";
        cout<<"3. Account Details (withdraw, deposit, check balance)\n"; // to check withdrawal deposit and check balance
        cout<<"4. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;


        switch (choice)
        {
        case 1:
            atm.Greenpin();// function called
            break;
        case 2:
            atm.ChangePin(); // function called
            break;
        case 3:
             
            do{ // to display options
                cout<<"1. Check Balance\n";
                cout<<"2. Deposit Amount\n";
                cout<<"3. Withdraw Amout\n";
                cout<<"4.Exit\n"; // exit function to go back to main window

                cout<<"Enter your choice: ";
                cin>> options;

                switch (options)
                {
                case 1:
                    atm.BalanceInquiry();// function call
                    break;
                case 2:
                    atm.DepositinAcc();// function call
                    break;
                case 3:
                    atm.Withdraw(); // function call
                    break;
                case 4:
                    cout<<"Thank You! Visit Again!";
                    break;
                
                default:
                    cout<<"Invalid! Please choose between the about numbers!";
                    break;
                }
            }while (options!=4);

        case 4:
                cout<<"Thank You! Visit Again!";
                break; // the program will go to main window because an ATM window never closes
        }
    }while(options!=4 );

    return 0;

}
