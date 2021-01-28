#include<iostream>
using namespace std;

class TimeConv{
protected:
    int hr,min,sec,total;
public:
    void getdata()
    {
        cout<<"Enter Time In Hours : "<<endl;
        cin>>hr;
        cout<<"Enter Time In Minutes : "<<endl;
        cin>>min;
        cout<<"Enter Time In Seconds : "<<endl;
        cin>>sec;
        cout<<endl;
        cout<<endl;
        cout<<"Time Entered : "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void conversion()
    {
        total=(hr*3600)+(min*60)+sec;
    }
    void putdata()
    {
        cout<<"Total Time In Seconds : "<<total<<endl;
    }
};

int main()
{
    TimeConv T;
    T.getdata();
    T.conversion();
    T.putdata();

    return 0;
}
