#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    // Write your constructor here
    Student(string firstName, string lastName, int id, std::vector<int> &scores)
        : Person(firstName, lastName, id), testScores(scores) {}
    /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
    // Write your function here
    char calculate()
    {
        int sumScore = 0;
        for (int i = 0; i < testScores.size(); i++)
        {
            sumScore += testScores[i];
        }
        int averageScore = sumScore / testScores.size();

        if (averageScore <= 100 && averageScore >= 90)
        {
            return 'O';
        }
        else if (averageScore < 90 && averageScore >= 80)
        {
            return 'E';
        }
        else if (averageScore < 80 && averageScore >= 70)
        {
            return 'A';
        }
        else if (averageScore < 70 && averageScore >= 55)
        {
            return 'P';
        }
        else if (averageScore < 55 && averageScore >= 40)
        {
            return 'D';
        }
        return 'T';
    }
};

int main()
{