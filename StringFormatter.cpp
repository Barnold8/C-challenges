typedef std::string String;

String formatString(String f, char* arr) {

	int i{ 0 };
	int bracket_count{ 0 };
	int counter{ 0 };

	while (f[i] != '\0') {

		if (f[i] == '{' || f[i] == '}') {
			
			++bracket_count;
		
		}
		if (bracket_count >= 2) {

			f[i] = NULL;
			f[i - 1] = arr[counter];
			f[i - 2] = NULL;
			bracket_count = 0;
			++counter;

		}

		++i;
	}

	return f;

}

int main()
{

	String hello{ "{H}{e}{l}{l}{o}{}{} world" };
	char arr[]{ 'G','o','o','d','b','y','e'};
	String newSTR{ formatString(hello,arr) };
	
	std::cout << newSTR;

}
