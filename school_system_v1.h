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

/**
* @struct
*/
struct student
{
	int identifier;
	char* name;
	char* l_class;
	float note;
	double fee;
};

/**
* @struct
*/
struct teacher
{
	int identifier;
	char* name;
	char* l_class;
	char grad;
	double salary;
};

/* */
void menu();

/* */
void recordDat();

/* */
void checkDat();

/* */
void addDat();

/* */
void searchDat();

/* */
void modifyDat();

/* */
void deleteDat();

/* */
void exit();

#endif // !SCHOOL_SYSTEM_V1_H
