#include<bits/stdc++.h>
using namespace std;
class bank{
private:
    long long account_number;//long long keyword are use to hold more then 10:6
    string ifsc_code;
    string firstname,lastname;
    long long mobile_number;
    long long balance;//we fix the balance
    string branch;
    string address;
    //int amt;
public:
    void open_acc(){
        //cout<<"enter following details"<<endl;
        //cout<<"enter your first name"<<endl;
        cin>>firstname;
        //cout<<"enter your first name"<<endl;
        cin>>lastname;
        //cout<<"enter your mobile number"<<endl;
        cin>>mobile_number;
        //cout<<"enter your address"<<endl;
        cin>>address;
        //cout<<"enter your first name"<<endl;
        //cin>>branch;
        cout<<"Thanks For Open Account In Our Bank \n Now This Is Your Given Details And Your Account Number & Branch Will Genrate After 24hr "<<endl;
        cout<<"user-name: "<<firstname<<" "<<lastname<<endl;
        cout<<"mobile number : "<<mobile_number<<endl;
        cout<<"Address : "<<address<<endl;


    }
    void ask_detail(){
        //cout<<"enter detail";
        //cout<<"enter your account number"<<endl;
        cin>>account_number;
        //cout<<"enter ifsc code"<<endl;
        cin>>ifsc_code;
    }
    void acc_detail(){//this is use to get details of your bank account
        cout<<"your account details : "<<endl;
        if(account_number==100 && ifsc_code=="ICICIB"){
            balance=78000;
            mobile_number=8882841708;
            firstname="Yash";
            lastname="Malhotra";
            cout<<"Account Number : "<<account_number<<endl;
            cout<<"IFSC Code : "<<ifsc_code<<endl;
            cout<<"User-Name : "<<firstname<<" "<<lastname<<endl;
            cout<<"Mobile Number : "<<mobile_number<<endl;
            cout<<"Balance Amount : "<<balance<<" ₹"<<endl;
        }else if(account_number==101 && ifsc_code=="IDBK"){
            balance=550000;
            mobile_number=7827452022;
            firstname="Parveen";
            lastname="Sharma";
            cout<<"Account Number : "<<account_number<<endl;
            cout<<"IFSC Code : "<<ifsc_code<<endl;
            cout<<"User-Name : "<<firstname<<" "<<lastname<<endl;
            cout<<"Mobile Number : "<<mobile_number<<endl;
            cout<<"Balance Amount : "<<balance<<" ₹"<<endl;
        }
        
    }
    void money_deposit(){//this function is use to deposit the money in user account
        //acc_open();
        int amt;
        if(account_number==100 && ifsc_code=="ICICIB"){
            cin>>amt;
            balance=100000;
            balance=balance+amt;
            mobile_number=8882841708;
            firstname="Yash";
            lastname="Malhotra";
            cout<<"Account Number : "<<account_number<<endl;
            cout<<"IFSC Code : "<<ifsc_code<<endl;
            cout<<"User-Name : "<<firstname<<" "<<lastname<<endl;
            cout<<"Mobile Number : "<<mobile_number<<endl;
            cout<<"Amount Deposit Successfully !"<<endl;
            cout<<"Now Balance Amount : "<<balance<<" ₹"<<endl;
        }else if(account_number==101 && ifsc_code=="IDBK"){
            cin>>amt;
            balance=550000;
            balance=balance+amt;
            mobile_number=7827452022;
            firstname="Parveen";
            lastname="Sharma";
            cout<<"Account Number : "<<account_number<<endl;
            cout<<"IFSC Code : "<<ifsc_code<<endl;
            cout<<"User-Name : "<<firstname<<" "<<lastname<<endl;
            cout<<"Mobile Number : "<<mobile_number<<endl;
            cout<<"Amount Deposit Successfully !"<<endl;
            cout<<"Now Balance Amount : "<<balance<<" ₹"<<endl;
        }
    }
    void money_Withdrawal(){//this function is use to withdrawal money from user account
        int amt2;
        if(account_number==100 && ifsc_code=="ICICIB"){
            cin>>amt2;
            balance=100000;
            if(amt2>balance){
                cout<<"Insufficient Balance";
            }else{
            balance=balance-amt2;
            mobile_number=8882841708;
            firstname="Yash";
            lastname="Malhotra";
            cout<<"Account Number : "<<account_number<<endl;
            cout<<"IFSC Code : "<<ifsc_code<<endl;
            cout<<"User-Name : "<<firstname<<" "<<lastname<<endl;
            cout<<"Mobile Number : "<<mobile_number<<endl;
            cout<<"Amount Withdrawal Successfully !"<<endl;
            cout<<"Now your current balance is :"<<balance<<" ₹"<<endl;
            }
        }else if(account_number==101 && ifsc_code=="IDBK"){
            cin>>amt2;
            if(amt2>balance){
                cout<<"Insuficient Balance";
            }else{
                balance=550000;
                balance=balance-amt2;
                mobile_number=7827452022;
                firstname="Parveen";
                lastname="Sharma";
                cout<<"Account Number : "<<account_number<<endl;
                cout<<"IFSC Code : "<<ifsc_code<<endl;
                cout<<"User-Name : "<<firstname<<" "<<lastname<<endl;
                cout<<"Mobile Number : "<<mobile_number<<endl;
                cout<<"Amount Withdrawal Successfully !"<<endl;
                cout<<"Balance Amount : "<<balance<<" ₹"<<endl;
            }
        }
    }
};
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    bank obj1;
    string query;//here we are checking query of user or client
    getline(cin, query);
    if(query=="Account Opening"){
        obj1.open_acc();//this function is use for opening bank account
        cout<<"Account Open Successfully";
    }else if(query=="Account Details"){//this function is use to print your information
        obj1.ask_detail();//this function is use to get infromation
        obj1.acc_detail();//this is use to print your details
    }else if(query=="Money Deposit"){//this function is use to deposit money into bank;
        obj1.ask_detail();//this fun is use to get input from user 
        obj1.money_deposit();//this fun shows your detail with your bank balance
    }else if(query=="Money Withdrawal"){//this function is use to withdrawal money from your bank account;
        obj1.ask_detail();//this fun is use to get input from user 
        obj1.money_Withdrawal();//this fun shows your detail with your bank balance
    }else{
        cout<<"oops! INVALID QUERY ";
    }
    return 0;
}