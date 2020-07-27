#include <stdio.h>

int gcd(int n, int m);

int main(void)
{
    int n, m;
    
    if (n < m)
    {
        int pre;
        pre = n;
        n = m;
        m = pre;
    }
    
    scanf("%d %d", &n, &m);
    
    /* 여기에 코드를 작성해 주세요. */
    int lcm;
    lcm = (n * m) / gcd(n,m);
    printf("%i", lcm);
    
    return 0;
}

int gcd(int n, int m)
{
    if(m == 0) return n;
    else return gcd(m, n % m);

}

/* 최소공배수는 (n * m) / 최대공약수

최대공약수는 n이 m보다 클 때, 
n과 m이 최대공약수는 m 과 n%m 의 최대공약수와 같다.
*/
