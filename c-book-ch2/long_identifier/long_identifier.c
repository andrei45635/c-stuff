#include <stdio.h>

int main() {

    // AFAIK, identifier name limit would be 31
    // 31 DIFFERENT characters
    int super_long_identifier_name_can_this_compile = 1;
    
    int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa = 0;

    super_long_identifier_name_can_this_compile += super_long_identifier_name_can_this_compile;
  
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa += 1; 

    printf("super long identifier name %d\n", super_long_identifier_name_can_this_compile); 


    printf("super long identifier name with the same characters %d\n", aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa); 
    return 0;
}
