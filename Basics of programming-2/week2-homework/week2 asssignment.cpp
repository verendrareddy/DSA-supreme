// week2 asssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
   //1.solid square
/*	******
	******
    ******
    ******
    */

    int n;
    cout << "enter the n \n";
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //2.hallow square
    /*
        ******
        *    *
        *    *
        *    *
        ******

        */
    cout << "-------\n";
    cout << "Hallow square\n";
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
           
            if ((i > 0 && i < n - 1) && (j > 0 && j < n - 1))
            {
                cout << " ";
             }
            else
            {
                cout << "*";
            }
            
        }
        cout << endl;
    }

    //3.hallow inverted half pyramid

    /*
    *****
    *  *
    * *
    * 
    
    */
    cout << "-----";
    cout << "\n hallow inverted half pyramid\n";
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n - i;j++)
        {
            if ((i>0 &&  i<n) && (j>0 && j<n-i-1))
            {
                cout <<"  ";
            }
            else
            {
                cout << "* ";
            }
            
       }
        cout << endl;
    }
    cout << "----";
    cout << "\nHallow full pyramid\n";
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n - i - 1;j++)  //spaces
        {
            cout << " ";
        }
        for (int k = 0;k < i + 1;k++)
        {
            if ((i > 0 && i < n-1) && (k > 0 && k < i ))
            {
                cout <<"  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    //numeric hallow half pyramid
    /*
    1
    1 2
    1   3
    1     4
    1 2 3 4 5
    */

    cout << "-----";
    cout << "\n numeric hallow pyramid\n";

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < i + 1;j++)
        {
            if ((i > 0 && i < n - 1) && (j > 0 && j < i))
            {
                cout << "  ";
            }
            else
            {
                cout << j + 1<<" ";
            }
        }
        cout << endl;
    }


    //numeric hallow inverted pyramid
    /*
    1 2 3 4 5
    2     5
    3   5
    4 5
    5
    
    */

    cout << "-----";
    cout << "\nnumeric hallow inverted pyramid\n";

    for (int i = 0;i < n;i++)
    {
        for (int j =0;j <n - i;j++)
        {
            if ((i > 0 && i < n - 1) && (j > 0
                && j < n - i - 1))
            {
                cout << "  ";
           }
            else
            {
                cout << j+i+1<<" ";
            }
        }
        cout << endl;
    }

    cout << "-----";
    cout <<"\nnumeric palindromerome\n";
    for (int i = 0;i < n;i++)
    {
        int k;
        for (int j = 0;j < n - i - 1;j++)
        {
            cout << " ";

        }
        for (k = 0;k < i + 1;k++)
        {
            cout << k + 1;


        }
        k--;
        for (;k > 0;k--)
        {
            cout << k;
        }
        cout << endl;
    }

    //fancy pattern 1
    /*
    ********1********
    *******2*2*******
    ******3*3*3******
    *****4*4*4*4*****
    ****5*5*5*5*5****
    */

    cout << "-----\n";
    cout << "fancy pattern 1\n";

    for (int row = 0;row < n;row++)
    {
        for (int col = 0;col < 2 * n - row - 2;col++) //for stars
        {
            cout << "*";
        }
        for (int col = 0;col < row + 1;col++) //for numbers
        {
            cout << row + 1;
            if (col != row)
            {
                cout << "*";
            }
        }

        for (int col = 0;col < 2 * n - row - 2;col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //fancy pattern 3
    /*
    *
    * 1 *
    * 1 2 1 *
    * 1 2 3 2 1 *
    * 1 2 1 *
    * 1 *
    * 
    */
    cout << "----\n";
    cout << "fancy pattern 3\n";

    for (int row = 0;row < n + 2;row++)
    {
        int col;
        if (row >= 0 && row <= (n + 2) / 2)
        {
            int m = 1, k;
            for (col = 0;col < 2 * row + 1;col++)
            {
                k = col - 2 * m;
                
               
                if (col == 0 || col == 2 * row)
                {
                    cout << "*";
                }
                else if (col > 0 && col <= row)
                {
                    cout << col;
                }
                
                else if (col > row && col <2 * row)
                {
                    cout << k;
                    m++;
                  
                }
               

            }

            
        }
        else
        {
            for (col =0;col<n;col=col++)
            {
                if (col == n || col == n-1)
                {
                    cout << "*";
                }
              
            }
        }
        cout << endl;
        
    }

    //fancy pattern 4

    cout << "----\n";
    cout << "fancy pattern 4\n";
    int start = 0;
    for (int row = 0;row < n;row++)
    {
        
        for (int col = 0;col < row+1;col++)
        {
            cout << ++start;
            if ((col >=0 && col<row))
            {
                cout << "*";
            }
         
        }
        cout << endl;
    }
    start = start - n + 1;
    for (int row = 0;row < n;row++)
    {
        int kk = start;
        for (int col = 0;col < n - row;col++)
        {
            cout << kk++;
            if ((col >= 0 && col < n-row-1))
            {
                cout << "*";
            }
            

        }
        cout << endl;
        start = start - (n - row - 1);
        
    }
   
    //butterfiy pattern

    cout << "-------\n";
    cout << "butterfly pattern \n";

    for (int row = 0;row < n;row++)
    {
        for (int col = 0;col < row + 1;col++) //for 1 star pattern
        {
            cout << "*";
        }
        for (int col = 0;col < 2*n - 2*row-1;col++) //for spaces
        {
            cout <<" ";
        }
        for (int col = 0;col < row + 1;col++) //for 2nd star
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = 0;row < n;row++)
    {
        for (int col =0; col < n - row;col++)
        {
            cout << "*";
        }
        for (int col = 0;col < 2 * row + 1;col++)
        {
            cout << " ";
        }
        for (int col = 0;col < n - row;col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //numeric full pyramid
    /*
    
         1
       2 3 2
     3 4 5 3 4 
   4 5 6 7 6 5 4 
    
    */

    cout << "-----\n";
    cout << "numeric full pyramid\n";
    int start1;
    for (int row = 0;row < n;row++)

    {
        start1 = row;
        for (int col=0;col<n-row-1;col++)
        {
            cout << "  ";
        }
        for (int col =0;col < row + 1;col++) //for numbers
        {
            cout << ++start1<<" ";

        }
        for (int col = 0;col < row;col++)
        {
            cout<<--start1<<" ";
        }
        cout << endl;
    }
    //numeric hallow pyramid
    /*
    
         1
      1     2
    1         3
  1             4
1  2   3    4     5

    
    */
    cout << "\n-----";
    cout << "numeric hallow pyramid\n";
    for (int row = 0;row < n;row++)
    {
        for (int col = 0;col < n - row;col++)
        {
            cout << " ";
        }
        for (int col = 0;col < row + 1;col++)
        {
            int num = col;
            num++;
            if ((row >0 && row< n - 1) && (col>0 && col < row) )
            {
                cout<<"  ";
            }
            else
            {
                cout << num << " ";
            }
           
        }
        cout << endl;
    }

}


