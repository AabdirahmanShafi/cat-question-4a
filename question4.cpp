#include <iostream>
using namespace std;
int main()
{
    int sum=0, avg=0, marks=0, numofstudents=0, maxmarks=0 ;
    
    cin>>numofstudents;
    for(int i=1; i<numofstudents; i++)
    {
        cin>>marks;
        sum = sum + marks;
        if(marks>maxmarks)maxmarks=marks;
    }
    avg =sum/numofstudents;
    cout<<"max marks is: "<<maxmarks<<endl;
    cout<<"avg marksis:"<<avg<<endl;
    return 0;

}
