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

    // Add a Group to the end of the list.
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

    // Check if a group with the given group code exists in the list.
    bool containsGroup(const string& targetGroupCode) const
    {
        Node *currentNode = head;

        while (currentNode != nullptr)
        {
            if (currentNode->groupCode == targetGroupCode)
            {
                return true;
            }

            currentNode = currentNode->next;
        }

        return false;
    }
};

int main()
{
    cout << boolalpha;


    // StudyGroupList object.
    StudyGroupList studyGroups;

    // Add three dummy groups 
    studyGroups.addGroup("ELEN-3040-A", 315);
    studyGroups.addGroup("PHYS-3312-B", 204);
    studyGroups.addGroup("ELEN-4410-C", 118);

    // Display every stored group 
    studyGroups.displayGroups();

    cout << "Registered groups: "
         << studyGroups.size() << endl;

    // Test the containsGroup function with two different group codes, one that exists and one that does not.
    cout << "Contains PHYS-3312-B: "
         << studyGroups.containsGroup("PHYS-3312-B") << endl;

    cout << "Contains COEN-2220-A: "
         << studyGroups.containsGroup("COEN-2220-A") << endl;

    return 0;
}