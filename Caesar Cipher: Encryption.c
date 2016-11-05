#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{ char str[50];
  int k,p,c,key,i=0;
  int len;
  scanf("%d",&len);
  scanf("%s",str);
  scanf("%d",&key);
  k=key%26;
  while(str[i]!='\0')
  { if(isalpha(str[i]))
    { p=str[i];
      if(isupper(str[i]))
	{ c=p+k;
	  if(c>90)
	     c-=26;
	}
      if(islower(str[i]))
	{ c=p+k;
	  if(c>122)
	    c-=26;
	}
      str[i]=c;
      printf("%c",str[i]);
      i++;
    }
    else
    {  printf("%c",str[i]);
       i++;
    }
  }
 return 0;
}
