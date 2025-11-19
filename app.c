#include <stdio.h>
#include "term_utils.h"// TODO: Add the include directive for the custom library header file here

int main(void) {
    
    clear_screen();// TODO: Call the function from the library to clear the screen
    
    print_divider();// TODO: Call the function to print a divider line

    set_text_color(GREEN);// TODO: Set the text color to GREEN using the library function
    
    printf("System Status: ONLINE\n");

   set_text_color(RED); // TODO: Set the text color to RED using the library function
    
    printf("Alert: Modular compilation in progress...\n");

   reset_text_color(); // TODO: Reset the text color back to default
    
    print_divider();// TODO: Print one last divider line

    return 0;
}
