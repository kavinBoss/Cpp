 //Perimeter Area of semi Circle
 #include<iostream>
 using namespace std;
 int main(){
    float radius,perimeter,area;
    cout<<"Enter Radius Of Circle:";
    cin>>radius;
    perimeter=(3.14+2)*radius;//Peri of semi circle is (pi+2)*radius
    area=3.14*radius*radius;//Area of semi circle is pi*radius*radius
    cout<<"Perimeter of semi circle is:"<<perimeter<<endl;
    cout<<"Area of semi circle is:"<<area;

 }