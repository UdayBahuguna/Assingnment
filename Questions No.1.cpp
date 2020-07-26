#include<iostream>
 using namespace std;
 int main()
 {
     int a,b,c;
     cout<<"Enter three no. to find which one is the greatest";
     cin>> a >>b >> c;
     if(a>=b&&a>=c)
        cout<<"\n The largest no. is " <<a;
     if(b>=c&&b>=a)
        cout<<"\n The largest no. is " <<b;
     if(c>=a&&c>=b)
        cout<<"/n The largest no. is " <<c;
     return 0;
 }
