//
//  List_Type_Template.cpp
//  C++_Practice
//
//  Created by Brandon Johns on 8/3/22.
//

#include "Array_List_Type_Template.hpp"
#include <iostream>

using namespace std;
template<class Array_Type>
bool Array_List_Type<Array_Type>::  is_Empty() const
{
    return (length ==0);
}


template<class Array_Type>
bool Array_List_Type<Array_Type>::  is_Full() const
{
    return (length == max_Size);
}

template<class Array_Type>
void Array_List_Type<Array_Type>:: search_list(const Array_Type& item, bool & found)
{
    
}

template<class Array_Type>
void Array_List_Type<Array_Type>:: insert_list(const Array_Type& new_item)
{
    
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  remove(const Array_Type& remove_item)
{
    
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  destory_list()
{
    
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  print_list()
{
    for (int i =0; i< length; i++)
    {
        return list[i]<< " "<< endl;
    }
}

template<class Array_Type>
Array_List_Type<Array_Type>::  Array_List_Type()
{
    
}

template<class Array_Type>
int Array_List_Type<Array_Type>::  list_Size()
{
    return length;
}

template<class Array_Type>
int Array_List_Type<Array_Type>::  max_list_Size()
{
    return max_Size;
}

template<class Array_Type>
bool Array_List_Type<Array_Type>::  is_Item_Equal(int location, const Array_Type& item) const
{
    return (list[location] == item);
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  insert_At(int location, Array_Type& insert_item)
{
    if(location<0 || location >= max_Size)
    {
        cerr<<"item location is out of range"<<endl;
    }
    else
    {
        if(length >= max_Size)
        {
            cerr<<"list is full with "<< max_Size<< " items"<<endl;
        }
        else
        {
            for (int i = length; i> location; i--)
            {
                list[i] = list[i-1];
                list[location] = insert_item;
                
                length++;
            }
        }
    }
}

template<class Array_Type>
void Array_List_Type<Array_Type>::   insert_End(const Array_Type& insert_Item)
{
    if(length<= max_Size)
        cerr<<"list is full with "<< max_Size<< " items"<<endl;
    else
    {
        list[length] = insert_Item;
        length++;
    }
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  remove_At(int location)
{
    if(location <0 || location >= length)
        cerr<<"item is out of range and cannot be deleted"<<endl;
    else{
        for (int i =  location; i< length -1; i++)
        {
            list[i] = list[i+1];
        }
        length --;
    }
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  retrieve_At(int location, Array_Type& retrieve_Item)
{
    if(location <0 || location >= length)
        cerr<<"location is out of range"<<endl;
    else
        retrieve_Item = list[location];
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  replace_At(int location, const Array_Type& replace_Item)
{
    if(location <0 || location >= length)
        cerr<<"location is out of range"<<endl;
    else
        replace_Item = list[location];
}
template<class Array_Type>
void Array_List_Type<Array_Type>::  clear_List()
{
    
}

template<class Array_Type>
int Array_List_Type<Array_Type>::  sequential_Search(const Array_Type& item)
{
    length =0;
}

template<class Array_Type>
void Array_List_Type<Array_Type>::  insert(const Array_Type& insert_Item)
{
    
}

template<class Array_Type>
Array_List_Type<Array_Type>::  Array_List_Type(int size)
{
    if(size <0)
    {
     cerr<<":array must be a positive number. Creating default array of size 100 "<<endl;
        max_Size = 100;
    }
    else
        max_Size = size;
    
    length=0;
    
    list = new Array_Type[max_Size];
    assert(list!= NULL);
}

template<class Array_Type>
Array_List_Type<Array_Type>::  Array_List_Type(const Array_List_Type<Array_Type> & other_list)
{
    max_Size= other_list.max_Size;
    length = other_list.length;
    list = new Array_Type[max_Size];
    assert(list != NULL);
    
    for(int j = 0; j<length; j++)
    {
        list[j] = other_list.list[j];
    }
}

template<class Array_Type>
Array_List_Type<Array_Type>:: ~Array_List_Type()
{
    delete [] list;
}

template<class Array_Type>
const Array_List_Type<Array_Type> & Array_List_Type<Array_Type>:: operator = (const Array_List_Type<Array_Type> & other_list)
{
    if(this!= &other_list)
    {
        delete [] list;
        max_Size= other_list.max_Size;
        length = other_list.length;
        list = new Array_Type[max_Size];
        assert(list!= NULL);
        for(int i = 0; i<length; i++)
        {
            list [i] = other_list.list[i];
        }
    }
    return *this;
}
