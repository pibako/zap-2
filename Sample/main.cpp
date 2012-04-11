#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List* myList = createList();
    
    for (int i = 0; i < 10; ++i) {
      appendToList(myList, i);	
    }

    bool flag = false;
    double value;
    do {
      flag = removeLastFromList(myList, &value);
      if (flag) {
	std::cout << value << endl;
      }
    } while (flag);

    return 0;
}
