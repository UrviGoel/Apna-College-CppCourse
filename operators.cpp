#include <iostream>
using namespace std;

int main()
{
    int i;
    
    i = 1, 2, 3;              
    printf("%d", i);
    
    return 0;
}//1

#include <stdio.h>

int main()
{
    int i = (1, 2, 3);
    
    printf("%d", i);
    
    return 0;
}//3

#include <stdio.h>  
int main()  
{  
  int a = 10, b = 20, c = 30;  
  if (c > b > a)  
    printf("TRUE");  
  else
    printf("FALSE");  
  return 0;  
} //false

#include <stdio.h> 
int main() 
{ 
   int x = 10; 
   int y = (x++, x++, x++); 
   printf("%d %d\n", x, y); 
   return 0; 
} //13 12

# include <stdio.h> 
int main() 
{ 
    int x = 10; 
    int y = 20; 
    x += y += 10; 
    printf (" %d %d", x, y); 
    return 0; 
} //40 30

#include <stdio.h> 
int main() 
{ 
    printf("%d", 1 << 2 + 3 << 4); 
    return 0; 
} 512

