class Employees : public Person
{
private:
    // attribute declaration
    string empNum;

public:
    string Position;
    string Office;
    float Salary;

    // empNum getter and setter
    string getEmpNum()
    {
        return empNum;
    }
    void setEmpNum(string _empNum)
    {
        empNum = _empNum;
    }

    // Position getter and setter
    string getPosition()
    {
        return Position;
    }
    void setPosition(string _Position)
    {
        Position = _Position;
    }

    // Office getter and setter
    string getOffice()
    {
        return Office;
    }
    void setOffice(string _Office)
    {
        Office = _Office;
    }

    // Salary getter and setter
    float getSalary()
    {
        return Salary;
    }
    void setSalary(float _Salary)
    {
        Salary = _Salary;
    }
};
