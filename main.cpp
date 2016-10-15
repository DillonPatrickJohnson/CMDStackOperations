#include "stack.h"

int main (void)
{
	cout << "Dillon Johnson, 11423048\n";
	
	Stack stackObject;

	string temp ("");
	string cmd  ("");
	string amt  ("");
	int amount;

	while (true)
	{
		string line;
		getline (std::cin, line);
		int lineLength = (int)line.length();
		
		if (0 == line.compare(0, 4, "push"))
		{
			int val = stoi(line.substr(5));
			stackObject.push(val);
		}
		
		else if (0 == line.compare (0, 3, "pop"))
		{
			stackObject.pop();
		}
		
		else if (0 == line.compare (0, 7, "isempty"))
		{
			stackObject.isempty();
		}

		else if (0 == line.compare (0, 7, "reverse"))
		{
			stackObject.reverse();
		}

		else if (0 == line.compare (0, 7, "display"))
		{
			stackObject.display(std::cout);
		}

		else if (0 == line.compare (0, 4, "quit"))
		{
			cout << "Done" << "\n";
			break;
		}

		else
		{
			cout << "Unknown Command:" << line << "\n";
		}
	}
/*
	while(cmd != "quit")
	{
		std::getline (cin, temp);

		int count = temp.size();
		int spaceLoc = temp.find(" ");

		if(spaceLoc != -1)
		{
			cmd = temp.substr (0, spaceLoc);
			amt = temp.substr (spaceLoc+1, count);

			amount = std::stoi(amt);
		}
		else
		{
			cmd = temp;
		}

		if (cmd == "push")
		{
			stackObject.push(amount);
		}
		if (cmd == "pop")
		{
			stackObject.pop();
		}
		if (cmd == "reverse")
		{
			stackObject.reverse();
		}
		if (cmd == "display")
		{
			stackObject.display(std::cout);
		}
		if (cmd == "isempty")
		{
			stackObject.isempty();
		}
		if (cmd == "quit")
		{
			cout << "Done" << "\n";
		}
		else if (cmd != "push" && cmd != "pop" && cmd != "reverse" && cmd != "display" && cmd != "isempty" && cmd != "quit")
		{
			cout << "Incorrect cmd entered:" << "\n";
		}
	}*/
	return 0;
}
