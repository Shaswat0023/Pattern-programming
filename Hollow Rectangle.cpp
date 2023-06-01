#include<iostream>
using namespace std;
int main()
{
    cout<<"We will be printing a hollow rectangle pattern!"<<endl;
    system("pause>0");
    system("cls");
    int a,b,c=0,d=0;
    cout<<"Enter the number of rows: ";
    cin>>a;
    cout<<"Enter the number of columns: ";
    cin>>b;
    cout<<endl;
    if(a==b)
    {
        cout<<endl;
        while(a==b)
        {
            cout<<"Since the number of rows and number of columns are same it is not a hollow rectangle but a hollow square!"<<endl;
            system("pause>0");
            cout<<"Press 1 to change the values and 0 to proceed with the same values: ";
            cin>>c;
            system("pause>0");
            system("cls");
            if(c==1)
            {
                cout<<"Enter the number of rows: ";
                cin>>a;
                cout<<"Enter the number of columns: ";
                cin>>b;
                cout<<"The values has been recorded sucessfully!"<<endl;
                d=1;
                system("pause>0");
                system("cls");
            }
        else if(c==0)
        {
           cout<<"The compilation is done with the old values and it is square!"<<endl;
           cout<<"The hollow square is printed below!"<<endl;
           for(int i = 1; i<=a; i++)
           {
                for(int j =1; j<=b; j++)
                {
                    if(i==1 || i==a)
                    {
                        cout<<"*";
                    }
                    else if(j==1 || j==b)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            cout<<endl;
            }
            break;
        }
      }
    }
    if(a!=b)
    {
        cout<<"The hollow rectangle is printed below!"<<endl;
        for(int i = 1; i<=a; i++)
        {
            for(int j =1; j<=b; j++)
            {
                if(i==1 || i==a)
                {
                    cout<<"*";
                }
                else if(j==1 || j==b)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

