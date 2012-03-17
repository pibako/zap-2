#ifndef _LIST_H_
#define _LIST_H_

/**
 * Lista jednokierunkowa; head wskazuje na pierwszy element listy
 */
struct Node {
    double value;
    Node* next;
};

/**
 * ...
 */
struct List {
    Node* head; /* pierwszy element listy*/
};

/**
 * Funkcja tworzy pusta liste
 */
List* createList();

/**
 * ...
 */
void appendToList(List* list, double d);

#endif _LIST_H_


