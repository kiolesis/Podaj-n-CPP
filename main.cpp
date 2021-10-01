#include<iostream>
#include<cmath>

using namespace std

main()
{
	int n;
	do
	{
		cout<<"podaj n";
		cin>>n;
	}
	while(n<20 || n>100);
	for(int i=0;i<n;i++)cout<<2+i*3<<endl;
}
