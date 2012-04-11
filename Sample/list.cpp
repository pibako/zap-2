#include <iostream>
#include "list.h"

List* createList() {
  List *list = new List;
  list->head = NULL;
  return list;
}

void appendToList(List* list, double value) {
  Node *node = new Node;
  node->next = NULL;
  node->value = value;

  if (list->head == NULL) {
    list->head = node;
    return;
  }

  Node *tmpNode = list->head;
  while(tmpNode->next != NULL) {
    tmpNode = tmpNode->next;
  }
  
  /**
   * Teraz gdy pod tmpNode mam ostatni element listy moge dodac nowy wezel.
   */
  tmpNode->next = node;
}

bool removeLastFromList(List* list, double* value) {
  Node *tmpNode = list->head;
  Node *prevNode = list->head;
  if (tmpNode == NULL) {
    return false;
  }
  if (tmpNode->next == NULL) {
    *value = tmpNode->value;
    delete tmpNode;
    list->head = NULL;
    return true;
  }
  while(tmpNode->next != NULL) {
    prevNode = tmpNode;
    tmpNode = tmpNode->next;
  }
  *value = tmpNode->value;
  delete tmpNode;
  prevNode->next = NULL;
  return true;
}
