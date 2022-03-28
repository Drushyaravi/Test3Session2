#include <stdio.h>
#include <string.h>
void input_strings(char *a)
{
  printf("Enter the number of words in a:\n");
  scanf("%s",a);
}
  int count_words(char *string)
  {
    int count =0,i;
    for(i=0; string[i]!=0;i++)
      {
if(string[i]=='p'&&string[i+1]!='q')
  count++;
      }
  }
  
  void output(char *string, int no_words)
  {
  printf("Total number of words in the string is %d", no_words);
  }
  int main()
  {
    char str[100];
    int i, totalwords;
    totalwords=i;
    return 0;
  }
  