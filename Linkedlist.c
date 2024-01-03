#include<stdio.h>
#include<string.h>
#include<Stdlib.h>

struct Student
{
    int roll;
    char name[20];
    struct student *next;
};

void insertBegin(struct Student **hptr,char name[],int roll)
{
    struct Student *tmp;
    tmp=(struct Student*) malloc (sizeof(struct Student));
    strcpy(tmp->name,name);
    tmp->roll=roll;
    tmp->next=*hptr;
    *hptr=tmp;
}

void displaylinkedlist(struct Student *h)
{
    if(h==NULL)
        printf("ll is empty");
    else
    {
        struct Student *tmp=h;

        while(tmp!=NULL)
        {
            printf("%d %s\n",tmp->roll,tmp->name);
            tmp=tmp->next;
        }

    }


}


int Sizelinkedlist(struct Student *h)
{
    int cout=0;
    if (h==NULL)
        return 0;
    else
    {
        struct Student *tmp=h;
        while (tmp!=NULL)
        {
            cout++;
            tmp=tmp->next;
        }
        return cout;
    }
}


int rollFind(struct Student *h, char name[20])
{
    struct Student *tmp=h;
    while(tmp!=NULL)
    {
        if(strcmp(tmp->name,name)==0)
            return tmp->roll;
        else
            tmp=tmp->next;
    }
    return -1;
}

void InsertNNode(struct Student **h,char name[20],int roll, int N)
{
    int i;
    struct Student *newN, *tmp=*h;
    newN = (struct Student*)malloc(sizeof(struct Student));
    strcpy(newN->name,name);
    newN->roll=roll;
    if(*h==NULL)
    {
        newN->next=NULL;
        *h=newN;
    }

    else if(N==1)
    {
        newN->next=*h;
        *h=newN;
    }
    else
    {
        for(i=1; i<N-2; i++)
            tmp=tmp->next;
        newN->next=tmp->next;
        tmp->next=newN;
    }
}


void DeleteFirst (struct Student **h)
{
    struct Student *tmp;
    if(*h==NULL)
    {
        printf("Empty ll");
    }
    else
    {
        tmp=*h;
        *h=tmp->next;
        free(tmp);
    }
}


void DeleteNNode(struct Student **h, int N)
{
    int i;
    struct Student *tmp = *h, *tmp2;
    if(*h==NULL)
        printf("Empty");
    else if (N==1)
    {
        *h=(*h)->next;
        free (*h);
    }
    else
    {
        for(i=1; i<N-2; i++)
            tmp=tmp->next;
        tmp2=tmp->next;
        tmp->next=tmp2->next;
        free (tmp2);
    }
}


int main()
{
    struct Student a,b,c,d, *head;
    head=&a;

    strcpy(a.name,"Shaon");
    a.roll=101;
    a.next=&b;

    strcpy(b.name,"Ahom");
    b.roll=202;
    b.next=&c;

    strcpy(c.name,"Shafin");
    c.roll=303;
    c.next=&d;

    strcpy(d.name,"Faraha");
    d.roll=404;
    d.next=NULL;


    insertBegin(&head,"Shakil",525);

    InsertNNode(&head,"Siyam",303,4);

    DeleteFirst(&head);

    DeleteNNode(&head,3);

    displaylinkedlist(head);




    int size;
    size=Sizelinkedlist(head);
    printf("%d",size);

    int search=rollFind(head,"di");
    if(search==-1)
        printf("roll not found");
    else
        printf("\n %d",search);



    return 0;
}




