//
// Created by Jacques Martinez on 2024-11-16.
//

#include "User.h"
#include "Post.h"

string User::getUsername() const {
    return username;
}

void User::setUsername(const string &name) {
    username = name;
}

void User::createPost() {

}

void User::listPosts() const {
    for (const Post& post : posts) {
        cout << post.
    }
}


