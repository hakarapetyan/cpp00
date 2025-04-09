#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void search();
    int ft_isalpha_str(string c);
    int ft_isdigit_str(string c);
    int empty_check(Contact cont);
    void print_fields();
    void contact_print(int index);
    string get_input(string str);
    void check_length(string &first,string &last, string &nick);

    private:
    Contact contacts[8];
    int index;
};
#endif