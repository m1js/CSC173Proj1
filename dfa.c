#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//#include "dfa.h"
#include "LinkedList.h"

//typedef struct DFA *DFA;


typedef struct DFA {
    int nStates;
    int** transitions;
    //LinkedList acceptingStates;
   
} DFA;
DFA new_DFA(int nstates){

    struct DFA d;
    d.nStates = nstates;
    //d.acceptingStates = new_LinkedList();

    return d;
};

int DFA_get_size(DFA dfa){
   
    return dfa.nStates;
};
int* fillTransitionTable(DFA dfa){
    //TODO: this is taken from GeeksForGeeks
    int r=dfa.nStates, c=128, len=0;
    int *ptr, **arr;
    int i, j;
 
    len = sizeof(int *) * r + sizeof(int) * c * r;
    arr = (int **)malloc(len);
 
    // ptr is now pointing to the first element in of 2D array
    ptr = (int *)(arr + r);
   
    
    // for loop to point rows pointer to appropriate location in 2D array
    for(i = 0; i < r; i++)
        arr[i] = (ptr + c * i);
 
    

dfa.transitions = arr;
    // for (i = 0; i < r; i++)
    //     for (j = 0; j < c; j++)
    //         printf("%d ", arr[i][j]);
 
    return ptr;
}
// int DFA_get_transition(DFA dfa, int src, char sym){

// };

// void DFA_set_transition_str(DFA dfa, int src, char *str, int dst){

// };

// void DFA_set_transition_all(DFA dfa, int src, int dst){

// };

// void DFA_set_accepting(DFA dfa, int state, bool value){
//     if(value){
//   LinkedList_add_at_end(dfa->acceptingStates, state);
//     }
//   else if(LinkedList_contains(dfa->acceptingStates, state)){
//     LinkedList_remove(dfa->acceptingStates, state);
//   }
   
// };

// bool DFA_get_accepting(DFA dfa, int state){
//     return (LinkedList_contains(dfa->acceptingStates, state));
// };

// bool DFA_execute(DFA dfa, char *input){

// };

// void DFA_print(DFA dfa){

// };
void DFA_set_transition(DFA dfa, int src, char sym, int dst){
    
    // int row[dfa.nStates];
    int col = (int)sym;
    // //printf("%d%n", col);
    // row[col] = dst;

    
    // dfa.transitions[src] = (int**)*row;
    // int** rowCheck = dfa.transitions[src];

    // printf("%p\n", dfa.transitions[1]);

    //  for(int j = 0; j<dfa.nStates; j++){
    //      printf("%p\n", dfa.transitions[1]+j);
    //  }

    //dfa.transitions[col][src] = dst;

    dfa.transitions[col][src] = dst;




};


int main(int argc, char *argv[]) {
    DFA d = new_DFA(10);
    int* ptr = fillTransitionTable(d);
    //DFA_set_transition(d, 1, 'x', 2);

    
 
    

    for (int i = 0; i < d.nStates; i++)
        for (int j = 0; j < 128; j++){
            printf("%d ", *(*(d.transitions+i)+j));
        }

    
}