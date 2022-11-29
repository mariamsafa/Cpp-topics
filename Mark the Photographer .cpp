

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int count=0;
 int t,n,x;
 cin>>t;
 while(t--)
 {
	cin>>n>>x;
	n=2*n;

	int h[n];
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	sort(h,h+n,greater<int>());
	for(int i=0;i<n/2;i++)
	{
			if(h[i]-h[((n/2)+i)]>=x)
			{
				count++;
			}
		
	}
	if (count==n/2)
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	count=0;
 }
return 0;
}







#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t,count=0;
	cin >> t;
	int n;

	while (t--)
	{
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			
		}
		for(int i=n;i>0;i--)
			{
				
				a[i]=a[0];
				{
					if(a[0]-a[i]==0)
					{
						a[i]=0;
					}
					
				}
			}
			for(int i=1;i<n;i++)
			{
				if (a[i]==0)
				{
					count=1;
				}
				else{
					count=0;
					
				}
				break;
			}
			if(count==1)
			{
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
			count=0;
	}

	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t,count=0;
	cin >> t;
	int n;

	while (t--)
	{
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			
		}
		for(int i=n;i>=2;i--)
			{
				
				a[i]=a[i]-a[i-1];
				{
					if(a[i]==0)
					{
						count++;
					}
					
				}
			}
			if(count!=0)
			{
				cout<<"NO\n";
			}
			else{
				cout<<"YES\n";
			}
			count=0;
	}

	return 0;
}