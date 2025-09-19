
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

///#define MIN(a, c) (((a) < (c)) ? (a) : (c))
int main ()
{
    int a,b,c;

    printf("a= ");
    scanf("%d", &a); 
    printf("b= "); 
    scanf("%d", &b); 
     printf("c= ");
    scanf("%d", &c); 
    
    int x, y, q; 
    x = a+b+c;
    y = a*b*c;
    ///std::cout << ;  
    /// q = std::cin >> x >> y ;  
  
    int z;
    z = std::min(a,c);   ///cout << "min число = "<< min(a,c); ::cout << "min число =" <<
    
    int i; 
    i =(a+b+c)*(a+b+c);
    i % 2 == 0 ?
       printf("%d", z) :
       printf("x= %d, y=%d", x ,y);
  return 0; 
}
///printf("%d", (((a+b+c)*(a+b+c)) % 2 == 0 ? (a<c ? a:c) :  x && y));s
//// std::cin >> x >> y