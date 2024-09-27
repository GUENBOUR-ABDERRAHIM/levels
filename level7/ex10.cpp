#include <iostream>
using namespace std;

struct st_marks
{
        short mark1;
        short mark2;
        short mark3;
};

st_marks read_marks()
{
        st_marks student;

        cout << "enter your first mark: ";
        cin >> student.mark1;

        cout << "enter your second mark: ";
        cin >> student.mark2;

        cout << "enter your third mark: ";
        cin >> student.mark3;

        return student;
}

float calcule_the_average(st_marks student)
{
        return ((float)(student.mark1 + student.mark2 + student.mark3) / 3);
}

bool status(float average)
{
	return average >= 50;
}

void print_the_status(float average)
{
	cout << "\nthe average of your marks is " << average << endl;

        if(status(average))
		cout << "you pass." << endl;
	else 
		cout << "you fail."<< endl;
}

int main()
{
        print_the_status(calcule_the_average(read_marks()));
}
