#include<iostream>
using namespace std;

bool
less_than (char a[], char b[])
{
  int i = 0;

  while (a[i] == b[i] && a[i] != '\0')
	i++;

  return (a[i] < b[i]);
}

bool
is_equal (char a[], char b[])
{
  int i = 0;

  while (a[i] == b[i] && a[i] != '\0')
	i++;

  return (a[i] == b[i]);
}

void
copy_to (char a[],const char b[])
{
  int i = 0;
  while (b[i] != '\0')
	{
	  a[i] = b[i];
	  i++;
	}
  a[i] = '\0';
}

void
merger (char p[][100], int n1, char q[][100], int n2, char a[][100])
{

  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2) {
        if (less_than(p[i], q[j])) {
            copy_to(a[k], p[i]);
            i++;
        } else if (less_than(q[j], p[i])) { // Changed to 'else if'
            copy_to(a[k], q[j]);
            j++;
        } else { // Handles the case where p[i] == q[j]
            copy_to(a[k], q[j]);
            j++;
            i++;
        }
        k++; // Increment 'k' only once
    }

  while (i < n1)
	{
	  copy_to (a[k], p[i]);
	  i++;
	  k++;
	}
  while (j < n2)
	{
	  copy_to (a[k], q[j]);
	  j++;
	  k++;
	}
while(k<n1+n2){
a[k][0]='\0';
k++;
}
}



void
mergesort (char a[][100], int n)
{
  if (n <= 1)
	return;

  int mid=n/2;
  char first[mid][100];
  char second[n - mid][100];

  for (int i = 0; i < mid; i++)
	copy_to (first[i], a[i]);
  for (int i = mid; i < n ; i++)
	copy_to (second[i-mid], a[i]);

  mergesort (first, mid);
  mergesort (second, n - mid);

  merger (first, mid, second, n - mid, a);

}


int
main ()
{
  int n;
  cin >> n;
  char a[n][100];

  int i = 0;
  while (i < n)
	{
	  cin >> a[i];
	  i++;
	}

  mergesort (a, n);

  int j = 0;
  while (j < n)
	{
	  cout << a[j] << endl;
	  j++;
	}
}
