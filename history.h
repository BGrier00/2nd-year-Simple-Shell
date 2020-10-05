//
// Created by lpb18137 on 27/02/2020.
//

#ifndef SIMPLE_SHELL_HISTORY_H
#define SIMPLE_SHELL_HISTORY_H

#endif //SIMPLE_SHELL_HISTORY_H

char **addToHistory(char **history, char input[], int historyCount, int capacity);

void printHistory(char** history1, int historyCount);

char* historyAt(char** history1, char input[50], int historyCount);

int updateHistoryCount(int count, int capacity);