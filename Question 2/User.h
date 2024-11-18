//
// Created by Jacques Martinez on 2024-11-16.
//

#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Post.h"
using namespace std;


class User {
    int userID;
    string username;
    vector<Post> posts;

public:
    User();
    // Getters
    string getUsername() const;

    // Setters
    void setUsername(const string& name);

    void createPost();
    void listPosts() const;

};



#endif //USER_H
