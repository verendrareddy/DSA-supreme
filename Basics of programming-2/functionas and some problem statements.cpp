#include <iostream>
using namespace std;

int findsum(int num1,int num2)
{
  return num1+num2;
}

int findsumUptoN(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
    {
      sum=sum+i;
    }
  return sum;
}


int findEvensumUptoN(int n)
{
  int evensum=0;
  for(int i=1;i<=n;i++)
    {
      if(i%2==0)
      {
         evensum=evensum+i;
      }
    }
  return evensum;
    }

char FindTheGrade(int marks)
{

  switch(marks/10)
    {
      case 9: return 'A'; break;
      case 8: return 'B'; break;
      case 7: return 'C'; break;
      case 6: return 'D'; break;
      default: return 'E'; break;
      
    }
  /*
  if(marks>=90)
  {
    return 'A';
  }
  else if(marks>=80)
    {
     return 'B';
    }

  else if(marks>=70)
  {
   return 'C';
  }
  else if(marks>=60)
  {
   return 'D';
  }
  else{
    return 'E';
  } */
}


int main() {

  //addtion of two numbers
  /*
  int num1, num2;
  cout<<"enter the number1 ";
  cin>>num1;
  cout<<"enter the number2 ";
  cin>>num2;
  int sum= findsum(num1,num2);
  cout<<"additipn of "<<num1<<" and "<<num2<<" is "<<sum;
  */

  //sum upto n numbers
  /*
  int n;
  cout<<"enter the number ";
  cin>>n;
  int sum= findsumUptoN(n);
  cout<<"addition upto to  "<<n<<" is "<<sum;

  */

//finding the even sum

  /*
  int n;
  cout<<"enter the number ";
  cin>>n;
  int evensum= findEvensumUptoN(n);
  cout<<"addition all even numbers upto  "<<n<<" is "<<evensum;
  */

  int marks ;
  cout<<"enter the marks ";
  cin>>marks;

  for(int i=1;i<=99;i++)
    {
      cout<<"Grade for the marks "<<i << " is "<<FindTheGrade(i)<<endl;;
    }

  
  return 0;

}
