#include<iostream>
using namespace std;
class subject
{
private:
    float  sub1,sub2,sub3,sub4,sub5;
public:
    float res;
    float cgpa;
    subject(float a=0,float b=0,float c=0,float d=0,float e=0)
    {
        sub1=a;
        sub2=b;
        sub3=c;
        sub4=d;
        sub5=e;

    }
    void setdata (float a,float b,float c,float d,float e)
    {
        sub1=a;
        sub2=b;
        sub3=c;
        sub4=d;
        sub5=e;
        res=(sub1*3)+(sub2*1.5)+(sub3*2)+(sub4*3)+(sub5*3);
    }

    void printdata()
    {
        cout << res << endl;
        cgpa =res/12.5;
        cout << cgpa << endl;
    }
     void merit()
    {
        if(cgpa>4.50)
        {
            cout << "merit position:1" << endl;
        }
        else
        {
            cout << "merit position 2" << endl;
        }
    }
};
class subject1
{
private:
    int roll;
    subject obj;
public:

    subject1(int r,float a=0,float b=0,float c=0,float d=0,float e=0)
    {
        roll=r;
        obj.setdata(a,b,c,d,e);

    }
    void printinfo()
    {
        cout <<"the roll is " <<roll << endl;
        cout << "the total cgpa =" ;

        obj.printdata();
        obj.merit();

    }


};
int main()
{
  int  roll;

    cout << "enter the roll number" << endl;
    cin >> roll;
   float sub1,sub2,sub3,sub4,sub5;
    cout <<"enter the 5 subject cgpa !" << endl;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    subject1 p(roll,sub1,sub2,sub3,sub4,sub5);
    p.printinfo();
   // system("pause");
}
