#include <stdio.h>
#include <stdlib.h>
#include "student.h"

// 🎨 Header Menu Functions
void print_menu() {
    printf("\n========================================\n");
    printf("   🎓 STUDENT MANAGEMENT SYSTEM 🎓   \n");
    printf("========================================\n");
    printf("1. ➕ Add New Student\n");
    printf("2. 📋 Display All Students\n");
    printf("3. 🔍 Search Student\n");
    printf("4. ⚡ Sort Students by ID\n");
    printf("5. 🛠️  Modify Student Record\n");
    printf("6. 🗑️  Delete Student Record\n");
    printf("0. 🚪 Exit Program\n");
    printf("========================================\n");
    printf("Choose an option: ");
}

void print_search_menu() {
    printf("\n--- 🔍 Search Sub-Menu ---\n");
    printf("1. Linear Search by ID\n");
    printf("2. Linear Search by Salary\n");
    printf("3. Binary Search by ID (Requires Sorted DB)\n");
    printf("Choose search type: ");
}

int main() {
    StudentDatabase db;
    init_db(&db, 5); //  1. Initialize memory with capacity of 5

    int choice, search_choice;
    Student s;
    int id, index;
    float salary;

    // 2. Interactive Loop
    do {
        print_menu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Exiting...\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\n--- Add Student ---\n");
                printf("Enter Student ID: ");
                scanf("%d", &s.id);
                printf("Enter Student Name: ");
                scanf("%s", s.name);
                printf("Enter Student Salary: ");
                scanf("%f", &s.salary);
                add_student(&db, s);
                printf(" Student added successfully!\n");
                break;

            case 2:
                printf("\n---  Displaying All Students ---\n");
                display_all(&db);
                break;

            case 3:
                print_search_menu();
                scanf("%d", &search_choice);
                
                // Nested Switch for Search Options
                switch (search_choice) {
                    case 1:
                        printf("Enter ID to search: ");
                        scanf("%d", &id);
                        index = search_by_id_linear(&db, id);
                        break;
                    case 2:
                        printf("Enter Salary to search: ");
                        scanf("%f", &salary);
                        index = search_by_salary_linear(&db, salary);
                        break;
                    case 3:
                        printf("Enter ID for Binary Search: ");
                        scanf("%d", &id);
                        index = binary_search_by_id(&db, id);
                        break;
                    default:
                        printf("❌ Invalid search option!\n");
                        index = -1;
                        break;
                }
                
                if (index != -1) {
                    printf(" Student Found at Index %d:\n", index);
                    printf("ID: %d | Name: %s | Salary: %.2f\n", 
                           db.students[index].id, db.students[index].name, db.students[index].salary);
                } else if (search_choice >= 1 && search_choice <= 3) {
                    printf("❌ Student Not Found!\n");
                }
                break;

            case 4:
                bubble_sort_by_id(&db);
                printf(" Database sorted successfully by ID!\n");
                break;

            case 5:
                printf("\nEnter Student ID to Modify: ");
                scanf("%d", &id);
                index = search_by_id_linear(&db, id);
                if (index != -1) {
                    modify_student(&db, index);
                    printf("✅ Record updated successfully!\n");
                } else {
                    printf("❌ Student ID not found!\n");
                }
                break;

            case 6:
                printf("\nEnter Student ID to Delete: ");
                scanf("%d", &id);
                index = search_by_id_linear(&db, id);
                if (index != -1) {
                    delete_student(&db, index);
                    printf(" Student deleted successfully!\n");
                } else {
                    printf("❌ Student ID not found!\n");
                }
                break;

            case 0:
                printf(" Exiting system and cleaning memory...\n");
                break;

            default:
                printf("❌ Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    // 3. Memory Cleanup
    free_db(&db);
    return 0;
}
