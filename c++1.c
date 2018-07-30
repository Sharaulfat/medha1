#include<iostream>
int myfunction()
{
std::cout<<"Insert an integer:";
int a;
std::cin>>a;
return a;
}

int main ()
{
int x;
int y;
x=myfunction();
y=myfunction();
std::cout<<"First value:"<<x<<std::endl;
std::cout<<"Second value:"<<y<<std::endl;
return 0;
}
