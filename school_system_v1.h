	/** $Revision: 1.1 $
	* @date: 11/11/19
	* @file school_system_v1.h
	*
	* @brief Comming soon
	*
	* The first version of this project is a console application without graphic.
	*
	* @note
	* - This mini project in C school billing system was originally 
	* developed by <a>www.codewithc.com</a>
	*
	* https://www.codewithc.com/mini-project-in-c-school-billing-system/ 
	* - 
	*
********************************************************************************/

#ifndef SCHOOL_SYSTEM_V1_H
#define SCHOOL_SYSTEM_V1_H

#define ERROR -1 /** Something goes wrong, shoudn't happen */
#define FAILED 0
#define SUCCESS 1

#define DATA_SIZE 4096 // Maximum number of data (Student and teacher)

#define PATH "data_base_school_system.txt" // File name to save the data locally.

/**
* @struct
*/
typedef struct
{
	int identifier;
	char* name;
	char* l_class;
	float note;
	double fee;
} STUDENT;

/**
* @struct
*/
typedef struct
{
	int identifier;
	char* name;
	char* l_class;
	char grad;
	double salary;
} TEACHER;

/**
* @brief 
*/
struct student_set
{
	int nbr_of_student;
	STUDENT std_list[DATA_SIZE];
};

/**
* @brief 
*/
struct teacher_set
{
	int nbr_of_teacher;
	TEACHER tea_list[DATA_SIZE];
};

struct student_set all_student; // Global variable to store all students.
struct teacher_set all_teacher; // Global variable to store all teachers.

/* */
void loadDat();

/* */
void saveDat();

/* */
void menu();

/* */
void recordDat(char *data);

/* */
char checkDat(char *data)

/* */
int addDat(char *data)

/* */
int searchDat(int identifier)

/* */
int modifyDat(int identifier)

/* */
int deleteDat(int identifier)

/* */
void exit();

#endif // !SCHOOL_SYSTEM_V1_H
