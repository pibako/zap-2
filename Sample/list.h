#ifndef _LIST_H_
#define _LIST_H_

/**
 * Struktura wewnetrzna @Node, wygodna przy implementacji (niewidoczna
 * przy korzystaniu z listy)
 */
struct Node {
    double value;
    Node* next;
};

/**
 * Struktura reprezetujaca liste jednokierunkowa; @head wskazuje na
 * pierwszy element listy 
 */
struct List {
    Node* head; /* pierwszy element listy*/
};

/**
 * Funkcja tworzy pusta liste i zwraca wskaznik do struktury @List
 */
List* createList();

/**
 * Funkcja dodaje na koncu listy @list element @d
 */
void appendToList(List* list, double d);

/**
 * Funkcja przekazuje wartosc ostatniego elementu z listy poprzez
 * @value  a nastepnie usuwa go z listy @list
 */
bool removeLastFromList(List* list, double* value);

/**
 * Powyzsze funkcje to bardzo proste przyklady. Przy tworzeniu wlasnych
 * nalezy zastanowic sie co jest nam potrzebne, np:
 * - usuwanie wszystkich elementow listy przy pomocy jednej funkcji
 * - dodawanie elementu na poczatku listy
 * - dodawanie elementu na n-tym miejscu listy
 * - sortowanie listy
 * - usuwanie n-tego elementu listy
 * - usuwanie elementow wiekszych niz
 * ...
 */ 

#endif _LIST_H_


