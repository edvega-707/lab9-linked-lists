/*
 * Course: COEN 2220 - Programming 2
 * Name: Eduardo D. Vega 
 * Lab: Lab 9 - Linked Lists
 * Description: Practice - a linked list of study groups
 * Due date: 10/19/2026
 */

#include <iostream>
#include <string>
using namespace std;

class StudyGroupList
{
private:
    // ===== Resolve these TODOs now (Part C) =====

    // Define a Node with groupCode, meetingRoom, and next.
    struct Node
    {
        string groupCode;
        int meetingRoom;
        Node *next;
    };

    // Store the address of the first node.
    Node *head;

    // Store the number of groups.
    int groupCount;

public:
    // Constructor that starts with an empty list.
    StudyGroupList()
    {
        head = nullptr;
        groupCount = 0;
    }

    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Write addGroup. It receives a group code and room number, adds one node at the end, and updates groupCount.
    // TODO (Part D): Write displayGroups as a const member function.
    // TODO (Part D): Write size as a const member function that returns groupCount.

    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Write containsGroup as a const member function that searches by group code.
};

int main()
{
    cout << boolalpha;

    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudyGroupList object.
    // TODO (Part E): Add three dummy groups with different codes and room numbers.
    // TODO (Part E): Display every stored group and print the result of size().
    // TODO (Part E): Search for one stored group code and one missing group code; print both bool results.

    return 0;
}