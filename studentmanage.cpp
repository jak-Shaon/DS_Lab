#include<iostream>
using namespace std;

string arr1[200],arr2[50],arr3[100],arr4[50],arr5[20];

int total=0;

void enter()
{
    int ch=0;

    cout<<"How many students data do you want to enter..??"<<endl;
    cin>>ch;

    if(total==0)
    {
        total=ch+total;

        for(int i=0; i<ch; i++)

        {
            cout<<"\nEnter the Data of Student :: "<<i+1<<endl<<endl;

            cout<<"Enter name : ";
            cin>>arr1[i];

            cout<<"Enter Roll No : ";
            cin>>arr2[i];

            cout<<"Enter course : ";
            cin>>arr3[i];

            cout<<"Enter Department : ";
            cin>>arr4[i];

            cout<<"Enter Contact No : ";
            cin>>arr5[i];
        }
    }

    else
    {
        for(int i=total; i<ch+total; i++)
        {
            cout<<"\nEnter the Data of Student :: "<<i+1<<endl<<endl;

            cout<<"Enter Name : ";
            cin>>arr1[i];

            cout<<"Enter Roll No : ";
            cin>>arr2[i];

            cout<<"Enter Course : ";
            cin>>arr3[i];

            cout<<"Enter Department : ";
            cin>>arr4[i];

            cout<<"Enter Contact No : ";
            cin>>arr5[i];
        }
        total=ch+total;
    }
}

void show()
{
    if(total==0)
    {
        cout<<"No data is Entered..!!!!"<<endl;
    }

    else
    {
        for(int i=0; i<total; i++)
        {
            cout<<"\nData of Student : "<<i+1<<endl<<endl;

            cout<<"Name : "<<arr1[i]<<endl;

            cout<<"Roll No : "<<arr2[i]<<endl;

            cout<<"Course : "<<arr3[i]<<endl;

            cout<<"Department : "<<arr4[i]<<endl;

            cout<<"Contact No : "<<arr5[i]<<endl;
        }
    }
}

void search()
{
    if(total==0)
    {
        cout<<"No data is Entered..!!!"<<endl;
    }

    else
    {
        string rollno;

        cout<<"Enter the Roll No of Student : "<<endl;
        cin>>rollno;

        for(int i=0; i<total; i++)

        {
            if(rollno==arr2[i])
            {
                cout<<"Name : "<<arr1[i]<<endl;

                cout<<"Roll no : "<<arr2[i]<<endl;

                cout<<"Course : "<<arr3[i]<<endl;

                cout<<"Department : "<<arr4[i]<<endl;

                cout<<"Contact No : "<<arr5[i]<<endl;
            }
        }
    }
}

void update()
{
    if(total==0)
    {
        cout<<"No data is Entered..!!!"<<endl;
    }

    else
    {
        string rollno;

        cout<<"Enter the Roll No of Student which you want to update : "<<endl;

        cin>>rollno;

        for(int i=0; i<total; i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"\nPrevious Data : "<<endl<<endl;

                cout<<"Data of Student : "<<i+1<<endl;

                cout<<"Name : "<<arr1[i]<<endl;

                cout<<"Roll No : "<<arr2[i]<<endl;

                cout<<"Course : "<<arr3[i]<<endl;

                cout<<"Department : "<<arr4[i]<<endl;

                cout<<"Contact No : "<<arr5[i]<<endl;

                cout<<"\nEnter New Data : "<<endl<<endl;

                cout<<"Enter Name : ";
                cin>>arr1[i];

                cout<<"Enter Roll No : ";
                cin>>arr2[i];

                cout<<"Enter course : ";
                cin>>arr3[i];

                cout<<"Enter Department : ";
                cin>>arr4[i];

                cout<<"Enter contact No : ";
                cin>>arr5[i];
            }
        }
    }
}

void deleterecord()
{
    if(total==0)
    {
        cout<<"No data is Entered...!!!"<<endl;
    }

    else
    {
        int a;

        cout<<"Press 1 :: Delete all record."<<endl;
        cout<<"Press 2 :: Delete specific record."<<endl;
        cin>>a;

        if(a==1)
        {
            total=0;
            cout<<"All record is Deleted..!!!!"<<endl;
        }

        else if(a==2)
        {
            string rollno;

            cout<<"Enter the Roll No of student which you wanted to delete : "<<endl;

            cin>>rollno;

            for(int i=0; i<total; i++)
            {
                if(rollno==arr2[i])
                {
                    for(int j=i; j<total; j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                    }

                    total--;

                    cout<<"Your required record is Deleted.."<<endl;
                }
            }
        }

        else
        {
            cout<<"Invalid Input..!!!!!";
        }
    }
}

main()
{
    int value;

    while(true)
    {
        cout<<"\nPress 1 :: Enter Data"<<endl;

        cout<<"Press 2 :: Show Data"<<endl;

        cout<<"Press 3 :: Search Data"<<endl;

        cout<<"Press 4 :: Update Data"<<endl;

        cout<<"Press 5 :: Delete Data"<<endl;

        cout<<"Press 6 :: Exit"<<endl;

        cin>>value;

        switch(value)
        {
        case 1:
            enter();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            deleterecord();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout<<"Invalid Input..!!!!"<<endl;
            break;
        }
    }
}
