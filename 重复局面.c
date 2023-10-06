#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

char a[10024][10024];
int n;
int i,j,l;

int main()
{
    scanf("%d",&n);
    for(i=0;i<n*8;i++)scanf("%s",a[i]);
    
    int count1=0;
    int count=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
                        
            for(l=0;l<8;l++)
            {
                 if(strcmp(a[i*8+l],a[j*8+l])==0)
                {    count1++;
                    
                    if(count1==8)
                    {
                        count++;
                    }
                }
            }
            count1=0;
            
        }
        printf("%d\n",count);
        count=1;
    }
    
    
    
    
    
    
    return 0;
}
