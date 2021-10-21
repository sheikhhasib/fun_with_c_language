#include <stdio.h>

int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k) != EOF){
        int total = n;
        while(n >= k){
            int cnt = n/k;
            
            total += cnt;
            n = n % k;
            n+=cnt;
        }
        printf("%d\n",total);
    }
    return 0;
}
