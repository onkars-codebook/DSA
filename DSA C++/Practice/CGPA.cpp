#include <iostream>
using namespace std;

// Function to calculate CGPA for each subject based on marks
int calculateCGPA(int marks) {
    if (marks >= 90)
        return 10;
    else if (marks >= 80)
        return 9;
    else if (marks >= 70)
        return 8;
    else if (marks >= 60)
        return 7;
    else if (marks >= 50)
        return 6;
    else if (marks >= 40)
        return 5;
    else
        return 0; // Fail
}

int main() {
    // Define subjects and their respective credits
    int creditsADS = 4, creditsDBMS = 4, creditsDM = 3, creditsQSIP = 2;
  
    int creditsDT = 2, creditsUIUX = 2, creditsUHV = 2, creditsCNP = 2;
    // Store marks for each subject
    int marksADS, marksDBMS, marksDM, marksQSIP;
    int marksDT, marksUIUX, marksUHV, marksCNP;

    // Input marks for each subject
    cout << "Enter marks for ADS (out of 100): ";
    cin >> marksADS;
    cout << "Enter marks for DBMS (out of 100): ";
    cin >> marksDBMS;
    cout << "Enter marks for DM (out of 100): ";
    cin >> marksDM;
    cout << "Enter marks for QSIP (out of 100): ";
    cin >> marksQSIP;
    cout << "Enter marks for DT (out of 100): ";
    cin >> marksDT;
    cout << "Enter marks for UI/UX (out of 100): ";
    cin >> marksUIUX;
    cout << "Enter marks for UHV (out of 100): ";
    cin >> marksUHV;
    cout << "Enter marks for CNP (out of 100): ";
    cin >> marksCNP;

    // Calculate CGPA for each subject based on marks
    int cgpaADS = calculateCGPA(marksADS) * creditsADS;
    int cgpaDBMS = calculateCGPA(marksDBMS) * creditsDBMS;
    int cgpaDM = calculateCGPA(marksDM) * creditsDM;
    int cgpaQSIP = calculateCGPA(marksQSIP) * creditsQSIP;
    int cgpaDT = calculateCGPA(marksDT) * creditsDT;
    int cgpaUIUX = calculateCGPA(marksUIUX) * creditsUIUX;
    int cgpaUHV = calculateCGPA(marksUHV) * creditsUHV;
    int cgpaCNP = calculateCGPA(marksCNP) * creditsCNP;

    // Total credits and total weighted CGPA
    int totalCredits = creditsADS + creditsDBMS + creditsDM + creditsQSIP +
                       creditsDT + creditsUIUX + creditsUHV + creditsCNP;
    cout<<"Credit Count :"<<totalCredits;
    int totalCGPA = cgpaADS + cgpaDBMS + cgpaDM + cgpaQSIP +
                    cgpaDT + cgpaUIUX + cgpaUHV + cgpaCNP;

    // Calculate SGPA
    double SGPA = static_cast<double>(totalCGPA) / totalCredits;

    // Display the SGPA
    cout << "Your SGPA is: " << SGPA << endl;

    return 0;
}
