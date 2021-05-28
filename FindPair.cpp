#include<bits/stdc++.h>
using namespace std;
void
findPair (int arr[], int n, int sum)
{
  unordered_set < int >s1;

  for (int i = 0; i < n; i++)
    {
      auto it = s1.find (sum - arr[i]);
      if (it != s1.end ())
	{
	  cout << "Pair found (" << *it << ", " << arr[i] << ")";
	  return;
	}
      s1.insert (arr[i]);
    }
  cout << "Pair not found";
}

int
main ()
{
  int arr[] = { 8, 7, 2, 5, 3, 1 };
  int sum = 10;

  int n = sizeof (arr) / sizeof (arr[0]);

  findPair (arr, n, sum);

  return 0;
	
}
