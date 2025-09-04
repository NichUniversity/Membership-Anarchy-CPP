#ifndef FACULTYMEMBERSHIP_H
#define FACULTYMEMBERSHIP_H

#include "GeneralMembership.h"
#include <string>
#include <iostream>

class FacultyMembership : public GeneralMembership
{
private:
    std::string fid;
    std::string title;

public:
    FacultyMembership(std::string id = "", std::string name = "", std::string fid = "", std::string title = "");

    void set_fid(std::string fid);
    void set_name(std::string name);
    void set_title(std::string title);

    std::string get_fid() const { return fid; }
    std::string get_title() const { return title; }

    void display_membership(std::ostream& out) const override;
    void edit_membership(std::istream& in) override;

    bool operator==(const FacultyMembership& other);
};

#endif
