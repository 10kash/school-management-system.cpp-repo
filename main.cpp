//SCHOOL MANGEMNT SYSTEM
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;


struct Student {
    string name;
    int age;
    string grade;
};

struct Teacher {
    string name;
    string subject;
};
 
struct Course {
    string name;
    string studentsEnrolled;
};

class SchoolManagementSystem {
private:
    Student students[100]; 
    Teacher teachers[100];
    Course courses[100];   
    int studentCount = 0;  
    int teacherCount = 0;  
    int courseCount = 0;   
    
public:

	void di(){
		cout<<"========================================================================================================================";
    	cout<<"\n\n\t\t\t\t\t\tSCHOOL MANAGEMENT SYSTEM\t\t\t\t\t";
	    cout<<"\n\n";
	    cout<<"========================================================================================================================";
	}
	void displaySchoolTimings() {
		cout<<"========================================================================================================================";
        cout << "\t\t\t\t\t\tSchool Timings:8:30am to 3:00pm" << endl;
            	cout<<"========================================================================================================================";

        
    }
    void staffinfo() {
    	cout<<"========================================================================================================================";
    	cout << "\t\t\t\t\t\tTeachers" << endl;
    	for (int i = 0; i < teacherCount; i++) {
            cout << "\t\t\t\t\t\tName: " << teachers[i].name << "\n\t\t\t\t\t\tSubject: " << teachers[i].subject << endl;
        }
        cout << "\t\t\t\t\t\tWorkers" << endl;
        cout << "\t\t\t\t\t\tName: " <<"Saleem"<< "\n\t\t\t\t\t\tDesignation: " << "Security Guard"<< endl;
		cout << "\t\t\t\t\t\tName: " <<"Ghafor"<< "\n\t\t\t\t\t\tDesignation: " << "Janitor"<< endl;
        cout << "\t\t\t\t\t\tName: " <<"Waheed"<< "\n\t\t\t\t\t\tDesignation: " << "Gardener"<< endl;

	}

    
    void displayMenu() {
        cout << "\t\t\t\t\t\t__________________________\n";     
        cout << "\n\t\t\t\t\t\t\t   Menu\n";
        cout << "\t\t\t\t\t\t__________________________\n\n"; 
        cout << "\t\t\t\t\t\t1. Add Student\n";
        cout << "\t\t\t\t\t\t2. Add Teacher\n";
        cout << "\t\t\t\t\t\t3. Add Course\n";
        cout << "\t\t\t\t\t\t4. Enroll Student in Course\n";
        cout << "\t\t\t\t\t\t5. Display All Students\n";
        cout << "\t\t\t\t\t\t6. Display All Teachers\n";
        cout << "\t\t\t\t\t\t7. Display All Courses\n";
        cout << "\t\t\t\t\t\t8. Save Data to File\n";
        cout << "\t\t\t\t\t\t9. Display School Timings\n";
        cout << "\t\t\t\t\t\t10.Display Staff Information\n";
        cout << "\t\t\t\t\t\t11.Exit\n";
         cout << "\t\t\t\t\t\t__________________________\n";     
        cout << "\n\t\t\t\t\t\tEnter your choice: ";
         
    }
    
   
    void addStudent() {
    		    cout<<"========================================================================================================================";
        cout<<"\n\n";
        cout << "\t\t\t\t\t\tEnter student name: ";
        cin >> students[studentCount].name;
        cout << "\t\t\t\t\t\tEnter student age: ";
        cin >> students[studentCount].age;
        cout << "\t\t\t\t\t\tEnter student grade: ";
        cin >> students[studentCount].grade;
        studentCount++;
        cout << "\t\t\t\t\t\tStudent added successfully!\n";
        	    cout<<"========================================================================================================================";

        
    }
    
    
    void addTeacher() {
    		    cout<<"========================================================================================================================";

        cout << "\t\t\t\t\t\tEnter teacher name: ";
        cin >> teachers[teacherCount].name;
        cout << "\t\t\t\t\t\tEnter subject taught by teacher: ";
        cin >> teachers[teacherCount].subject;
        teacherCount++;
        cout << "\t\t\t\t\t\tTeacher added successfully!\n";
        	    cout<<"========================================================================================================================";

    }
    
   
    void addCourse() {
    		    cout<<"========================================================================================================================";

        cout << "\t\t\t\t\t\tEnter course name: ";
        cin >> courses[courseCount].name;
        cout << "\t\t\t\t\t\tEnter students enrolled in the course: ";
        cin >> courses[courseCount].studentsEnrolled;
        courseCount++;
        cout << "\t\t\t\t\t\tCourse added successfully!\n";
        	    cout<<"========================================================================================================================";

    }
    
    
    void enrollStudentInCourse() {
    		    cout<<"========================================================================================================================";

        string studentName, courseName;
        cout << "\t\t\t\t\t\tEnter student name: ";
        cin >> studentName;
        cout << "\t\t\t\t\t\tEnter course name: ";
        cin >> courseName;
        
       
        bool studentFound = false;
        bool courseFound = false;
        for (int i = 0; i < studentCount; i++) {
            if (students[i].name == studentName) {
                studentFound = true; 
                break;
            }
        }
        for (int i = 0; i < courseCount; i++) {
            if (courses[i].name == courseName) {
                courseFound = true;
                break;
            }
        }
        
        
        if (studentFound && courseFound) {
            for (int i = 0; i < courseCount; i++) {
                if (courses[i].name == courseName) {
                	    
                    courses[i].studentsEnrolled += ", " + studentName;
                    break;
                }
            }
            cout << "\t\t\t\t\t\tStudent enrolled in course successfully!\n";
            	    cout<<"========================================================================================================================";

        } else {
            cout << "\t\t\t\t\t\tStudent or course not found. Enrollment failed.\n";
        }
    }
    
    
    void displayAllStudents() {
    		    cout<<"========================================================================================================================";

        cout << "\t\t\t\t\t\tList of Students:\n";
        for (int i = 0; i < studentCount; i++) {
            cout << "\t\t\t\t\t\tName: " <<students[i].name << "\n\t\t\t\t\t\tAge: " << students[i].age << "\n\t\t\t\t\t\tGrade: " << students[i].grade << endl;
        }
    }
    
   
    void displayAllTeachers() {
    		    cout<<"========================================================================================================================";

        cout << "\t\t\t\t\t\tList of Teachers:\n";
        for (int i = 0; i < teacherCount; i++) {
            cout << "\t\t\t\t\t\tName: " << teachers[i].name << "\n\t\t\t\t\t\tSubject: " << teachers[i].subject << endl;
        }
    }
    
    
    void displayAllCourses() {
    		    cout<<"========================================================================================================================";

        cout << "\t\t\t\t\t\tList of Courses:\n";
        for (int i = 0; i < courseCount; i++) {
            cout << "\t\t\t\t\t\tCourse Name: " << courses[i].name << "\n\t\t\t\t\t\tStudents Enrolled: " << courses[i].studentsEnrolled << endl;
        }
    }
    
   
    void saveDataToFile() {
        ofstream outFile("SchoolData.txt");
        if (outFile.is_open()) {
            outFile << "Students:\n";
            for (int i = 0; i < studentCount; i++) {
                outFile << "Name: " << students[i].name << ", Age: " << students[i].age << ", Grade: " << students[i].grade << endl;
            }
            outFile << "\nTeachers:\n";
            for (int i = 0; i < teacherCount; i++) {
                outFile << "Name: " << teachers[i].name << ", Subject: " << teachers[i].subject << endl;
            }
            outFile << "\nCourses:\n";
            for (int i = 0; i < courseCount; i++) {
                outFile << "Course Name: " << courses[i].name << ", Students Enrolled: " << courses[i].studentsEnrolled << endl;
            }
            	    cout<<"========================================================================================================================";

            cout << "\t\t\t\t\t\tData saved to file successfully!\n";
            	    cout<<"========================================================================================================================";

            outFile.close();
        } else {
            cout << "\t\t\t\t\t\tUnable to open file for writing.\n";
        }
    }
};

int main() {
    SchoolManagementSystem sms;
    sms.di();
    int choice;
    do {
    	
        sms.displayMenu();
        cin >> choice;
        switch(choice) {
            case 1:
                sms.addStudent();
                break;
            case 2:
                sms.addTeacher();
                break;
            case 3:
                sms.addCourse();
                break;
            case 4:
                sms.enrollStudentInCourse();
                break;
            case 5:
                sms.displayAllStudents();
                break;
            case 6:
                sms.displayAllTeachers();
                break;
            case 7:
                sms.displayAllCourses();
                break;
            case 8:
                sms.saveDataToFile();
                break;
            case 9:
            	sms.displaySchoolTimings();
                
                break;
            case 10:
            	sms.staffinfo();
            	break;
            case 11:
            	cout << "Exiting...\n";
            	
            	
            default:
            	cout<<"========================================================================================================================";
                cout << "\a\t\t\t\t\t\tInvalid choice. Please enter a number between 1 and 11.\n";
                cout<<"========================================================================================================================";
        }
    } while(choice != 11);
    return 0;
}
