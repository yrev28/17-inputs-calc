#include <iostream>
#include <cmath>
using namespace std;
int x;
int y;
void sum() {
  cout <<x<<" + "<<y<<" = "<<x+y;
}
void diff() {
  cout <<x<<" - "<<y<<" = "<<x-y;
}
void multi() {
  cout <<x<<" * "<<y<<" = "<<x*y;
}
void divide() {
  cout <<x<<" / "<<y<<" = "<<x/y;
}
void remain() {
  cout <<x<<" modulus "<<y<<" = "<<x%y;
}
void rootx() {
  cout <<"√ of first number = "<<sqrt(x);
}
void rooty() {
  cout <<"√ of second number = "<<sqrt(y);
}
void thrrootx() {
  cout <<"∛ of first number = "<<cbrt(x);
}
void thrrooty() {
  cout <<"∛ of second number = "<<cbrt(y);
}
void approxx() {
  cout <<"your first number can be rounded to "<<round(x);
}
void approxy() {
  cout <<"your second number can be rounded to "<<round(y);
}
void sinradx() {
  cout <<"sine of first number = "<<sin(x)<<"rad";
}
void cosradx() {
  cout <<"cosine of first number = "<<cos(x)<<"rad";
}
void tanradx() {
  cout <<"tangent of first number = "<<tan(x)<<"rad";
}
void sindegx() {
  cout <<"sine of first number = "<<sin(x)*180/3.14159265359<<"°";
}
void cosdegx() {
  cout <<"cosine of first number = "<<cos(x)*180/3.14159265359<<"°";
}
void tandegx() {
 cout <<"tangent of first number = "<<tan(x)*180/3.14159265359<<"°";
}
int oper;
int main() {
    cout<<"enter first number\n";
    cin>>x;
    cout<<"enter second number\n";
    cin>>y;
    cout<<"choose an operation\n";
    cout<<"1. +\n";
    cout<<"2. -\n";
    cout<<"3. *\n";
    cout<<"4. /\n";
    cout<<"5. modulus\n";
    cout<<"6. √ first number\n";
    cout<<"7. √ second number\n";
    cout<<"8. ∛ first number\n";
    cout<<"9. ∛ second number\n";
    cout<<"10. round first number\n";
    cout<<"11. round second number\n";
    cout<<"12. sine of first number in radians\n";
    cout<<"13. cosine of first number in radians\n";
    cout<<"14. tangent of first number in radians\n";
    cout<<"15. sine of first number in degrees\n";
    cout<<"16. cosine of first number in degrees\n";
    cout<<"17. tangent of first number in degrees\n";
    cin>>oper;
    if (oper==1)
    sum();
    else if (oper==2)
     diff();
    else if (oper==3)
     multi();
    else if (oper==4)
    divide();
    else if (oper==5)
     remain();
    else if (oper==6)
     rootx();
    else if (oper==7)
     rooty();
    else if (oper==8)
     thrrootx();
    else if (oper==9)
     thrrooty();
    else if (oper==10)
     approxx();
    else if (oper==11)
     approxy();
     else if (oper==12)
     sinradx();
     else if (oper==13)
     cosradx();
     else if (oper==14)
     tanradx();
     else if (oper==15)
     sindegx();
     else if (oper==16)
     cosdegx();
     else if (oper==17)
     tandegx();
  return 0;
}