#include<stdio.h>
#include<string.h>


struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address adds);

int main () {
    struct address adds[5]; // Array of structures
    // input
    printf("Enter info for person 1:\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

     printf("Enter info for person 2:\n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

     printf("Enter info for person 3:\n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

     printf("Enter info for person 4:\n");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

     printf("Enter info for person 5:\n");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);

}

void printAddress(struct address adds){
    printf("Address is :%d,  Block :%d, City :%s, State :%s\n", adds.houseNo , adds.block , adds.city , adds.state);
}