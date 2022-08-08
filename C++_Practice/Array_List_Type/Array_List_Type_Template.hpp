//
//  List_Type_Template.hpp
//  C++_Practice
//
//  Created by Brandon Johns on 8/3/22.
//



#include <stdio.h>

template <class Array_Type>
class Array_List_Type{
public:
    bool is_Empty() const;
    bool is_Full() const;
    void insert_list(const Array_Type& new_item);
    void remove(const Array_Type& remove_item);
    void print_list();
    Array_List_Type();
    int list_Size();
    int max_list_Size();
    bool is_Item_Equal(int location, const Array_Type& item) const;
    void insert_At(int location, Array_Type& insert_item);
    void insert_End(const Array_Type& insert_Item);
    void remove_At(int location);
    void retrieve_At(int location, Array_Type& retrieve_Item);
    void replace_At(int location, const Array_Type& replace_Item);
    void clear_List();
    int sequential_Search(const Array_Type& item);
    void insert(const Array_Type& insert_Item);
    Array_List_Type(int size =100);
    Array_List_Type(const Array_List_Type<Array_Type> & other_list);
    ~Array_List_Type();
    const Array_List_Type<Array_Type> & operator = (const Array_List_Type<Array_Type> & other_list);
protected:
    Array_Type * list;
    int length;
    int max_Size;
  
};
