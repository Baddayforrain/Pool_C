#include <unistd.h>
void print_alphabet(void){
    char ltr;

    for(ltr = 'a'; ltr <= 'z'; ltr++)
    {
        write(1, &ltr, 1);
    }
   
}
int main(void){
    print_alphabet();
    return 0;
}