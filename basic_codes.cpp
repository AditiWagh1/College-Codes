//All Basic codes

//Bubblesort
/*#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"Enter the number of elements";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted numbers are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
//call by reference (arugment will be modified)
#include<iostream>
using namespace std;
int main()
{   void swap(int *a,int *b);
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"value of a and b before calling swap fuction"<<endl;
    cout<<"a= "<<a<<"b= "<<b;
    swap(&a,&b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"Addresses in swap function"<<endl;
    cout<<"a= "<<a<<"b= "<<b;
    cout<<"values in swap function"<<endl;
    cout<<"a= "<<*a<<"b= "<<*b;
}
//traversing of array
#include<iostream>
using namespace std;
int main()
{
    float a[5],*start,*end,sa,sum=0;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    start=&a[0];
    end=&a[4];
    sa=sizeof(a);
    cout<<"starting address"<<start<<endl;
    cout<<"ending address"<<end<<endl;
    cout<<"size of array"<<sa<<endl;
    for(int i=0;i<5;i++)
    {
        sum=sum+*start;
        cout<<"Address= "<<start<<"value "<<*start<<"sum "<<sum<<endl;
        start++;
    }
    return 0;
}
//Traversing of array
#include<iostream>
using namespace std;
class Ratio{
public:
int numerator,denominator;
double num,den;
void assign();
void convert();
void invert();
void print();
};
void Ratio::assign()
{
    cout<<"Enter the numerator and denominator"<<endl;
    cin>>numerator>>denominator;
}
void Ratio::convert()
{
    num=(double)numerator/denominator;
}
void Ratio::invert()
{
    den=(double)denominator/numerator;
}
void Ratio:: print()
{
    cout<<"ratio is"<<numerator<<":"<<denominator<<endl;
    cout<<"Conversion is"<<num<<endl;
    cout<<"Inversion is"<<den<<endl;
}
int main()
{
    Ratio r;
    r.assign();
    r.convert();
    r.invert();
    r.print();
    return 0;
}
//circumference using array of object
#include<iostream>
using namespace std;
class circle{
public:
float x,y,radius,area1,circum;
circle()
{
    x=0.0;
    y=0.0;
    radius=0.0;
}
void access();
void area();
void circumference();
void print();
};
void circle::access()
{
    cout<<"Enter x and y coordinates of circle"<<endl;
    cin>>x>>y;
    cout<<"enter the radius"<<endl;
    cin>>radius;
}
void circle::area()
{
    area1=3.14*radius*radius;
}
void circle::circumference()
{
   circum=2*3.14*radius;
}
void circle::print()
{
    cout<<"coordinates of circle are x= "<<x<<" y= "<<y<<endl;
    cout<<"area of circle is "<<area1<<endl;
    cout<<"circumference of circle is "<<circum<<endl;
}
int main()
{
    circle c;
    c.access();
    c.area();
    c.circumference();
    c.print();
    return 0;
}
//working of constructor and  destructor
#include<iostream>
using namespace std;
class Ratio
{
    public:
    Ratio()
    {
        cout<<"object is born"<<endl;
    }
    ~Ratio()
{
    cout<<"object is dead"<<endl;
}
    void Ratiox();
};
void Ratio::Ratiox()
{
    cout<<"object is alive"<<endl;
}
int main()
{
    Ratio r;
    r.Ratiox();
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
class rect{
public:
double x,y;
rect(double x1,double y1)
{
  x=x1;
  y=y1;  
}
void display();
};
void rect::display()
{
    cout<<"Rectangular points are"<<x<<" and "<<y<<endl;
} 
class polar{
public:
double a,b;
polar(double a1,double b1)
{
    a=a1;
    b=b1;
}
operator rect()
{
   double m= a*(cos(b));
   double n=a*(sin(b));
   return rect(m,n);
};
void show()
{
  cout<<"polar points are"<<"a= "<<a<<"b= "<<b;
}
};
int main()
{
    rect r(0.0,0.0);
    polar p(10.5,11.5);
    r=p;
    r.display();
    p.show();
    return 0;
}
//virtual function
#include<iostream>
using namespace std;
class person{
public:
char name[20];
virtual void insert()
{
    cout<<"Enter the name";
    cin>>name;
}
virtual void print()
{
    cout<<"Name of person is "<<name<<endl;
}
};
class student:public person
{
  public:
  char stnm[20];
  void insert()
  {
    cout<<"Enter the student name"<<endl;
    cin>>stnm;
  }
  void print()
  {
    cout<<"the student name is "<<stnm<<endl;
  }
};
int main()
{
    person p1;
    p1.insert();
    p1.print();
    student s;
    s.insert();
    s.print();
    cout<<"virtual function starts here"<<endl;
    person *p;
    p=&p1;
    p->insert();
    p->print();
    p=&s;
    p->insert();
    p->print();
    return 0;
}*/
