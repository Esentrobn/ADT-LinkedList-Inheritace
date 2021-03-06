

#ifndef _FRONT_LIST_IS_A
#define _FRONT_LIST_IS_A

#include "LinkedList.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"

template<class ItemType>
class FrontListIsA : public LinkedList<ItemType>
{
public:
   FrontListIsA();
   FrontListIsA(const FrontListIsA<ItemType>& fList);
   virtual ~FrontListIsA();

   void insertFront(const ItemType& newEntry);
   bool removeFront();
   
   // The inherited methods remove, clear, getEntry, isEmpty, and
   // getLength have the same specifications as given in ListInterface.
/*
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const throw(PrecondViolatedExcep);
   bool isEmpty() const;
   int getLength() const;
*/
   // The following methods must be overridden to disable their
   // effect on a sorted list:
   bool insert(int newPosition, const ItemType& newEntry);
   void setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep);
}; // end SortedListIsA

#include "FrontListIsA.cpp"
#endif 
