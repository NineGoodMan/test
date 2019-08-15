int getRank(int x)
{
	int res;

	if(x>=3)
	{
		res = getRank(x-1)+getRank(x-2);	
	}
	else
	{
		if(x == 2)
		{
			res = 2;
		}
		else
		{
			res = 1;	
		}
	}
	return res;
}
int reverse_my(int x) {
	int a,res;
	res = 0;
	if(x<0)
	{
		a = -1;
	}
	else
	{
		a = 1;
	}

	while(x!=0)
	{
		res = x%10 + res*10;
		x = x/10;
	}

	res = res * a;

	if((res>pow(2, 31)-1)||(res<-pow(2, 31)))
	{
		res = 0;
	}
	return res;
}
vector<int> twoSum(vector<int>& nums, int target) {
	int i,j;
	vector<int> Res;
	for(i = 0;i<nums.size();i++)
	{
		for(j= i+1;j<nums.size();j++)
		{
			if(nums[i]+nums[j] == target)
			{
				Res.push_back(i);
				Res.push_back(j);
				return Res;
			}
		}
	}
}

