#include<stdio.h>
#include<string.h>
void AddStudent();
void EditStudent();
void DeleteStudent();
void SearchStudent();
void DisplayListOfStudent();
int Rollno[100];
int NumberOfStudentsAdded = 0;
char Name[100][22];
int main() 
{
    int choice;
    while (1) 
    {
        printf("1. Add Students\n");
        printf("2. Edit Students\n");
        printf("3. Delete Students\n");
        printf("4. Search Students\n");
        printf("5. Display List Of Students\n");
        printf("6. EXIT\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        fflush(stdin);
        if (choice < 1 || choice > 6) 
        {
            printf("Invalid Input!\n");
            continue;
        }
        if (choice == 1) 
        {
            AddStudent();
            printf("--------------------------------------\n");
        }
        if (choice == 2) 
        {
            EditStudent();
            printf("--------------------------------------\n");
        }
        if (choice == 3) 
        {
            DeleteStudent();
            printf("--------------------------------------\n");
        }
        if (choice == 4) 
        {   
            SearchStudent();
            printf("--------------------------------------\n");
        }
        if (choice == 5) 
        {
            DisplayListOfStudent();
            printf("--------------------------------------\n");
        }
        if (choice == 6) break;
    }
    return 0;
}
void AddStudent() 
{
    int jrollNumber;
    char jname[22], m;
    printf("WELCOME TO ADD MODULE\n");
    printf("Enter Roll Number: ");
    scanf("%d", &jrollNumber);
    fflush(stdin);
    if (jrollNumber < 0) 
    {
        printf("INVALID INPUT\n");
        return;
    }
    for (int e = 0; e < NumberOfStudentsAdded; e++) 
    {
        if (jrollNumber == Rollno[e]) 
        {
            printf("Roll Number Already Alloted To %s\n", Name[e]);
            return;
        }
    }
    printf("Enter Name: ");
    scanf(" %[^\n]", jname);
    fflush(stdin);
    printf("SAVE (Y/N): ");
    m = getchar();
    if (m != 'Y' && m != 'y') 
    {
        printf("Student Not Added!\n");
        return;
    }
    Rollno[NumberOfStudentsAdded] = jrollNumber;
    strcpy(Name[NumberOfStudentsAdded], jname);
    NumberOfStudentsAdded++;
    printf("Student Added Successfully, Press any key to continue...\n");
    getchar();
    fflush(stdin);
}
void EditStudent() 
{
    int rollNumber, found = 0;
    char newName[22];
    printf("WELCOME TO EDIT MODULE\n");
    printf("Enter Roll Number of the Student to Edit: ");
    scanf("%d", &rollNumber);
    fflush(stdin);
    for (int i = 0; i < NumberOfStudentsAdded; i++) 
    {
        if (Rollno[i] == rollNumber) 
        {
            found = 1;
            printf("Current Name: %s\n", Name[i]);
            printf("Enter New Name: ");
            scanf(" %[^\n]", newName);
            fflush(stdin);
            strcpy(Name[i], newName);
            printf("Student Details Updated Successfully.\n");
            break;
        }
    }
    if (!found) 
    {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}
void DeleteStudent() 
{
    int rollNumber, found = 0;
    printf("WELCOME TO DELETE MODULE\n");
    printf("Enter Roll Number of the Student to Delete: ");
    scanf("%d", &rollNumber);
    fflush(stdin);
    for (int i = 0; i < NumberOfStudentsAdded; i++) 
    {
        if (Rollno[i] == rollNumber) 
        {
            found = 1;
            for (int j = i; j < NumberOfStudentsAdded - 1; j++) 
            {
                Rollno[j] = Rollno[j + 1];
                strcpy(Name[j], Name[j + 1]);
            }
            NumberOfStudentsAdded--;
            printf("Student Deleted Successfully.\n");
            break;
        }
    }
    if (!found) 
    {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}
void SearchStudent() 
{
    int rollNumber, found = 0;
    printf("WELCOME TO SEARCH MODULE\n");
    printf("Enter Roll Number of the Student to Search: ");
    scanf("%d", &rollNumber);
    fflush(stdin);
    for (int i = 0; i < NumberOfStudentsAdded; i++) 
    {
        if (Rollno[i] == rollNumber) 
        {
            found = 1;
            printf("Roll Number: %d\tName: %s\n", Rollno[i], Name[i]);
            break;
        }
    }
    if (!found) 
    {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}
void DisplayListOfStudent() 
{
    printf("WELCOME TO DISPLAY MODULE\n");
    for (int f = 0; f < NumberOfStudentsAdded; f++) 
    {
        printf("Roll Number: %d\t\tName: %s\n", Rollno[f], Name[f]);
    }
    printf("List Displayed Successfully, Press any key to continue...\n");
    getchar();
    fflush(stdin);
}