#include <stdio.h>
#include <stdlib.h>
int main(void){long n;if(scanf("%ld",&n)!=1)return 0;if(n<2){puts("0");return 0;}long m=(n-1)/2;unsigned char*s=calloc(m,1);if(!s)return 1;long c=1;for(long i=0;i<m;i++)if(!s[i]){long p=2*i+3;c++;if(p*p<=n)for(long j=(p*p-3)/2;j<m;j+=p)s[j]=1;}printf("%ld\n",c);return 0;}
