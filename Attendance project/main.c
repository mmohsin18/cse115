#include <stdio.h>
#include <string.h>

struct attendance {
    char name[50];
    int roll;
    int class_count;
    int present;
} s[20];

int class_count = 0;
int num_students = 0;

int menu();
int addstudents();
int viewstudents();
int search_student();
int take_attendance();
int deletestudent();

int main() {
    int choice;
    do {
        choice = menu();
        switch (choice) {
            case 1:
                addstudents();
                printf("Students added\n");
                break;
            case 2:
                viewstudents();
                break;
            case 3:
                take_attendance();
                break;
            case 4:
                search_student();
                break;
            case 5:
                deletestudent();
                break;
            case 0:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 0);
    return 0;
}

int menu() {
    printf("\tStudent Attendance\n");
    int c;
    printf("\n1. Add student\n2. View students\n3. Take attendance\n4. Search student\n5. Delete student\n0. Exit\n");
    printf("\nWhat do you want to do? ");
    scanf("%d", &c);
    getchar();
    if (c >= 0 && c <= 5) {
        return c;
    } else {
        printf("Invalid choice\n");
        return -1;
    }
}

int addstudents() {
    int students_added = 0;
    if (num_students < 20) {
        printf("\nEnter Student Details:\n");
        while (num_students < 20) {
            printf("Name: ");
            fgets(s[num_students].name, sizeof(s[num_students].name), stdin);

            s[num_students].name[strcspn(s[num_students].name, "\n")] = 0;
            printf("Roll number: ");
            scanf("%d", &s[num_students].roll);
            getchar();
            s[num_students].class_count = class_count;
            s[num_students].present = 0;
            printf("Student added successfully\n");
            num_students++;
            students_added++;
            printf("Add another student? (yes=1 / no=0): ");
            int add_more;
            scanf("%d", &add_more);
            getchar();
            if (add_more == 0) break;
        }
    } else {
        printf("Cannot add more students. Maximum limit reached\n");
    }
    return students_added;
}

int viewstudents() {
    if (num_students == 0) {
        printf("No students added yet.\n");
        return 0;
    }
    printf("\nList of Students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Class Count: %d\n", s[i].class_count);
        printf("Present Count: %d\n", s[i].present);
    }
    return 1;
}

int search_student() {
    int search_roll;
    printf("Enter the roll number of the student to search: ");
    scanf("%d", &search_roll);
    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (s[i].roll == search_roll) {
            found = 1;
            printf("\nStudent found:\n");
            printf("Name: %s\n", s[i].name);
            printf("Roll Number: %d\n", s[i].roll);
            printf("Class Count: %d\n", s[i].class_count);
            printf("Present Count: %d\n", s[i].present);
            break;
        }
    }
    if (!found) {
        printf("Student with roll number %d is not found.\n", search_roll);
    }
    return found;
}

int take_attendance() {
    class_count++;
    printf("Attendance for Class %d:\n", class_count);
    printf("---------------------------------------------------------------------------\n");
    printf("| %-20s | %-10s| %-10s | %-10s| %-10s |\n", "Name", "Roll", "Class Count", "Present", "Attendance");
    printf("---------------------------------------------------------------------------\n");
    for (int i = 0; i < num_students; i++) {
        printf("| %-20s | %-10d | %-12d | %-10d |", s[i].name, s[i].roll, s[i].class_count, s[i].present);
        int attendance;
        printf("\nEnter attendance (1 for present, 0 for absent): ");
        scanf("%d", &attendance);
        if (attendance == 1) {
            s[i].present++;
        }
        s[i].class_count++;
        printf("\n");
    }
    return 0;
}

int deletestudent() {
    printf("Enter the student number to delete: ");
    int index;
    scanf("%d", &index);
    index--; // Convert 1-based index to 0-based
    if (index < 0 || index >= num_students) {
        printf("Invalid\n");
        return 0;
    }
    for (int i = index; i < num_students - 1; i++) {
        s[i] = s[i + 1];
    }
    num_students--;
    printf("Student at index %d deleted.\n", index + 1); // Display the 1-based index
    return 1;
}
