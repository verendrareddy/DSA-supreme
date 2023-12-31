#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"neer the value of n";
  cin>>n;
  // solid recatngle
  /* for(int row=0;row<5;row++)
     {
       for(int col=0;col<5;col++)
         {
           cout<<"* ";
         }
       cout<<endl;
     }
   */

  // hallow rectangle

 /*
 int rowCount = 0, colCount = 0;
  cout << "Enter the row count and col count";
  cin >> rowCount >> colCount;

  // method1
  for (int row = 0; row < rowCount; row++) {
    for (int col = 0; col < colCount; col++) {
      if ((row > 0 && row < rowCount - 1) && (col > 0 && col < colCount - 1)) {
        cout << "  ";
      } else {
        cout << "* ";
      }
    }
    cout << endl;
  }
  
  
  cout << endl << endl << endl;
  cout << "nethod2" << endl;
  // method2
  for (int row = 0; row < rowCount; row++) {
    if (row == 0 || row == rowCount - 1) {
      for (int col = 0; col < colCount; col++) {
        cout << "* ";
      }
    } else {
      cout << "* ";
      for (int col = 0; col < colCount - 2; col++) {
        cout << "  ";
      }

      cout << "* ";
    }
    cout << endl;
  }

  */
  
  // full pyramid
/*
  cout << endl << endl << endl << endl;
  cout<<"full pyramid"<<endl<<endl;
  for (int row = 0; row < 6; row++)
    {
      for(int col=0;col<6-(row+1);col++)
        {
         cout<<" ";
        }
      for(int col=0;col<row+1;col++)
        {
        cout<<"* ";
        }
      cout<<endl;
    }

    */

  // full pyramid

  /*cout << endl << endl << endl << endl;
  cout<<" inverted full pyramid"<<endl<<endl;
  
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row;col++)
      {
        cout<<" ";
      }
      for(int col=0;col<n-row;col++)
        {
          cout<<"* "; 
        }
     
      cout<<endl;
        }
    */

//number pyramid
/*cout<<endl;
for(int row=0;row<5;row++)
  {
    for(int col=0;col<row+1;col++)
      {
        cout<<col+1;
      }
    cout<<endl;
  }
cout<<endl<<endl<<endl;
  for(int row=0;row<5;row++)
  {
    for(int col=0;col<5-row;col++)
      {
        cout<<col+1;
      }
    cout<<endl;
  }  
  */

  //hallow diamond

  cout << endl << endl << endl << endl;
  cout<<"Hallow diamond"<<endl<<endl;
  for(int row=0;row<n;row++)
    {
      //for spaces
      for(int col=0;col<n-row-1;col++)
        {
          cout<<" ";
        }

      //for stars
      for(int col=0;col<2*row+1;col++)  
        {
          if(col>0 && col<2*row){
            cout<<" ";
          }
              else{
              cout<<"*";
              }
        }
      cout<<endl;
    }

  for(int row=0;row<n;row++)
  {
    //for spaces
    for(int col=0;col<row;col++)
      {
        cout<<" ";
      }

    //for stars
    for(int col=0;col<2*(n-row)-1;col++)  
      {
        if(col>0 && col<2*(n-row)-2){
          cout<<" ";
        }
            else{
            cout<<"*";
            }
      }
    cout<<endl;
  } 


  /*
  cout<<"hallow full diamond";
  cout << endl << endl << endl << endl;
  //part 1
 for(int row=0;row<n;row++)
   { 
   //for left side traingle
    for(int col=0;col<n-row;col++)
     {
      cout<<"*";
    }

   //for spaaces
   for(int col=0;col<2*row+1;col++)
     {
     cout<<" ";
     }

   //for right side traingle
   for(int col=0;col<n-row;col++)
     {
     cout<<"*";
     }

     cout<<endl;
   }


  //part2
  for(int row=0;row<n;row++)
   { 
   //for left side traingle
    for(int col=0;col<row+1;col++)
     {
      cout<<"*";
    }

   //for spaaces
   for(int col=0;col<2*(n-row)-1;col++)
     {
     cout<<" ";
     }

   //for right side traingle
   for(int col=0;col<row+1;col++)
     {
     cout<<"*";
     }

     cout<<endl;
   }


  */
