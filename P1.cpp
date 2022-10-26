#include <iostream>
using namespace std;
void order(int* numb1, int* numb2)
{
   if(*numb1 > *numb2)          
   {
      int temp = *numb1;        
      *numb1 = *numb2;
      *numb2 = temp;
   }
}

void s(int* ptr, int n)
{
   int j, k;                    
   for(j=0; j<n-1; j++) 
   {        
      for(k=j+1; k<n; k++){      
        order(ptr+j, ptr+k);    
      }
   }     
}

int main()
{
   int n;
   cout<<"Enter no. of elements- ";
   cin>>n;
   int a[n];
   for(int j=0; j<n; j++)
   {     
      cout <<"Enter element- ";
      cin>>a[j];
   }
   s(a, n); 
   cout<<"Sorted Elements:- "<<endl;              
   for(int j=0; j<n; j++)      
      cout << a[j] << " ";
   cout << endl;
   return 0;
}
