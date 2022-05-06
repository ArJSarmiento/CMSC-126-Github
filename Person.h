class Person
{
private:
    // attribute declaration
    string fname;
    string lname;
    string gender;
    string emailAdd;
    string cpNumber;

public:
    // First Name getter and setter
    string getFname()
    {
        return fname;
    }
    void setFname(string _fname)
    {
        fname = _fname;
    }

    // Last Name getter and setter
    string getLname()
    {
        return lname;
    }
    void setLname(string _lname)
    {
        lname = _lname;
    }

    // Gender getter and setter
    string getGender()
    {
        return gender;
    }
    void setGender(string _gender)
    {
        gender = _gender;
    }

    // emailAdd getter and setter
    string getEmailAdd()
    {
        return emailAdd;
    }
    void setEmailAdd(string _emailAdd)
    {
        emailAdd = _emailAdd;
    }

    // cpNumber getter and setter
    string getCpNumber()
    {
        return cpNumber;
    }
    void setCpNumber(string _cpNumber)
    {
        cpNumber = _cpNumber;
    }
};