/*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          cout<<row+1;
          if(col!=row)
          {
            cout<<"*";
          }
        }
      cout<<endl;
    }

  for(int row=0;row<n;row++)
  {
    for(int col=0;col<n-row;col++)
      {
        cout<<n-row;
        if(col!=n-row-1)
        {
          cout<<"*";
        }
      }
    cout<<endl;
  }
*/
/*
  char ch;
  for(int row=0;row<n;row++)
    {
      int col;
      for(col=0;col<row+1;col++)
        {
          ch='A';
          ch=ch+col;
          
          cout<<ch;
        }
        col--;
     ch=ch-1;
      for(;col>0;col--)
        {
          cout<<ch--;
        }
  
      cout<<endl;
    }
*/
  //hallow inverted half pyramid
  /*
  for(int row=0;row<n;row++)
    {
    for(int col=0;col<n-row;col++)
      {
         if((row>0  && row< n-1) &&(col>0 && col<n-row-1))
         {
           cout<<" ";
         }
        else
         {
           cout<<"*";
         }
      }
      cout<<endl;
    }
*/

  //Hallow full pyramid
/*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<n-row;col++)
        {
          cout<<" ";
        }
      for(int col=0; col<row+1; col++)
        {
          if((row>0 && row<n-1) &&(col>0 && col<row))
          {
            cout<<"  ";
         
          }
          else{
            cout<<"* ";
          }
        }
      cout<<endl;
        }

  */


  //numeric hallow half pyramid
  /*
  for(int row=0;row<n;row++)
    {
    for(int col=0;col<row+1;col++)
      {
        if((row>0 && row<n-1) &&(col>0 && col<row) )
        {
          cout<<" ";
        }
        else
        {
          cout<<col+1;
        }
      }
      cout<<endl;
    }
cout<<endl<<endl;

*/

  //numeric hallow inverted half pyramid
/*
  for(int row=0;row<n;row++)
  {
  for(int col=0;col<n-row;col++)
    {
      if((row>0 && row<n-1) &&(col>0 && col<n-row-1) )
      {
        cout<<" ";
      }
      else
      {
        cout<<col+1;
      }
    }
    cout<<endl;
  }

*/

  /*
  for(int row=0;row<n;row++)
    {
      int col;
      for(int col=0;col<n-row-1;col++)
        {
          cout<<"  ";
        }  
    for( col=0;col<row+1;col++)
      {
        cout<<col+1<<" ";
      }
      col--;
      for(;col>0;col--)
        {
          cout<<col<<" ";
        }

      cout<<endl;
      }
  */

  //fancy pattern


  /*
  for(int row=0;row<n;row++)
    {
    for(int col=0;col<(2*n-2)-row;col++)
      {
        cout<<"*";
      }
      for(int col=0;col<row+1;col++)
        {
          cout<<row+1;
          if(col!=row)
          {
            cout<<"*";
          }
        }

      for(int col=0;col<(2*n-2)-row;col++)
      {
        cout<<"*";
      }
      cout<<endl;
    }

    */
  
  // fancy pattern
  /*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          cout<<"*";
        }
      cout<<endl;
    }

  for(int row=0;row<n-1;row++)
    {
      for(int col=0;col<n-row-1;col++)
        {
          cout<<"*";
        }
      cout<<endl;
    }

*/
/*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<2*row+1;col++)
        {
          if(col==0 || col==2*row)
          {
            cout<<"*";
          }
          else{
            cout<<col;
          }
        }
      cout<<endl;
      
    }

  */

  //
  /*
  int nn=1;
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          cout<<nn++<<" ";
        }
      cout<<endl;
    }

  */

  //

  /*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          if((col>0 && col<row) && (row>0 && row<n-1))
          {
          cout<<" ";
          }
          else{
            cout<<col+1<<" ";
          }
        }
      cout<<endl;
    }
  */
/*
  for(int row=0;row<n;row++)
    {
      int col;
      char ch='A';
      for(col=0;col<row+1;col++)
        {
        
         cout<<ch<<" ";
          ch=ch+1;
         }
      ch=ch-2;
      for(;col>1;col--)
        {
          cout<<ch<<" ";
          ch--;
        }
      cout<<endl;
    }
*/
  //fancy patternn 
  /*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          cout<<row+1;
           if(col!=row)
           {
          cout<<"*";
           }
        }
      cout<<endl;
    }

  for(int row=0;row<n;row++)
  {
    for(int col=0;col<n-row;col++)
      {
        cout<<n-row;
         if(col!=n-row-1)
         {
          cout<<"*";
         }
      }
    cout<<endl;
  }
  */

  /*
  ****  ****
  ***    ***
  **      **
  *        *
  *        *
  **      **
  ***    ***
  ****  ****

  flipped solid diamond
  */
