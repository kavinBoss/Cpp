 //to checl whether a person eligible to vote using if else statement
 #include<iostream>
 using namespace std;
 int main(){
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age>=18)
    {cout<<"\nyou are eligible for voting:";}
    else if(age>5&&age<=18)
    {cout<<"\nyou are not eligible to vote";}
    else
    {cout<<"\nyou are a kid";}
    return 0;
 }
