//
// Created by lpb18137 on 27/02/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "history.h"
/*
 * adds the input to the history
*/
char **addToHistory(char **history, char input[], int historyCount, int capacity) {
    if (historyCount == capacity) {
        for (int i = 1; i < capacity; i++) {
            strcpy(history[i - 1],history[i]);
        }
        strcpy(history[historyCount-1],input);
        return history;
    }else {
        history[historyCount] = (char*)malloc(512);
        strcpy(history[historyCount], input);
        return history;
    }
}

/*
 * prints all the history when prompted from the reader
 */
void printHistory(char** history1, int historyCount){
    for (int i = 0; i < historyCount; i++){
        printf("%d %s", i, history1[i]);
    }
}

/*
 * returns the history at a given !index or at the most recent one when given !!
 */
char* historyAt(char** history1, char* input, int historyCount){
    if ((strcmp(input, "!!\n")==0)&&(historyCount>0)){
        return history1[historyCount - 1];
    }

    char* inputChopped = input + 1;
    if (strcspn(inputChopped, "-")==0){
        inputChopped = inputChopped + 1;
    }

    int historyIndex = atoi(inputChopped);
    if (historyIndex >= historyCount){
        printf("That index is out of the range of the history. Here is the current history\n");
        return "history";
    }else{
        return history1[historyIndex];
    }
}

/*
 * updates historyCount depending on whether the history is full
 * */
int updateHistoryCount(int count, int capacity){
    if (count == capacity){
        return capacity;
    }
    return ++count;
}