int main(int argc, char const *argv[])
{
    // a program that accepts the assignment number and due date for a cover sheet with the following information: school,name,course, assignment number, the due date of the assignment, and a place for the grade.


    cout << "Welcome to the cover sheet creator" << endl;
    cout << "Please enter the following information" << endl;
    cout << "Enter the school name: " << endl;
    cin >> school;
    cout << "Enter the name of the course: " << endl;
    cin >> course;
    cout << "Enter the assignment number: " << endl;
    cin >> assignment;
    cout << "Enter the due date: " << endl;
    cin >> dueDate;
    cout << "Enter the grade: " << endl;
    cin >> grade;
    //clear the screen
   system("cls");
   // visually center the ouput on a letter (8.5 X 11) sheet of paper.

    cout << "Here is the cover sheet" << endl;
    cout << setw(50) << "School: " << school << endl;
   cout << setw(50) << "Course: " << course << endl;
   cout << setw(50) << "Assignment: " << assignment << endl;
   cout << setw(50) << "Due Date: " << dueDate << endl;
   cout << setw(50) << "Grade: " << grade << endl;
    return 0;
}
 