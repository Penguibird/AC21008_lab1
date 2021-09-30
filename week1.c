/*
 * STARTER CODE FOR WEEK 1
 *
 * PLEASE USE THINGS AS PROVIDED:
 * - DO NOT RENAME ANY OF THE FUNCTIONS BELOW
 * - DO NOT CHANGE THE RETURN TYPES OF THE FUNCTIONS BELOW
 * - DO NOT CHANGE THE NAMES OR DATA TYPES OF THE FUNCTION PARAMETERS
 * - DO NOT ADD OR REMOVE FUNCTION PARAMETERS
 * - DO NOT ADD ANY MORE FUNCTIONS TO THIS FILE
 * - DO NOT ADD A MAIN() FUNCTION TO THIS FILE
 *
 * WHAT YOU NEED TO DO:
 * Please complete the code for each of the functions below
 * according to the assessment specification. 
 */


/* ############
 * FUNCTION 1 - TEMPERATURE CONVERTOR
 *
 * This function will receive a temperature value in fahrenheit
 * as an input. It should calculate and return the equivalent
 * temperature in celsius OR a value of -1 in the event of
 * errors / invalid inputs. 
 *
 */
float convertTemperature(float fahrenheit)
{	
	return (fahrenheit - 32) * ((float) 5 / 9);
	// Add code here to convert the temperature
	// in fahrenheit to celsius and return the
	// result (or -1 in the event of errors or
	// invalid inputs)
	// 
	// NOTE: do NOT add any user input or output
	// statements into your code, e.g. such as
	// printf and scanf. You do not need these.
}

/*#############
 * FUNCTION 2 - TIMES TABLE
 *
 * This function will receive two input values:
 * - table: a times table to calculate, e.g. 3 for the 3 times table
 * - end: a limit for how far up the times table to go.
 *
 * What your function should do. 
 *
 * Your function should perform the times table up to the specified 
 * limit and, in doing so, should calculate the total of all values 
 * along the way.
 * 
 * For example, assume that a value of 3 has been entered to do
 * the three times table and a value of 4 has been specified for
 * how far up the table to go. In performing the times table, 
 * your code would be expected to do the 3 times tables from
 * 3 x 1 up to 3 x 4 as below:
 *  
 * 3 x 1 is 3
 * 3 x 2 is 6
 * 3 x 3 is 9
 * 3 x 4 is 12
 *
 * What your function is required to do is calculate the total
 * of all the values from each step in this times table. In this
 * case, the total would be 3 + 6 + 9 + 12. Once the total has
 * been calculated, your function should return it as a result.
 *
 * A value of -1 should be returned, in the event of any errors
 * being detected.
 *
 */
int totalFromTimesTable(int table, int end)
{
	// Add code here to go through the stages of
	// the times table calculation and adding up
	// the total of all values along the way.
	//
	// Return total value found (or -1 in the 
	// event of errors)
	// 
	// NOTE: do NOT add any user input or output
	// statements into your code, e.g. such as
	// printf and scanf. You do not need these.
	if (end < 0) {
		return -1;
	}
	int total = 0;
	for (int i = 1; i <= end; ++i)
    {
		total += (table * i);
    }
	return total;
}