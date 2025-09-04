#ifndef GENERALMEMBERSHIP_H
#define GENERALMEMBERSHIP_H

#include <string>
#include <iostream>

class GeneralMembership
{
protected:
    std::string id;
    std::string name;

public:
    GeneralMembership(std::string id = "", std::string name = "");

    void set_name(std::string name);
    std::string get_name() const { return name; }
    std::string get_id() const { return id; }

    virtual void display_membership(std::ostream& out) const;
    virtual void edit_membership(std::istream& in);

    virtual bool operator==(const GeneralMembership& other);
};

#endif
