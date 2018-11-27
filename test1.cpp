// Пояснения к задаче 1
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int birth;
	int dead;
	int period;
	cin>>birth>>dead>>period;
	int result=0;
	int cikl=birth-(birth%period);
	//if(birth%period==0) result++;
	for( cikl=birth-(birth%period);cikl<=dead;cikl=cikl+period)
	{
		if ((cikl>=birth)&&(cikl<=dead))
		result++;
	}
	cout<<result;
}
