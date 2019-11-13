	/** $Revision: 1.1 $
	* @date: 11/11/19
	* @file school_system_v1.c
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

#include <stdio.h> /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <stdlib.h>  /* Standard library, memory allocation */

#include "school_system_v1.h" /* Function and constance definitions */

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'loadDat()'
 *
 * @brief At the beginning of the program, load the data which are stored 
 * locally into an array for manipulation during the execution of the program.
 *
 * @param None.
 *
 * @note - The data is stored in an array during execution of the program.
 * - A suitable data structure can be a file. After closing the program, the
 * elements of the array will be saved in that file.
 *
 * @author 
 *
 * @return None.
 */
 void loadDat()
 {
 
 }
 
 //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'saveDat()'
 *
 * @brief Store all the data present of an array in a local file.
 *
 * @param None.
 *
 * @note - The data is stored in an array during execution of the program.
 * - A suitable data structure can be a file. After closing the program, the
 * elements of the array will be saved in that file.
 *
 * @author 
 *
 * @return None.
 */
 void saveDat()
 {
 
 }

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'menu()'
 *
 * @brief Show all implemented functions with call option to interact with 
 * the user.
 *
 * @param None.
 *
 * @note Only relevant functions are shown.
 *
 * @author 
 *
 * @return None
 */
void menu()
{

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'recordDat(data)'
 *
 * @brief Function to collect input data from the user and create the corresponding structur (student or teacher).
 *
 * @param data String variable to save a set of parameters which characterise a
 * student or teacher.
 *
 * @note data should have following form:\n
 *	data=status::identifier::name::l_class::grade_note::salary_fee \n
 * 	- The field grade_note becomme just grade for teacher and note for student.\n
 *	- The field salary_fee becomme just salary for teacher and fee for student.
 *
 * @author 
 *
 * @return None: Call by reference (The return value is saved in the parameter).
 */
void recordDat(char *data)
{

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'checkDat(date)'
 *
 * @brief 
 *
 * @param data String variable to save a set of parameters which characterise a
 * student or teacher.
 *
 * @note data should have following form:\n
 *	data=status::identifier::name::l_class::grade_note::salary_fee \n
 * 	- The field grade_note becomme just grade for teacher and note for student.\n
 *	- The field salary_fee becomme just salary for teacher and fee for student.
 *
 * @author 
 *
 * @return A character ('S', 'T' or 'E') which indicates the type of data giving
 * by the user:\n
 *	- 'S': for student,\n
 *	- 'T': for teacher,\n
 *	- 'E': For error; either student or teacher. 
 */
char checkDat(char *data)
{ 

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'addDat(data)'
 *
 * @brief 
 *
 * @param data String variable to save a set of parameters which characterise a
 * student or teacher.
 *
 * @note data should have following form:\n
 *	data=status::identifier::name::l_class::grade_note::salary_fee \n
 * 	- The field grade_note becomme just grade for teacher and note for student.\n
 *	- The field salary_fee becomme just salary for teacher and fee for student.
 *
 * @author 
 *
 * @return 
 */
int addDat(char *data)
{

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'searchDat(identifier)'
 *
 * @brief 
 *
 * @param 
 *
 * @note 
 *
 * @author 
 *
 * @return 
 */
int searchDat(int identifier)
{

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'modifyDat(identifier)'
 *
 * @brief 
 *
 * @param 
 *
 * @note 
 *
 * @author 
 *
 * @return 
 */
int modifyDat(int identifier)
{

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'deleteDat(identifier)'
 *
 * @brief 
 *
 * @param 
 *
 * @note 
 *
 * @author 
 *
 * @return 
 */
int deleteDat(int identifier)
{

}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/** 
 * Function call - 'exit()'
 *
 * @brief Save the data locally in a suitable data structure and exit the program.
 *
 * @param None.
 *
 * @note - The data is stored in an array during execution of the program.
 * - A suitable data structure can be a file. After closing the program, the
 * elements of the array will be saved in that file.
 *
 * @author 
 *
 * @return None.
 */
void exit()
{

}
