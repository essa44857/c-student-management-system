#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

// Initialization and Memory Cleanup
void init_db(StudentDatabase *db, int initial_capacity) {
    db->students = (Student *)malloc(initial_capacity * sizeof(Student));
    db->size = 0;
    db->capacity = initial_capacity;
}

void free_db(StudentDatabase *db) {
    free(db->students);
    db->students = NULL;
    db->size = 0;
    db->capacity = 0;
}


void add_student(StudentDatabase *db, Student s) {
    if (db->size == db->capacity) {
        db->capacity *= 2;
        db->students = (Student *)realloc(db->students, db->capacity * sizeof(Student));
    }
    db->students[db->size] = s;
    db->size++;
}

void display_all(const StudentDatabase *db) {
    if (db->size == 0) {
        printf("No records found.\n");
        return;
    }
    for (int i = 0; i < db->size; i++) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", 
               db->students[i].id, db->students[i].name, db->students[i].salary);
    }
}


int search_by_id_linear(const StudentDatabase *db, int id) {
    for (int i = 0; i < db->size; i++) {
        if (db->students[i].id == id) return i; // Returns index 📍
    }
    return -1; // Not found 
}

int search_by_salary_linear(const StudentDatabase *db, float salary) {
    for (int i = 0; i < db->size; i++) {
        if (db->students[i].salary == salary) return i;
    }
    return -1;
}


void bubble_sort_by_id(StudentDatabase *db) {
    for (int i = 0; i < db->size - 1; i++) {
        for (int j = 0; j < db->size - i - 1; j++) {
            if (db->students[j].id > db->students[j + 1].id) {
                Student temp = db->students[j];
                db->students[j] = db->students[j + 1];
                db->students[j + 1] = temp;
            }
        }
    }
}

int binary_search_by_id(const StudentDatabase *db, int id) {
    int low = 0, high = db->size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (db->students[mid].id == id) return mid;
        if (db->students[mid].id < id) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


void modify_student(StudentDatabase *db, int index) {
    if (index < 0 || index >= db->size) return;
    printf("Enter new Name: ");
    scanf("%s", db->students[index].name);
    printf("Enter new Salary: ");
    scanf("%f", &db->students[index].salary);
}

void delete_student(StudentDatabase *db, int index) {
    if (index < 0 || index >= db->size) return;
    for (int i = index; i < db->size - 1; i++) {
        db->students[i] = db->students[i + 1];
    }
    db->size--;
}
