#include<iostream>

#include<stdio.h>

#include<conio.h>

using namespace std;
int main()

{

  int i, j, n, a[50], b[50], s[50], ch = 0;

  system("cls");

  loop1:

    cout << "\n*************************************\n";

  cout << "\n\t1.} INSERTING RECORDS.\n";

  cout << "\t2.} GATE < AND >.\n";

  cout << "\t3.} GATE < OR >.\n";

  cout << "\t4.} GATE < NOT >.\n";

  cout << "\t5.} GATE < NAND >.\n";

  cout << "\t6.} GATE < NOR >.\n";

  cout << "\t7.} GATE < XOR >.\n";

  cout << "\t8.} EXIT FROM THE PROGRAM.\n";

  cout << "\n*************************************\n";

  cout << "\n\nPLEASE ENTER YOUR CHOICE:";

  cin >> ch;

  switch (ch)

  {

  case 1:
    again:
      system("cls");
    cout << "Enter the number of values:" << endl;
    cin >> n;

    if (n < 1) {
      cout << "Invalid Number, try again";
      goto again;
    }

    cout << "\n value of n= ", n;
    cout << endl;
    for (i = 1; i <= n; i++)

    {

      cout << "\nENTER VALUE OF A["<<i<<"]=";

      cin >> a[i];

    }

    for (i = 1; i <= n; i++)

    {

      cout << "\nENTER VALUE OF B[ "<<i<<"]=";

      cin >> b[i] ;

    }
    
    for (i = 1; i <= n; i++)
    {
      if (a[i] > 1 || b[i] > 1)
      {
        system("cls");
        cout << "\n ENTER DATA BETWEEN 0 AND 1";
        goto loop1;
      }
    }
    system("cls");
    cout << "\n*******************************\n";
    cout << "\n VALUE OF A | VALUE OF B\n";
    cout << "\n*******************************\n";
    
    for (i = 1; i <= n; i++)
{
	cout<<"        "<<a[i]<<"        "<<b[i]<<endl;	
}
    cout << "\n\n*****************************\n\n";
    goto loop1;

  case 2:
    system("cls");
    
    for (i = 1; i <= n; i++)
    {
      if (a[i] == 1 && b[i] == 1)
        s[i] = 1;
      else
        s[i] = 0;

    }
    cout << "\n******************************\n";
    cout << "\n\tA\tB\tAND\n";
    cout << "\n******************************\n";

    for (i = 1; i <= n; i++)
	
      cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];

    cout << "\n\n******************************\n";
    goto loop1;

  case 3:
    system("cls");

    for (i = 1; i <= n; i++)
    {
      if (a[i] == 0 && b[i] == 0)
        s[i] = 0;
      else
        s[i] = 1;
    }

    cout << "\n******************************\n";
    cout << "\n\tA\tB\tOR\n";
    cout << "\n******************************\n";

    for (i = 1; i <= n; i++)
      cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n******************************\n\n";
    goto loop1;

  case 4:
    system("cls");
    cout << "\n**********************************************\n";
    cout << "\n BEFORE OPERATING THE 'NOT' VALUE OF A IS :\n";
    cout << "\n**********************************************\n\n";
    cout << "\tA\n";
    cout << "\n**********************************************\n";

    for (i = 1; i <= n; i++)
      cout << "\n\t "<< a[i];
    cout << "\n\n**********************************************\n";

    for (i = 1; i <= n; i++)
    {
      if (a[i] == 1)
        s[i] = 0;
      else
        s[i] = 1;
    }

    cout << "\n AFTER OPERATING THE NOT VALUE OF A IS :\n";
    cout << "\n*********************************************\n";
    cout << "\n\tNOT A\n";
    cout << "\n*********************************************\n";

    for (i = 1; i <= n; i++)
      cout << "\n\t "<< !a[i];
    cout << "\n\n*********************************************\n\n";
    goto loop1;

  case 5:

    system("cls");
    for (i = 1; i <= n; i++)
    {
      if (a[i] == 1 && b[i] == 1)
        s[i] = 1;
      else
        s[i] = 0;
    }

    cout << "\n***********************************************\n";
    cout << "\nBEFORE OPERATING THE 'NOT AND'VALUE OF \n";
    cout << "\n***********************************************\n";
    cout << "\n\tA\tB\tS\n";
    cout << "\n***********************************************\n";

    for (i = 1; i <= n; i++)
 cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n***********************************************\n";

    for (i = 1; i <= n; i++)
    {
      if (s[i] == 1)
        s[i] = 0;
      else
        s[i] = 1;
    }

    cout << "\n AFTER OPERATING THE 'NOT AND' VALUE OF \n";
    cout << "\n**********************************************\n";
    cout << "\n\tA\tB\tNAND\n";
    cout << "\n**********************************************\n";

    for (i = 1; i <= n; i++)
 cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n***********************************************\n\n";
    goto loop1;

  case 6:
    system("cls");
    for (i = 1; i <= n; i++)
    {
      if (a[i] == 1 || b[i] == 1)
        s[i] = 1;
      else
        s[i] = 0;
    }
    cout << "\n***********************************************\n";
    cout << "\nBEFORE OPERATING THE 'NOT OR'VALUE OF \n";
    cout << "\n***********************************************\n";
    cout << "\n\tA\tB\tS\n";
    cout << "\n***********************************************\n";

    for (i = 1; i <= n; i++)
 cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n***********************************************\n";

    for (i = 1; i <= n; i++)
    {
      if (s[i] == 1)
        s[i] = 0;
      else
        s[i] = 1;
    }
    cout << "\n AFTER OPERATING THE 'NOT OR' VALUE OF \n";
    cout << "\n**********************************************\n";
    cout << "\n\tA\tB\tNOR\n";
    cout << "\n**********************************************\n";
    
    for (i = 1; i <= n; i++)
 cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n***********************************************\n\n";
    goto loop1;

  case 7:
    system("cls");
    cout << "\n***********************************************\n";
    cout << "\nBEFORE OPERATING THE 'XOR'VALUE OF \n";
    cout << "\n***********************************************\n";
    cout << "\n\tA\tB\n";
    cout << "\n***********************************************\n\n";

    for (i = 1; i <= n; i++)
 cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n***********************************************\n";

    for (i = 1; i <= n; i++)

    {
      if ((a[i] == 0 && b[i] == 0) || (a[i] == 1 && b[i] == 1))
        s[i] = 0;
      else
        s[i] = 1;
    }
    
    cout << "\n AFTER OPERATING THE 'XOR' VALUE OF \n";
    cout << "\n**********************************************\n";
    cout << "\n\tA\tB\tXOR\n";
    cout << "\n**********************************************\n";
    
    for (i = 1; i <= n; i++)
 cout << "\n\t"<<a[i]<< "\t"<<b[i]<<"\t "<<s[i];
    cout << "\n\n***********************************************\n\n";
    goto loop1;

  case 8:
    break;
  }

  getch();

}
