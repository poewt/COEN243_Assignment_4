//
// Created by Jacques Martinez on 2024-11-16.
//

#ifndef SOCIALMEDIAPLATFORM_H
#define SOCIALMEDIAPLATFORM_H

#include "User.h"
#include <vector>
using namespace std;

class SocialMediaPlatform {
    vector<User> users;

public:
    SocialMediaPlatform();
    void registerUser(const string& username, const string& bio);

    void removeUser(const string& userID);

    int* findUserByUsername(const string& username) const;

    void createPostForUser();

    void likePost();

    void commentOnPost();

    void viewUserProfile() const;
};



#endif //SOCIALMEDIAPLATFORM_H
