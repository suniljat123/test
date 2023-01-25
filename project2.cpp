#include<iostream>
using namespace std;
void print();
int main()
{
    int ch;
    cout<<"Enter your choice"<<endl<<"1.Want to play with Smart Computer"<<endl<<"2.Want to play with Evil Computer"<<endl<<"3.Want to play with Player"<<endl<<"4.Exit";
    cin>>ch;
    switch(ch)
    {
        case 1:
            print();
            break;
        case 2:
            print();
            break;
        case 3:
            print();
            break;
        case 4:
            exit(0);
        default:
            cout<<endl<<"Enter valid Choice:";
    }

    return 0;
}
void print()
{
    int i,j,k=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<k<<"  ";
            if(j==1||j==2)
                cout<<"|  ";
            k++;

        }
        cout<<endl<<"-";
        for(int l=1;l<=3;l++)
        {
            cout<<"----";
        }
        cout<<endl;
    }
}
