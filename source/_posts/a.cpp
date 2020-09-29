#include<iostream>
#include<string>
using namespace std;

int time=0;


class Date
{
public:
	int year;
	int month;
	int day;

public:
	Date(int y=2000,int m=1,int d=1)
	{
		year=y;
		month=m;
		day=d;
	};
	int Getyear()
		{
			return year;
	    };
	int Getmonth()
	    {
			return month;
	    };
	int Getday()
		{
			return day;
	    };

};
class Product
{
       string name;    //产品名
       double price;   //产品价格
       Date deptime;   //出厂日期
       string factory; //生产厂家
       bool easy_break;//易碎标志
       Date valtime;   //有效日期
       string color;   //颜色
       double high;    //高度
public:
	    void SetProduct(string n,double p,int y1,int m1,int d1,string f,bool e,int y2,int m2,int d2,string c,double h );
	    Product(string a, double b, int x, int y, int z,string c, bool d, int e, int f, int g,string h, double i);
        void output (  ); 
};
void Product::output (  )
{
       cout<<name<<" "<<price<<endl;
       cout<<deptime.Getyear()<<"-"<<deptime.Getmonth()<<"-"<<deptime.Getday()<<endl;
       cout<<factory<<" "<<easy_break<<endl;
       cout<<valtime.Getyear()<<"-"<<valtime.Getmonth()<<"-"<<valtime.Getday()<<endl;
} 
 void Product::SetProduct(string n,double p,int y1,int m1,int d1,string f,bool e,int y2,int m2,int d2,string c,double h )
	   {   
		   name=n;     
           price=p;   
           factory =f;
           easy_break=e;   
           color=c;   
           high=h;
		   deptime.year=y1;
		   deptime.month=m1;
		   deptime.day=d1;
		   valtime.year=y2;
		   valtime.month=m2;
		   valtime.day=d2;
	   };

 Product::Product(string a, double b=0, int x=2000, int y=1, int z=1, string c="unnamed", bool d=0, int e=2000, int f=1, int g=1,string h="unnnamed", double i=0) :deptime(x, y, z), valtime(e, f, g)
{  

    name = a; price = b; factory = c; easy_break = d; color = h, high = i;
    cout << "Constrcting ";
    time++;
    switch (time)
    {
    case 1:cout << "One"; break;
    case 2:cout << "Two"; break;
    case 3:cout << "Three"; break;
    }
    cout << "...." << endl;
}

int main()
{
       string  s;
       cin>>s;
       Product p1("car");
       Product p2("glass",3.00);
       Product p3("pen",5.00,2009,3,14);
       p1.SetProduct("car",100000.0,2009,3,14,"nanjing",0,2010,10,14,"red",1.5);
       p1.output();
       p2.output();
       p3.output();
       return 0;
}