#include <iostream>

using namespace std;

class GradedActivity
{
    // private:
    protected:  // use protected to access score from FinalExam
        double score;
    public:
        GradedActivity()
        {  score = 0.0;  }
        GradedActivity(double s)
        {  score = s;  }
        void setScore(double s)
        {  score = s;  }
        double getScore()
        {  return score;  }
        virtual char getLetterGrade() const;
};

char GradedActivity::getLetterGrade() const
{
    char letterGrade;

    if (score > 89)
    {
        letterGrade = 'A';
    }
    else if (score > 79)
    {
        letterGrade = 'B';
    }
    else if (score > 69)
    {
        letterGrade = 'C';
    }
    else if (score > 59)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }

    return letterGrade;
}

// Inheritance Derived Class
class FinalExam : public GradedActivity
{
    private:
        int numQuestions;
        int numMissed;
    public:
        FinalExam()
        {
            numQuestions = 0;
            numMissed = 0;
        }
        void set(int, int);
        int getNumQuestions() const
        {  return numQuestions;  }
        int getNumMissed() const
        {  return numMissed;  }
};

void FinalExam::set(int q, int m)
{
    double numericScore, pointsEach;

    numQuestions = q;
    numMissed = m;
    pointsEach = 100.0 / numQuestions;
    numericScore = 100.0 - (numMissed * pointsEach);

    setScore(numericScore);
    // score = numericScore;  // ERROR: private is private
}

class PassFailExam : public GradedActivity
{
    private:
        int numQuestions;
        int numMissed;
        int numToPass;
    public:
        PassFailExam()
        {
            numQuestions = 0;
            numMissed = 0;
            numToPass = 0;
        }
        void set(int, int, int);
        char getLetterGrade() const;
};

void PassFailExam::set(int q, int m, int p)
{
    double numericScore, pointsEach;

    numQuestions = q;
    numMissed = m;
    numToPass = p;
    pointsEach = 100.0 / numQuestions;
    numericScore = 100.0 - (numMissed * pointsEach);
    setScore(numericScore);
} 

char PassFailExam::getLetterGrade() const
{
    if ((numQuestions - numMissed) >= numToPass)
    {
        return 'P';
    }
    else
    {
        return 'F';
    }
}

int main() {
    int score = 85;

    // Base class
    GradedActivity homework;
    homework.setScore(score);
    char grade = homework.getLetterGrade();
    cout << "grade is " << grade << endl;

    // Inheritance
    int numQ = 25;
    int numM = 2;
    FinalExam final;
    final.set(numQ, numM);
    cout << "The score on final is: " << final.getScore() << endl;
    cout << "The letter grade is: " << final.getLetterGrade() << endl;

    // Redefined functions
    PassFailExam quiz;
    quiz.set(10, 2, 8);
    cout << "The score on the quiz is: " << quiz.getLetterGrade() << endl;

    // Polymorphism
    GradedActivity HW1;
    PassFailExam quiz1;
    GradedActivity *gaPtr;

    HW1.setScore(score);
    quiz1.set(10, 2, 8);

    gaPtr = &HW1;
    cout << "HW1 grade: " << gaPtr->getLetterGrade() << endl;
    gaPtr = &quiz1;
    cout << "quiz grade: " << gaPtr->getLetterGrade() << endl;

    return 0;
}