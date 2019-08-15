
#include "stdafx.h"

#include<iostream>
#include<vector>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target);
int reverse_my(int x);
int getRank(int x);

int _tmain(int argc, _TCHAR* argv[])
{
	int a[7]={2,7,2,4,6,3,8};//{3,8,4,11};
	int max = 0;
	int second = 0;
	int n = 0;
	int i = 0;
	bool flag = 0;

	if( a[1]>a[2] )
	{
		max = a[1];
		second = a[2];
		flag = 1;
	}
	else
	{
		max = a[2];
		second = a[1];
		flag = 0;
	}
	for(i =3 ;i < sizeof(a)/sizeof(a[0]);i++)
	{
		if( flag == 1)
		{
			second = max;
			max = max + a[i];
			flag = 0;
		}
		else
		{
			if( second + a[i] > max)
			{
				n = max;
				max = second + a[i];
				second = n;
			}
		}	
	}
	cout<<"max = "<<max<<endl;
	cout<<"second = "<<second<<endl; 
	/*
	int a[7]={2,7,11,15};
    vector<int> nums(a,a+4);
	vector<int>::iterator it;

	vector<int> Res;

	Res = twoSum(nums,26);

	for(it=Res.begin();it!=Res.end();it++)//遍历一下整个数组 
	cout<<*it<<" ";
	cout<<endl;
	*/
	system("pause");

	return 0;
}
