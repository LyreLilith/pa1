#ifndef PA1MAIN
#define PA1Main


/*
* @breif: Prints the menu for the matching  game
* @parameters: void
* @output: void
*/
void print_Menu();

/*
* @breif: initualizes the items of a csv to a link list of a specific format 
* @parameters: csv  file
* @output: void
*/ 
void  makeList(ifstream matches);

/*
* @breif:  makes a  new node and alots memory for it
* @parameters:	 string answeer
* @parameters:   string command
* @output: node* newNode
*/
void makeNode(string answer, string command);


