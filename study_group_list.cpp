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

    //  Add a Group to the end of the list.

     void addGroup(const string& newGroupCode, int newMeetingRoom)
    {
        Node *newNode = new Node;

        newNode->groupCode = newGroupCode;
        newNode->meetingRoom = newMeetingRoom;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *currentNode = head;

            while (currentNode->next != nullptr)
            {
                currentNode = currentNode->next;
            }

            currentNode->next = newNode;
        }

        groupCount++;
    }
    // Display all groups in the list.
     void displayGroups() const
    {
        Node *currentNode = head;

        while (currentNode != nullptr)
        {
            cout << "Group: " << currentNode->groupCode
                 << ", Room: " << currentNode->meetingRoom
                 << endl;

            currentNode = currentNode->next;
        }
    }
    // Return the number of groups in the list.
     int size() const
    {
        return groupCount;
    }
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