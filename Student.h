class Student : public Person
{
private:
    // attribute declaration
    string studentNum;

public:
    string Course;
    string Department;
    string College;

    // studentNum getter and setter
    string getStudentNum()
    {
        return studentNum;
    }
    void setStudentNum(string _studentNum)
    {
        studentNum = _studentNum;
    }

    // Course getter and setter
    string getCourse()
    {
        return Course;
    }
    void setCourse(string _Course)
    {
        Course = _Course;
    }

    // Department getter and setter
    string getDepartment()
    {
        return Department;
    }
    void setDepartment(string _Department)
    {
        Department = _Department;
    }

    // College getter and setter
    string getCollege()
    {
        return College;
    }
    void setCollege(string _College)
    {
        College = _College;
    }
};
