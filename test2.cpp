#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int amount_programmes;
int duration_of_pressing;
int number_of_pressings;
int position_of_favourite;
void pr(vector <int> a)
{
    for(unsigned int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void swapp(vector <int>& a,int duration)
{
    
    duration=duration%amount_programmes-1;
    int f =a[duration];
    a[duration]=a[a.size()-1];
    a[a.size()-1]=f;
}
int main()
{
    
    cin>>amount_programmes>>position_of_favourite>>number_of_pressings;
    vector <int> open_prog;
    int i=0;
    for(i=1;i<amount_programmes;i++)
    {
        open_prog.push_back(i);
    }  
    open_prog.push_back(0);
    position_of_favourite--;

    pr(open_prog);
    swapp(open_prog,3);
    pr(open_prog);
}