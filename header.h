//
// Created by User on 30/01/2020.
//

#ifndef SIMPLE_SHELL_HEADER_H
#define SIMPLE_SHELL_HEADER_H

#endif //SIMPLE_SHELL_HEADER_H

void reader(char *pathString);
void executeCommand(char *tokens[]);
void getpath(char *tokens[]);
void setpath(char *tokens[]);
void cd(char *theHome, char *tokens[]);
typedef char* String;

void aliasCom(String name, String command);
void removeAlias(String alias);
int getAliasPosition(String x);
String findAlias(int x);
void listAliases();
String getCommand(String key);

struct aliases{
    String name;
    String command[50];
};