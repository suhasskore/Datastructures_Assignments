#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee {
    int eid;
    char name[20];
    float salary;
};

void add_employee(struct employee e1[], int n)
{
    printf("\n[INFO] Adding Employees...\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i+1);

        printf("Enter ID: ");
        scanf("%d", &e1[i].eid);

        printf("Enter Name: ");
        scanf("%s", e1[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e1[i].salary);

        printf("[LOG] Added -> ID:%d Name:%s Salary:%.2f\n",
               e1[i].eid, e1[i].name, e1[i].salary);
    }
}

void search_by_Id(struct employee e1[], int n)
{
    int id, found = 0;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        printf("[DEBUG] Checking index %d\n", i);

        if(e1[i].eid == id)
        {
            printf("\n[FOUND]\n");
            printf("ID: %d\nName: %s\nSalary: %.2f\n",
                   e1[i].eid, e1[i].name, e1[i].salary);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("[WARN] Employee not found\n");
}

void search_by_name(struct employee e1[], int n)
{
    char name[20];
    int found = 0;

    printf("Enter Name to search: ");
    scanf("%s", name);

    for(int i = 0; i < n; i++)
    {
        printf("[DEBUG] Checking index %d\n", i);

        if(strcmp(e1[i].name, name) == 0)
        {
            printf("\n[FOUND]\n");
            printf("ID: %d\nName: %s\nSalary: %.2f\n",
                   e1[i].eid, e1[i].name, e1[i].salary);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("[WARN] Employee not found\n");
}

int main()
{
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e1[n];

    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("0. Exit\n1. Add Employee\n2. Search by ID\n3. Search by Name\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add_employee(e1, n);
                break;

            case 2:
                search_by_Id(e1, n);
                break;

            case 3:
                search_by_name(e1, n);
                break;

            case 0:
                printf("[EXIT] Program terminated\n");
                exit(0);

            default:
                printf("[ERROR] Invalid choice\n");
        }

    } while(choice != 0);

    return 0;
}