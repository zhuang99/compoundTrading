#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    double percentPerDay;
    double initialFund;
    int days;

    long sum;

    cout<<"Compound Calculator\nenter percent per day(%): ";
    cin>>percentPerDay;
    cout<<"enter initial found: ";
    cin>>initialFund;
    cout<<"enter days: ";
    cin>>days;

    sum = initialFund * pow((1+ percentPerDay/100), days);
    cout<<endl<<"##############\n#            #\n#   "<<sum;
    string bnk;
    int digit = to_string(sum).length();
    int bnk_space = 9 - digit;

    for(int i = 0; i < bnk_space; i++){
        bnk+=" ";
    }
    //cout<<digit<<endl;
    

    cout<<bnk<<"#\n#            #\n##############"<<endl;

    cout<<endl;
    cout<<"Trade Safe!!"<<endl;
}