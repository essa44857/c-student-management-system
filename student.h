#ifndef STUDENT_H
#define STUDENT_H

/* Student Management System: Structs and Function Declarations */

typedef struct {
    int id;
    char name[50];
    float salary;
} Student;

typedef struct {
    Student *students;
    int size;
    int capacity;
} StudentDatabase;

// 1. Initialization and Memory Cleanup
void init_db(StudentDatabase *db, int initial_capacity);
void free_db(StudentDatabase *db);

// 2. Addition and Display
void add_student(StudentDatabase *db, Student s);
void display_all(const StudentDatabase *db);

// 3. Linear Search
int search_by_id_linear(const StudentDatabase *db, int id);
int search_by_salary_linear(const StudentDatabase *db, float salary);

// 4. Sorting and Binary Search
void bubble_sort_by_id(StudentDatabase *db);
int binary_search_by_id(const StudentDatabase *db, int id);

// 5. Modification and Deletion (Using Index)
void modify_student(StudentDatabase *db, int index);
void delete_student(StudentDatabase *db, int index);

#endif
