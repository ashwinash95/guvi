#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool myfunction(int a,int b){
	return b<a;
}
int main()
{
	string a;
	int n,temp;
	cin>>a;
	cin>>n;
	if(a[0] == '-'){
		sort(a.begin()+1,a.end(),myfunction);
	}
	else
	sort(a.begin(),a.end());
	temp = 0;
	while(a.length()!= 0 && temp<n){
		a.pop_back();
		++temp;
	}
	cout<<a;
    return 0;
}