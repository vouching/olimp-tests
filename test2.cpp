#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
void pr(vector <int> a)
{
    for(unsigned int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int amount_programmes;
    int duration_of_pressing;
    int number_of_pressings;
    int position_of_favourite;
    cin>>amount_programmes>>position_of_favourite>>number_of_pressings;
    vector <int> open_prog;
    int i=0;
    for(i=0;i<amount_programmes;i++)
    {
        open_prog.push_back(i);
        cout<<open_prog[i];
    }  
    pr(open_prog);
}