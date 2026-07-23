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


void init_db(StudentDatabase *db, int initial_capacity);
void free_db(StudentDatabase *db);


void add_student(StudentDatabase *db, Student s);
void display_all(const StudentDatabase *db);


int search_by_id_linear(const StudentDatabase *db, int id);
int search_by_salary_linear(const StudentDatabase *db, float salary);

// 4. 
void bubble_sort_by_id(StudentDatabase *db);
int binary_search_by_id(const StudentDatabase *db, int id);


void modify_student(StudentDatabase *db, int index);
void delete_student(StudentDatabase *db, int index);

#endif
