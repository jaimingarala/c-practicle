#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int sem,mark[3][2],i,j,creadit[3][2],t_creadit,grade_p[3][2];
    float t_sgpa,sgpa;
    char std_id[8];
    string std_name,sub_name[3],grade[3][2];

    cout<<"Enter the student id:";
    cin>>std_id;
    cout<<"Enter the student name:";
    cin>>std_name;
    cout<<"Enter the semester name:";
    cin>>sem;

    for(i=0;i<3;i++)
    {
    cout<< "Enter the  subject name" << i+1<< " : ";
    cin.ignore();
        getline(cin,sub_name[i]);
    }

    for(i=0;i<3;i++)
    {
        cout<<"Enter the mark of"<<sub_name[i]<<":" ;
        for(j=0;j<2;j++)
        {
            cin>>mark[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
    cout<< "Enter the creadit of " << sub_name[i]<<"for theory and practical:";
    for(j=0;j<2;j++)
    {
         cin >> creadit[i][j];
         t_creadit += creadit[i][j];
    }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {

            if(mark[i][j]>=80)
            {
                grade[i][j]="AA";
                grade_p[i][j]=10;
            }
            else if(mark[i][j]>=73)
            {
                grade[i][j]="AB";
                grade_p[i][j]=9;
            }
            else if(mark[i][j]>=66)
            {
                grade[i][j]="BB";
                grade_p[i][j]=8;
            }
            else if(mark[i][j]>=60)
            {
                grade[i][j]="BC";
                grade_p[i][j]=7;
            }
            else if(mark[i][j]>=55)
            {
                grade[i][j]= "cc";
                grade_p[i][j]=6;
            }
             else if(mark[i][j]>=50)
            {
                grade[i][j]="cd";
                grade_p[i][j]=5;
            }
               else if(mark[i][j]>=45)
            {
                grade[i][j]="DD";
                grade_p[i][j]=4;
            }
               else
            {
                grade[i][j]="FF";
                grade_p[i][j]=0;
            }
        }
    }

    cout<<"student ID :"<<std_id<<endl;
    cout<<"student name :"<<std_name<<endl;
    cout<<"semester  :"<<sem<<endl;

    cout<< setw(23)<<"T"<<" "<<"P"<<endl;
    for(i=0;i<3;i++)
    {
        cout<< setw(20)<<sub_name[i]<<" ";
        for(j=0;j<2;j++)
        {
            cout<< grade[i][j]<< " ";
        }
        cout<<endl;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            sgpa=sgpa+grade_p[i][j]*creadit[i][j];
        }
    }
    t_sgpa=sgpa/t_creadit;
    cout<< "sgpa : "<< fixed << setprecision(2) << t_sgpa;

    return 0;
}
