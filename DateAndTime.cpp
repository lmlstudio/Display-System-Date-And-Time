#include<bits/stdc++.h>
using namespace std;

int main()
{
    time_t current_time=time(0);
    string date=ctime(&current_time);
    cout<<"Current Time: "<<endl;
    cout<<date;
    return 0;
}
