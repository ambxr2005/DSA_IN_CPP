#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Patterns

    /*
        Square Pattern:
        1   2   3   4
        1   2   3   4
        1   2   3   4
        1   2   3   4
    */
    int n;
    cout << "Enter the number of rows/columns: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // For printing stars '*'
    cout << "Printing stars:-" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    // For printing characters:-
    cout << "Printing characters:-" << endl;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    /*
        Square Pattern:
        1   2   3
        4   5   6
        7   8   9
    */
    int num = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Same above problem in character version:
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    /*
        Triangle Pattern:
        *
        *   *
        *   *   *
        *   *   *   *
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    /*
         Triangle Pattern:
         1
         2   2
         3   3   3
         4   4   4   4
     */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
         Triangle Pattern:
         A
         B   B
         C   C   C
         D   D   D   D
     */
    char ch1 = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch1 << " ";
        }
        cout << endl;
        ch1++;
    }

    /*
         Triangle Pattern:
         1
         1   2
         1   2   3
         1   2   3   4
     */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /*
         Triangle Pattern:
         1
         2   1
         3   2   1
         4   3   2   1
     */
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /*
         Triangle Pattern:
         A
         B   A
         C   B   A
         D   C   B   A
     */
    char ch3 = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << char(ch3 + j) << " ";
        }
        cout << endl;
    }

    /*
         Triangle Pattern:
         1
         2   3
         4   5   6
         7   8   9   10
     */
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }

    /*
         Triangle Pattern:
         A
         B   C
         D   E   F
         G   H   I   J
     */
    char ch2 = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << ch2 << " ";
            ch2++;
        }
        cout << endl;
    }

    /*
        Inverted Triangle Pattern:
        1   1   1   1
            2   2   2
                3   3
                    4
    */
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < i; j++)
    {
        cout << " " << " ";
    }
    for (int j = 0; j < (n-i); j++)
    {
        cout << (i + 1) << " ";
    }
    cout << endl;
   }

   /*
    Pyramid Pattern:
                    1
                1   2   1
            1   2   3   2   1
        1   2   3   4   3   2   1
   */
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j <= (n - i - 1); j++)
    {
        cout << " " << " ";
    }
    for (int j = 1; j <= i + 1; j++)
    {
        cout << j << " ";
    }
    for (int j = i; j >= 1; j--)
    {
        cout << j << " ";
    }
    cout << endl;    
   }

   return 0;
}
