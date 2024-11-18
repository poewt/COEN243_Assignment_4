//
// Created by Jacques Martinez on 2024-11-16.
//

#ifndef POST_H
#define POST_H

#include <string>
#include <vector>
using namespace std;

class Post {
    int postID;
    string content;
    int likes;
    vector<string> comments;

public:
    Post();

    void addLike();
    void addComment();
    void viewPost() const;
};



#endif //POST_H
