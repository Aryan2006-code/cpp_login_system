#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class temp{
    
    string name,password,email,phone;
    string search_name,search_password,search_email,search_phone;
    
    public:
    void register_user();
    
    void login();
    
    void forgot_password();
}obj;

int main(){
    int choice;

    cout<<"Welcome to the login system!"<<endl;
    cout<<"1. Login"<<endl; 
    cout<<"2. Register"<<endl;
    cout<<"3. Forgot password"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
    
    switch(choice){
        case 1:
         obj.login();
        break;
        case 2:
         obj.register_user();
        break;
        case 3:
         obj.forgot_password();
        break;
        case 4:
         return 0;
        break;
        default:
            cout<<"Invalid choice. Please try again."<<endl;
            break;
    }
    return 0;
}
void temp::register_user(){
    cout<<"-------------------Register-------------------"<<endl;
    cout<<"enter your name: "<<endl;
    cin>>name;
    cout<<"enter your password: "<<endl;
    cin>>password;
    cout<<"enter your Email: "<<endl;
    cin>>email;
    cout<<"enter your phone number: "<<endl;
    cin>>phone;
    ofstream file;
    file.open("store.txt",ios::app);

    if(!file){
        cout<<"error in opening file!!"<<endl;
        return;
    }

    file<<name<<"*"<<password<<"*"<<email<<"*"<<phone<<endl;
    file.close();
    cout<<"------Registration successful!------"<<endl;
}


 void temp::login(){
    cout<<"-------------------Login-------------------"<<endl;
    cout<<"enter your name: "<<endl;
    cin>>search_name;
    cout<<"enter your password"<<endl;
    cin>>search_password;

    ifstream file;
    file.open("store.txt",ios::in);
    
    if(!file){
        cout<<"error in opening file!!"<<endl;
        return;
    }
    cout<<"------------------"<<endl;

    bool found=false;

    while(getline(file,name,'*') &&
     getline(file,password,'*') &&
      getline(file,email,'*') &&
       getline(file,phone)){
        if(search_name==name && search_password==password){
            
            found=true;
            cout<<"Login successfully!!"<<endl;
            cout<<"------------------"<<endl;
            cout<<"your name is: "<<name<<endl;
            cout<<"your password is: "<<password<<endl;
            cout<<"your email is: "<<email<<endl;
            cout<<"your phone no. is: "<<phone<<endl;
            cout<<"------------------"<<endl;
            break;
        }
    }

    if(!found){
        cout<<"account not found!!"<<endl;
        cout<<"------------------"<<endl;
    }
    file.close();
    
}

void temp::forgot_password(){
    cout<<"-------------------Forgot password-------------------"<<endl;
    cout<<"enter your name: "<<endl;
    cin>>search_name;
    cout<<"enter your email: "<<endl;
    cin>>search_email;
    
    ifstream file;
    file.open("store.txt",ios::in);
    if(!file){
        cout<<"error in opening file!!"<<endl;
        return;
    }
    cout<<"------------------"<<endl;

    bool found=false;
    while(getline(file,name,'*') && 
    getline(file,password,'*') && 
    getline(file,email,'*') && 
    getline(file,phone)){
        if(search_name==name && (search_email==email )){
            found=true;
            cout<<"account found!!"<<endl;
            cout<<"your password is: "<<password<<endl;
            cout<<"------------------"<<endl;
        }
        
    }
    if(!found){
        cout<<"account not found!!"<<endl;
        cout<<"------------------"<<endl;
    }
    file.close();
}