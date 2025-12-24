#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

Student *students = NULL;
int count = 0;

// Function declarations
void addStudent();
void displayStudents();
void modifyStudent();
void deleteStudent();
void saveToFile();
void loadFromFile();
void searchStudent();
void sortAscending();
void sortDescending();
void calculateAverage();

int main() {
    char username[50];

    printf("WELCOME TO STUDENT RECORD SYSTEM\n");
    printf("Enter your name: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;
    printf("Hello %s! Let's begin...\n\n", username);

    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Modify Student\n");
        printf("4. Delete Student\n");
        printf("5. Search Student\n");
        printf("6. Sort (Ascending by Marks)\n");
        printf("7. Sort (Descending by Marks)\n");
        printf("8. Calculate Average Marks\n");
        printf("9. Save to File\n");
        printf("10. Load from File\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: modifyStudent(); break;
            case 4: deleteStudent(); break;
            case 5: searchStudent(); break;
            case 6: sortAscending(); break;
            case 7: sortDescending(); break;
            case 8: calculateAverage(); break;
            case 9: saveToFile(); break;
            case 10: loadFromFile(); break;
            case 0:
                free(students);
                printf("\nGoodbye, %s! Thanks for using the Student Record System.\n", username);
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

void addStudent() {
    students = realloc(students, (count + 1) * sizeof(Student));

    printf("Enter student name: ");
    getchar();
    fgets(students[count].name, 50, stdin);
    students[count].name[strcspn(students[count].name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &students[count].roll);

    printf("Enter marks: ");
    scanf("%f", &students[count].marks);

    if (students[count].marks >= 40)
        printf("Status: PASS\n");
    else
        printf("Status: FAIL\n");

    count++;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No records available.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

void modifyStudent() {
    int roll;
    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Enter new name: ");
            getchar();
            fgets(students[i].name, 50, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;

            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);

            printf("Record updated!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

void deleteStudent() {
    int roll;
    printf("Enter roll to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < count - 1; j++)
                students[j] = students[j + 1];

            count--;
            students = realloc(students, count * sizeof(Student));
            printf("Record deleted!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

void saveToFile() {
    FILE *fp = fopen("students.txt", "w");

    for (int i = 0; i < count; i++)
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);

    fclose(fp);
    printf("Records saved to students.txt\n");
}

void loadFromFile() {
    FILE *fp = fopen("students.txt", "r");
    if (!fp) {
        printf("File not found!\n");
        return;
    }

    count = 0;
    free(students);
    students = NULL;

    Student temp;
    while (fscanf(fp, "%s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        students = realloc(students, (count + 1) * sizeof(Student));
        students[count] = temp;
        count++;
    }

    fclose(fp);
    printf("Records loaded!\n");
}

void searchStudent() {
    int roll;
    printf("Enter roll to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student not found!\n");
}

void calculateAverage() {
    if (count == 0) {
        printf("No students to calculate.\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < count; i++) sum += students[i].marks;

    printf("Average Marks = %.2f\n", sum / count);
}

void sortAscending() {
    for (int i = 0; i < count; i++)
        for (int j = i + 1; j < count; j++)
            if (students[i].marks > students[j].marks) {
                Student t = students[i];
                students[i] = students[j];
                students[j] = t;
            }
    printf("Sorted in ascending order!\n");
}

void sortDescending() {
    for (int i = 0; i < count; i++)
        for (int j = i + 1; j < count; j++)
            if (students[i].marks < students[j].marks) {
                Student t = students[i];
                students[i] = students[j];
                students[j] = t;
            }
    printf("Sorted in descending order!\n");
}
