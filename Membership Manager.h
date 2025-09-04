#ifndef MEMBERSHIPMANAGER_H
#define MEMBERSHIPMANAGER_H

#include <fstream>
#include <vector>
#include "GeneralMembership.h"

class MembershipManager
{
private:
    std::string filename;
    std::vector<GeneralMembership*> list;

    void load_info_from_file();
    void write_list_to_file();

public:
    MembershipManager(std::string filename);
    ~MembershipManager();

    void show_all_memberships() const;
    void add_member();
    void delete_member(int membership_num);
};

std::ostream& operator<<(std::ostream& out, const GeneralMembership& p);
std::istream& operator>>(std::istream& in, GeneralMembership*& p);

#endif
