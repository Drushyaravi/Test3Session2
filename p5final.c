#include <stdio.h>
int input_size()
{
  int n;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;

  for (i=0; i<n; i++)
  {
    printf("Enter the elements of the array:");
    scanf("%d", &a[i]);
  }
}
int find_largest (int n, int a[n])
{
  int i, largest=0;
  for (i=0; i<n; i++)
    {
      if (a[i]>a[largest])
      {
        largest=i;
      }
    }
}
void output(int n, int a[n], int largest)
{
  printf("Index of largest element is %d",largest);
}
int main()
{
  int n, largest;
  n=input_size();
  int a[n];
  input_array(n,a);
  largest=find_largest (n,a);
  output(n,a,largest);
  return 0;
}