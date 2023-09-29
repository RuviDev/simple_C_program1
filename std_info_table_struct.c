#include <stdio.h>
#include <string.h>

// Define a struct to store student information
struct Student {
    char name[50];
    int age;
    float gpa;
    char faculty[50];
};

int main() {
	
	// Declare variables
	int i, nostd;
	
	// Get the Nuumber of Students
	printf("Enter the number of students: ");
	scanf("%d", &nostd);
	
    // Create an array of 50 students
    struct Student students[50];

    // Input student information
    for (i = 0; i < nostd; i++) {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter the GPA of student %d: ", i + 1);
        scanf("%f", &students[i].gpa);
        printf("Enter the faculty of student %d: ", i + 1);
        scanf("%s", students[i].faculty);
    }

    // Print the table header
    printf("_______________________________________________________________\n");
    printf("|       Name         |   Age   |   GPA   |       Faculty      |\n");
    printf("|--------------------|---------|---------|--------------------|\n");

    // Print student information in a formatted table
    for (i = 0; i < nostd; i++) {
        printf("|%*s%s%*s|%*d|%*.2f|%*s%s%*s|\n",
        	// first column
            (20 - strlen(students[i].name)) / 2, "", students[i].name,
            20 - (20 - strlen(students[i].name)) / 2 - strlen(students[i].name), "",
            // second column
            9, students[i].age,
            // third column
            9, students[i].gpa,
            // fourth column
            (20 - strlen(students[i].faculty)) / 2, "", students[i].faculty,
            20 - (20 - strlen(students[i].faculty)) / 2 - strlen(students[i].faculty), "");
    }

    return 0;
}

