#include "PhoneBook.hpp"

int PhoneBook::empty_check(Contact cont)
{
    if (cont.get_firstname().empty() || cont.get_lastname().empty() || cont.get_nickname().empty()
        || cont.get_darksecret().empty() || cont.get_phonenumber().empty())
        return (0);
    return (1);
}
int PhoneBook::ft_isalpha_str(string c)
{
    int i=0;
    while(c[i])
    {
        if ((c[i] < 65 || c[i] > 90) && (c[i] < 97 || c[i] > 122))
            return (0);
            i++;
    }
	return (1);
}
int PhoneBook::ft_isdigit_str(string c)
{
    int i =0;
    while (c[i])
    {
        if (c[i] < 48 || c[i] > 57)
            return (0);
        i++;
    }
	return (1);
}
void PhoneBook::check_length(string &first,string &last, string &nick)
{
        if (first.length()>10)
        first=first.substr(0,9)+'.';
        if (last.length()>10)
        last=last.substr(0,9)+'.';
        if (nick.length()>10)
        nick=nick.substr(0,9)+'.';
}