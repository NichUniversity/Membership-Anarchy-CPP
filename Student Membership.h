#ifndef STUDENTMEMBERSHIP_H
#define STUDENTMEMBERSHIP_H

#include "GeneralMembership.h"
#include <string>
#include <iostream>

class StudentMembership : public GeneralMembership
{
private:
    std::string sid;
    std::string major;

public:
    StudentMembership(std::string id = "", std::string name = "", std::string sid = "", std::string major = "");

    void set_name(std::string name);
    void set_major(std::string major);

    std::string get_sid() const { return sid; }
    std::string get_major() const { return major; }

    void display_membership(std::ostream& out) const override;
    void edit_membership(std::istream& in) override;

    bool operator==(const StudentMembership& other);
};

#endif