/*
  for(int row=0;row<n;row++)
    {

      for(int col=0;col<n-row;col++)
        {
          cout<<"*";
        }

      for(int col=0;col<row+1;col++)
        {
          cout<<"  ";
        }

      for(int col=0;col<n-row;col++)
        {
          cout<<"*";
        }
          cout<<endl;
        }

  for(int row=0;row<n;row++)
    {

      for(int col=0;col<row+1;col++)
        {
          cout<<"*";
        }

      for(int col=0;col<n-row;col++)
        {
          cout<<"  ";
        }

      for(int col=0;col<row+1;col++)
        {
          cout<<"*";
        }
          cout<<endl;
        }

*/

  //numeric full pyramid
  /*
int value1=1;
 int value2;
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<n-row-1;col++)
      {
         cout<<"  ";
      }
      value1=row+1;
        value2=value1;
      for(int col=0;col<row+1;col++)
        {
          cout<<value1++<<" ";
        }
      for(int col=value1-2;col>=value2;col--)
        {
          cout<<col<<" ";
        }
      cout<<endl;

      
    
    }
    */

  //inverted full pyramid
/*
  * * * * 
   * * * 
    * * 
     * 
  */

  /*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row;col++)
        {
          cout<<" ";
        }
      for(int col=0;col<n-row;col++)
        {
          cout<<"* ";
        }
      cout<<endl;
        }

  */
//butterfly pattern
  
  /*  
  
  **      **
  ***    ***
  ****  ****
  **********
  ****  ****
  ***    ***
  **      **
  *        *
*/

  /*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          cout<<"*";
        }

      for(int col=0;col<n-row-1;col++)
        {
          cout<<" ";
        }
      for(int col=0;col<n-row-1;col++)
      {
        cout<<" ";
      }

      for(int col=0;col<row+1;col++)
        {
          cout<<"*";
        }
        cout<<endl;
      
    }

  for(int row=0;row<n;row++)
  {
    for(int col=0;col<n-row-1;col++)
      {
        cout<<"*";
      }

    for(int col=0;col<row+1;col++)
      {
        cout<<" ";
      }
    for(int col=0;col<row+1;col++)
    {
      cout<<" ";
    }

    for(int col=0;col<n-row-1;col++)
      {
        cout<<"*";
      }
      cout<<endl;

  }
*/
  //numerci hallow inverted half pyramid

  /*
  for(int row=0;row<n;row++)
    {
      int val=row+1;
      
    for(int col=0;col<n-row;col++)
      {
           if((row>0 && row<n-1) &&(col>0 && col<n-row-1))
            {
                cout<<"  ";
                 val++;
            }
             else{
               cout<<val++<<" ";
                }
      }
      cout<<endl;
       
  }

  */

  //
//numeric palindrome equlilateral traingle
/*
        1
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/
  /*
  for(int row=0;row<n;row++) 
    {
      for(int col=0;col<n-row-1;col++)
        {
          cout<<"  ";
        }
      int col;
      for(col=0;col<row+1;col++)
        {
          cout<<col+1<<" ";
        }
      col=col-1;
      for(;col>0;col--)
        {
          cout<<col<<" ";
        }
      cout<<endl;
        }
    */

  //solid half diamond

  /*
  * 
  * * 
  * * * 
  * * * * 
  * * * * * 
  * * * * 
  * * * 
  * * 
  * 
    */

  /*
  for(int row=0;row<n;row++)
    {
      for(int col=0;col<row+1;col++)
        {
          cout<<"* ";
        }
      
        cout<<endl;
    }

  for(int row=0;row<n-1;row++)
  {
    for(int col=0;col<n-row-1;col++)
      {
        cout<<"* ";
      }

      cout<<endl;
  }

  */

  for(int row=0;row<n;row++) 
  {
    int col,val;
    for(col=0;col<2*row+1;col++)
      {
        val=col;
        if(col==0 || col==2*row)
        {
          cout<<"*";
        }
        else
        {
          if((col>(2*row)/2 && col < (2*row)/2+1))
          {
            cout<<val;
            
            val++;
            
          }
          
          else
          {
            val--;
            cout<< val;
            
          }
          
        }
      }
        
    cout<<endl;
      }


   //fancy pattern
/*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
  */
  
  for(int row=0;row<n;row++)
    {
      
       int cond = row<=n/2 ? 2*row+1 : (n-row-1)*2 + 1;
      
    for(int col=0;col<cond;col++)
         {
           if(col==0)
           {
             cout<<"*";
           }
          
           if(col<=cond/2)
           {
             cout<<col+1;
           }
           else
           {
           cout<<cond-col;    
           }
      if(col == cond-1)
      {
        cout<<"*";
      }
      
          
         }
    cout<<endl;
    }


   //pascal triangle
 /*
  1 
  1 1 
  1 2 1 
  1 3 3 1 
  1 4 6 4 1 
  1 5 10 10 5 1 
  1 6 15 20 15 6 1 
    */
 

  cout<<endl<<endl<<endl;
  for(int row=0;row<n;row++)  
    {
      int val=1;
      for(int col=0;col<row+1;col++)
        {
          cout<<val<<" ";
          val = val*(row-col)/(col+1);
        }
      cout<<endl;
        }

  
}
      
    
  
    
  
    

  
  

  
        
    
  
