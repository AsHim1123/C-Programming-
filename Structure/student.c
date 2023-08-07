#include<stdio.h>
#include<conio.h>
#include<string.h>
 
 struct student
 {
    int rn;
    char name[30];
    char address[30];
    long int phone;
    float marks;
 };
    int main ()
    {

        struct student s[100];
        int n,i,j,temp_marks;
        char temp_name[40];
        printf("Enter how many student's data you want to input.\n");
        scanf("%d",&n);

        for (i=0;i<n;i++)
        {
            printf("Enter the roll number, name, address, phone and marks of the student %d.\n",i+1);
            scanf("%d %s %s %ld %f", &s[i].rn,s[i].name,s[i].address,&s[i].phone,&s[i].marks);
        }
        printf("Roll Number\t Name\t Address\t Phone\t Marks\n");


        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                if (s[i].marks>s[j].marks)
                {
                    temp_marks=s[i].marks;
                    s[i].marks=s[j].marks;
                    s[j].marks=temp_marks;
                    strcpy(temp_name,s[i].name);
                    strcpy(s[i].name,s[j].name);
                    strcpy(s[j].name,temp_name);
                }
            }
        }

        for (i=0;i<n;i++)
        {
            printf("%d\t %s\t %s\t %ld\t %f\n", s[i].rn,s[i].name,s[i].address,s[i].phone,s[i].marks);
        }
        return 0;

    }
