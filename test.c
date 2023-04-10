#include <stdio.h>
#include <cs50.h>





int main() {
    float req = get_float("enter your price?");
    int dis = get_int("enter discount?");
    float discount = req * (100 - dis)/100;
    printf("your discount price: %.1f \n", discount);
}