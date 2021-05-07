#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void booking();
void login();
void adminmenu();
void studentmenu();
void cancellation();
void check();
void changingRoom();
void payment();
int main()
{
	int choice;
	printf("\t\t\t\tWELCOME TO WISDOM COLLEGE HOSTEL BOOKING SYSTEM\n\n");
	printf("What services would you like to access?\n\n");
	printf("Select an option:\n");
	printf("1.Admin\n");
	printf("2.Student\n");
	printf("3.Exit the program\n\n");
	printf("Please key in your choice:");
	scanf("%d", &choice);
	getch(); system("CLS");
		switch (choice)
		{
		case 1:adminmenu();
		case 2:studentmenu();
		case 3:printf("Thank you for using this system"); exit(EXIT_SUCCESS);
		}
	
}

void adminmenu()
{
	int option;
	char studentid[15];
	char chd = ' '; int d = 0;
	login();
	printf("Hostel Reservation System\n\n");
	printf("1. Make a new booking\n");
	printf("2. Check room availablity\n");
	printf("3. Search for hosteler details\n");
	printf("4. Payment facility\n");
	printf("5. Room cancelation\n");
	printf("6. Change room type \n");
	printf("7. Exit the system\n\n");
	printf("Please key in the number you have choosen:\n");
	scanf("%d", &option);
	getch(); system("CLS");
	if (option == 1)
	{
		booking();
	}
	else if (option == 2)
	{
		check();
	}
	else if (option == 3)
	{
		printf("%s", "StudentID       : TP");
		scanf("%s", studentid);

		strcat(studentid, ".txt");


		FILE *studentID, *filePtr, *studentID2, *studentID3;

		if ((studentID = fopen(studentid, "r")))
		{
			printf("%s", "StudentID       : ");
			while ((chd = fgetc(studentID)) != EOF)
			{
				printf("%c", chd);
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "First name      : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Last name       : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Passport/IC     : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Gender          : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Block chosen    : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Room chosen     : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Service chosen  : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Weeks stay      : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Total amount due: ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
				printf("%s", "Booked         : ");
				while ((chd = fgetc(studentID)) != '\n')
				{
					printf("%c", chd);
				}
				if (chd == '\n')
				{
					printf("\n");
				}
			}
			getch(); system("CLS");
		}
		else
		{
			printf("\nStudent no exist\n");
		}




		adminmenu();
	}
	else if (option == 4)
	{
		printf("Enter your STUDENT ID : TP");
		scanf("%s", studentid);
		strcat(studentid, ".txt");
		payment(studentid);
	}
	else if (option == 5)
	{
		printf("Please enter your STUDENT ID : TP");
		scanf("%s", studentid);
		strcat(studentid, ".txt");
		cancellation(studentid,studentid);
	}
	else if (option == 6)
	{
		printf("Enter your STUDENT ID : TP");
		scanf("%s", studentid);
		strcat(studentid, ".txt");
		changingRoom(studentid, studentid);
	
	}
	else if (option == 7)
	{
		printf("Thank you for using our system");
		main();
	}
	else
	{
		printf("Invalid Input. Please try again.\n");
		adminmenu();
	}


	getch(); system("CLS");
}

void studentmenu()
{
	int option;
	char studentid[15];
	char chd = ' '; int d = 0;
	printf("Hostel Reservation System\n\n");
	printf("1. Make a new booking\n");
	printf("2. Check room availablity\n");
	printf("3. Payment facility\n");
	printf("4. Room cancelation\n");
	printf("5. Change room type \n");
	printf("6. Exit the system\n\n");
	printf("Please key in the number you have choosen:\n");
	scanf("%d", &option);
	getch(); system("CLS");
	if (option == 1)
	{
		booking();
	}
	else if (option == 2)
	{
		check();
	}
	
	else if (option == 3)
	{
		printf("Enter your STUDENT ID : TP");
		scanf("%s", studentid);
		strcat(studentid, ".txt");
		payment(studentid);
	}
	else if (option == 4)
	{
		printf("Please enter your STUDENT ID : TP");
		scanf("%s", studentid);
		strcat(studentid, ".txt");
		cancellation(studentid, studentid);
	}
	else if (option == 5)
	{
		printf("Enter your STUDENT ID : TP");
		scanf("%s", studentid);
		strcat(studentid, ".txt");
		changingRoom(studentid, studentid);

	}
	else if (option == 6)
	{
		printf("Thank you for using our system\n");
		main();
	}
	else
	{
		printf("Invalid Input. Please try again.\n");
		studentmenu();
	}


	getch(); system("CLS");
}

void check()
{
	char gender;
	int array[10][10];

	for (int ki = 0; ki < 10; ki++)
	{
		for (int kj = 0; kj < 10; kj++)
		{
			array[ki][kj] = 0;
		}
	}

	char blockSelect[33];
	int userChoice;
	char ch, file_name[25];
	printf("Enter the student gender (M or F)\n");
	scanf(" %c", &gender);
	int i = -1;
	int j = -1;
	while (1)
	{
		if (gender == 'M' || gender == 'm')
		{
			printf("1. A1 (single bed room) - Available\n");
			printf("2. A2 (two bedded room) - Under Construction\n");
			printf("3. A3 (three bedded room) - Under Construction\n");
			printf("4. A4 (four bedded room) - Under Construction\n");
			printf("Please key in the block you want to see (e.g : A2) : ");
			scanf("%s", blockSelect);
			blockSelect[0] = 'A';
			strcat(blockSelect, ".txt");
			FILE *studentID, *filePtr, *studentID2, *studentID3;

			studentID = fopen(blockSelect, "r");
			int d = 0;
			int col = 0;
			int row = 0;
			char checkk[3];

			checkk[2] = '1';
			ch = fgetc(studentID);
			if (ch != EOF)
				col = ch - 49;
			while (ch != EOF)
			{
				
				if (ch == '\n')
				{
					ch = fgetc(studentID);
					if (ch == EOF)
						break;
					else
					{
						if (ch == '1')
						{
						
							col = ch - 49;
						}
						else
							col = ch - 49;
					}
				}
				ch = fgetc(studentID);
				while (ch != '\n')
				{
					printf("%c", ch);
					if (ch != '0')
						row = ch - 49;
					else
						row = 0;
					ch = fgetc(studentID);
					if (ch == '0')
					{
						col = 9;
						row = 8;
						ch = fgetc(studentID);
					}
					if (ch == EOF)
						break;
				}
				array[row > 0 ? row + 1 : 0][col > 0 ? col : 0] = 1;
				row = 0;
				col = 0;
			}


			printf("\n\n\n");
			printf("1          2          3          4          5          6          7          8          9          10\n\n\n");
			for (i = 0; i < 10; i++) {
				for (j = 0; j < 10; j++) {
					printf("%d          ", array[i][j]);

				}
				printf("\n");
			}



			printf("\nTotal Rooms Are %d\n\n", d);
			printf("Press any key to continue\n");
			getch(); system("CLS");
			if (!strcmp(blockSelect, "A3") || (!strcmp(blockSelect, "a3")) || (!strcmp(blockSelect, "A2")) || (!strcmp(blockSelect, "a2"))||(!strcmp(blockSelect, "A4")) || (!strcmp(blockSelect, "a4")))
			{
				printf("Sorry, currently not available.\n");
				printf("Press any key to continue\n");
				getch(); system("CLS");
				check();
			}
			break;
		}
		else if (gender == 'F' || gender == 'f')//if female
		{
			printf("1. B1 (single bed room)		-	Under Construction\n");
			printf("2. B2 (two bedded room)		-	Available\n");
			printf("3. B3 (three bedded room)	-	Available\n");
			printf("4. B4 (four bedded room)	-	Available\n");
			printf("Please key in the block you want to see (e.g : A2) : ");
			printf("Please key in the block you want to see (e.g : B1) : ");
			scanf("%s", blockSelect);
			blockSelect[0] = 'B';
			strcat(blockSelect, ".txt");
			FILE *studentID, *filePtr, *studentID2, *studentID3;

			studentID = fopen(blockSelect, "r");

			
			int d = 0;
			int col = 0;
			int row = 0;
			char checkk[3];

			checkk[2] = '1';
			ch = fgetc(studentID);
			if (ch != EOF)
				col = ch - 49;
			while (ch != EOF)
			{
				d++;
	
				if (ch == '\n')
				{
					ch = fgetc(studentID);
					if (ch == EOF)
						break;
					else
					{
						if (ch == '1')
						{
						
							col = ch - 49;
						}
						else
							col = ch - 49;
					}
				}
				ch = fgetc(studentID);
				while (ch != '\n')
				{
					printf("%c", ch);
					if (ch != '0')
						row = ch - 49;
					else
						row = 0;
					ch = fgetc(studentID);
					if (ch == '0')
					{
						col = 9;
						row = 8;
						ch = fgetc(studentID);
					}
					if (ch == EOF)
						break;
				}
				array[row > 0 ? row + 1 : 0][col > 0 ? col : 0] = 1;
				row = 0;
				col = 0;
			}
			

			printf("\n\n\n");
			printf("1          2          3          4          5          6          7          8          9          10\n\n\n");
			for (i = 0; i < 10; i++) {
				for (j = 0; j < 10; j++) {
					printf("%d          ", array[i][j]);

				}
				printf("\n");
			}



			printf("\nTotal Rooms Are %d\n", d > 0 ? d - 1 : 0);
			printf("Press any key to continue\n");
			getch(); system("CLS");
			
			if (!strcmp(blockSelect, "B1") || (!strcmp(blockSelect, "b1")))
			{
				printf("Sorry, currently not available.\n");
				printf("Press any key to continue\n");
				getch(); system("CLS");
				check();
			}
			break;

		}
	}
	main();
}

struct bookingfix {
	char studentid[10];
	char firstname[15];
	char lastname[15];
	char gender[8];
	char passport[10];
	int roomchoice[10];
	char blockchoice[10];
	char hostelservice[40];
	int totalamount;
	int weekstay;
};
void cancellation(char filename2[100], char filename[100])
{
	char ch;
	char line[11][11];
	char line2[11][11];
	struct bookingfix s;
	int count, paymentMade, number, date, year;
	char day[10], month[10], time[20], data[100];
	FILE *filePtrOld, *filePtrNew, *filePtrOld2, *filePtrOld3;
	filePtrOld = fopen(filename2, "r");
	int num = 0;
	char id[10];
	int i = 0;
	int k1 = 0;
	int k2 = 0;
	if (filePtrOld == NULL)
	{
		printf("Student didn't exist\n");
		getch(); system("CLS");
		studentmenu();
	}
	else
	{ 
		while (fgets(line[i], 100, filePtrOld))
		{

			{
				line[i][strlen(line[i]) - 1] = '\0';
			}
			i++;
		}
		int kki = atoi(line[9]);

		if (kki == 0)
		{
			while (fgets(line[i], 100, filePtrOld))
			{

				{
					line[i][strlen(line[i]) - 1] = '\0';
				}
				i++;
			}
			filename = line[5];
			strcat(filename, ".txt");
			filePtrOld2 = fopen(filename, "r");
			int k = 0;
			i = 0;
			int check = 0;
			while (fgets(line2[i], 100, filePtrOld2))
			{
				line2[i][strlen(line2[i]) - 1] = '\0';
				k = strcmp(line2[i], line[0]);
				if (k == 0)
				{
					check = i;
				}

				i++;
			}

			filePtrOld3 = fopen(filename, "w");
			for (int sa = 0; sa < i; sa++)
			{
				if (sa != check)
					fprintf(filePtrOld3, "%s\n", line2[sa]);
			}
			FILE *fp = fopen(filename2, "r");

			if (fp == NULL) printf("Database error\n");
			else 
			{

				fclose(fp);
				fclose(filePtrOld3);
				_fcloseall();
				printf("You already paid for this room\n");
				printf("Your money will be returned\n");
				if (remove(filename2)) printf("Unable to delete the file\n");
				else printf("Delete successful\n");


			}
		}
	
		else
		{
			while (fgets(line[i], 100, filePtrOld))
			{

				{
					line[i][strlen(line[i]) - 1] = '\0';
				}
				i++;
			}
			filename = line[5];
			strcat(filename, ".txt");
			filePtrOld2 = fopen(filename, "r");
			int k = 0;
			i = 0;
			int check = 0;
			while (fgets(line2[i], 100, filePtrOld2))
			{
				line2[i][strlen(line2[i]) - 1] = '\0';
				k = strcmp(line2[i], line[0]);
				if (k == 0)
				{
					check = i;
				}

				i++;
			}

			filePtrOld3 = fopen(filename, "w");
			for (int sa = 0; sa < i; sa++)
			{
				if (sa != check)
					fprintf(filePtrOld3, "%s\n", line2[sa]);
			}
			FILE *fp = fopen(filename2, "r");

			if (fp == NULL) printf("Database error\n");
			else
			{

				fclose(fp);
				fclose(filePtrOld3);
				_fcloseall();
				if (remove(filename2)) printf("Unable to delete the file\n");
				else printf("Delete successful\n");


				printf("Your outstanding balance is %d RM\n", kki);
				printf("The rest of your money will be refunded");
				if (remove(filename2)) printf("Unable to delete the file\n");
				else printf("Delete successful\n");
				getch(); system("CLS");
			}

		}
	}
	main();
	
}

void login()
{

	char username[20];
	char userpwd[6];
	int i;
	printf("Login\n\n");
	printf("Enter your username : ");

	scanf("%s", username);

	printf("Enter your password : ");
	scanf("%s", userpwd);


	if (!strcmp(username, "admin") && !strcmp(userpwd, "admin"))
	{
		printf("\n\nLogged In Successful\n\n");
		printf("Press any key to continue\n\n");
		getch(); system("CLS");

	}
	else
	{
		printf("\n\nIncorrect username or password\n\n");
		printf("Press any key to continue\n\n");
		getch(); system("CLS");
		main();
	}
}

void booking()
{
	char bk;
	char filename[25];
	FILE* studentID, *studentID2, *fileptr, *studentID3;
	FILE* fptr;
	fptr = fopen("C:\\program.txt", "w");
	time_t currentTime;
	time(&currentTime);
	struct bookingfix s;
	int roomprice, roomchoice, roomlist[100], count, count2;
	char roomchoice1[5], blockchoice[5], user, studentid[10], gender, hostelservice[10], service;
	service = ' ';
	printf("\n\nStudent ID: TP");
	scanf("%s", &studentid);
	strcpy(s.studentid, studentid);
	strcat(studentid, ".txt");
	studentID = fopen(studentid, "r");
	studentID2 = fopen(studentid, "r");
	studentID3 = fopen(studentid, "r");
	if (studentID != NULL)
	{
		printf("Sorry, this TP has ever been assigned to a booking already.\n");
		printf("Press any key to continue\n\n");
		getch(); system("CLS");

		studentmenu();
	}
	else if (studentID == NULL)
	{
		studentID = fopen(studentid, "w");//opening file
	}
	if (studentID2 != NULL)
	{
		printf("Sorry, this TP has ever been assigned to a booking already.\n");
		printf("Press any key to continue\n\n");
		getch(); system("CLS");
		studentmenu();
	}
	else if (studentID2 == NULL)
	{
		studentID2 = fopen(studentid, "w");
	}
	if (studentID3 != NULL)
	{
		printf("Sorry, this TP has ever been assigned to a booking already.\n");
		printf("Press any key to continue\n\n");
		getch(); system("CLS");
		studentmenu();
	}
	else if (studentID3 == NULL)
	{
		studentID3 = fopen(studentid, "w");
	}
	getch(); system("CLS");
	printf("\n\nGender: Male or Female\nPlease enter with M or F code for defining your gender\n");
	scanf("%s", &s.gender);
	getch(); system("CLS");
	while (1)
	{
		if (!strcmp(s.gender, "M")|| !strcmp(s.gender, "m"))
		{
			printf("1. A1 (single bed room) - Available\n");
			printf("2. A2 (two bedded room) - Under Construction\n");
			printf("3. A3 (three bedded room) - Under Construction\n");
			printf("4. A4 (four bedded room) - Under Construction\n");
			printf("Please key in the block you desire:");
			scanf("%s", s.blockchoice);
			system("CLS");
			s.blockchoice[0] = 'A';
			strcpy(blockchoice, s.blockchoice);
			if (!strcmp(s.blockchoice, "A1") || (!strcmp(s.blockchoice, "a1")))
			{
				roomprice = 400;
				break;
			}
			else if (!strcmp(s.blockchoice, "A2") || (!strcmp(s.blockchoice, "a2")))
			{
				printf("Sorry this block is under contruction\n");
				printf("Please select another block\n");
				getch(); system("CLS");
				continue;

			}
			else if (!strcmp(s.blockchoice, "A3") || (!strcmp(s.blockchoice, "a3")))
			{
				printf("Sorry this block is under contruction\n");
				printf("Please select another block\n");
				getch(); system("CLS");
				continue;

			}
			else if (!strcmp(s.blockchoice, "A4") || (!strcmp(s.blockchoice, "a4")))
			{
				printf("Sorry this block is under contruction\n");
				printf("Please select another block\n");
				getch(); system("CLS");
				continue;

			}
			else
			{
				printf("Invalid input,please try again");
				getch(); system("CLS");
				continue;
			}
		}

		else if (!strcmp(s.gender, "F") || !strcmp(s.gender, "f"))
		{
			printf("1. B1 (single bed room) - Under Constructionn\n");
			printf("2. B2 (two bedded room) -  Available\n");
			printf("3. B3 (three bedded room) -  Available\n");
			printf("4. B4 (four bedded room) -  Available\n");
			printf("Please key in the block you desire:");
			scanf("%s", s.blockchoice);
			s.blockchoice[0] = 'B';
			strcpy(blockchoice, s.blockchoice);
			if (!strcmp(s.blockchoice, "B1") || (!strcmp(s.blockchoice, "b1")))
			{
				printf("Sorry this block is under contruction\n");
				printf("Please select another block\n");
				getch(); system("CLS");
				continue;
			}
			else if (!strcmp(s.blockchoice, "B2") || (!strcmp(s.blockchoice, "b2")))
			{
				roomprice = 200;

				break;

			}
			else if (!strcmp(s.blockchoice, "B3") || (!strcmp(s.blockchoice, "b3")))
			{
				roomprice = 150;
				
				break;

			}
			else if (!strcmp(s.blockchoice, "B4") || (!strcmp(s.blockchoice, "b4")))
			{
				roomprice = 100;
			
				break;

			}
			else
			{
				printf("Invalid input,please try again");
				getch(); system("CLS");
				break;
			}
		}
	}
	FILE *outfile = NULL;
	int k = strcmp(s.blockchoice, "A1");
	if (k == 0)
	{
		studentID = fopen("A1.txt", "r");
		studentID2 = fopen("A1.txt", "r");
		outfile = fopen("A1.txt", "a");
	}
	k = strcmp(s.blockchoice, "B2");
	if (k == 0)
	{
		studentID = fopen("B2.txt", "r");
		studentID2 = fopen("B2.txt", "r");
		outfile = fopen("B2.txt", "a");
	}
	k = strcmp(s.blockchoice, "B3");
	if (k == 0)
	{
		studentID = fopen("B3.txt", "r");
		studentID2 = fopen("B3.txt", "r");
		outfile = fopen("B3.txt", "a");
	}
	k = strcmp(s.blockchoice, "B4");
	if (k == 0)
	{
		studentID = fopen("B4.txt", "r");
		studentID2 = fopen("B4.txt", "r");
		outfile = fopen("B4.txt", "a");
	}
	int array[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			array[i][j] = 0;
		}
	}
	int i = -1;
	int j = -1;
	int rooms = 0;
	char booked;
	printf("There are 100 rooms per block Numbered from 1 to 100 : ");
	printf("\nRoom No that are booked are : \n");
	booked = fgetc(studentID);
	while (booked != EOF)//getting rooms that are booked
	{
		rooms++;
		printf("%c", booked);
		booked = fgetc(studentID);
		while (booked != '\n')
		{
			printf("%c", booked);
			booked = fgetc(studentID);
			if (booked == EOF)
				break;
		}

	}

	printf("Total Rooms That Are Booked : %d\n", rooms > 0 ? rooms - 1 : 0);
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 0;
	}
	fclose(studentID);
	if (outfile == NULL)
	{
		printf("Error! Could not open file\n");
		exit(-1); 
	}
	if (studentID == NULL)
	{
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		printf("Enter Room Number that you want to Book: ");
		int num = 0;

		scanf("%d", &num);
		int ss = 0;
		while ((booked = fgetc(studentID2)) != EOF)
		{
			if (booked == '\n')
			{
				ss++;
			}
			else
				if (arr[ss] == '0')
				{
					arr[ss] = booked - '0';
				}
				else
				{
					int k = booked - '0';
					arr[ss] = arr[ss] * 10;
					arr[ss] = arr[ss] + k;
				}


		}
		int count=0;
		k = strcmp(s.blockchoice, "A1");
		if (k == 0)
		{
			for (int i = 0; i < 100; i++)
			{
				if (arr[i] == num)
				{
					count++;
				}
			}
			if (count == 1)
			{
				count = -2;
			}
		}

		k = strcmp(s.blockchoice, "B2");
		if (k == 0)
		{
			for (int i = 0; i < 100; i++)
			{
				if (arr[i] == num)
				{
					count++;
				}
			}
			if (count == 2)
			{
				count = -2;
			}
		}
		k = strcmp(s.blockchoice, "B3");
		if (k == 0)
		{
			for (int i = 0; i < 100; i++)
			{
				if (arr[i] == num)
				{
					count++;
				}
			}
			if (count == 3)
			{
				count = -2;
			}
		}
		k = strcmp(s.blockchoice, "B4");
		if (k == 0)
		{
			for (int i = 0; i < 100; i++)
			{
				if (arr[i] == num)
				{
					count++;
				}
			}
			if (count == 4)
			{
				count = -2;
			}
		}



		roomchoice = NULL;

		if (count == -2)
		{
			printf("Sorry the room is full. Please try another room.\n");
			getch(); system("CLS");
			fclose(studentID);


		}

		else
		{
			printf("You Want to Book Room %d?\n", num);
			printf("Please enter Y or N\n");
			scanf(" %c", &user);
			getch(); system("CLS");

			if (user == 'Y' || user == 'y')
			{
				fprintf(outfile, "%d\n", num);
				fclose(outfile);

				int serv = 0;
				char csa = ' ';
				printf("How many weeks do you want to stay?\n");
				scanf("%d", &s.weekstay);
				getch(); system("CLS");
				printf("\nEnter your First Name : ");
				scanf("%s", s.firstname);
				printf("\nEnter your Last Name  : ");
				scanf("%s", s.lastname);
				printf("\nEnter your Passport/IC Number : ");
				scanf("%s", s.passport);
				system("CLS");
				printf("\nAdittional services\n\n");
				printf("1: - Internet Service\n");
				printf("2: - Gym Service\n");
				printf("3: - Internet and Gym Service\n");
				printf("4: - No Service\n\n");
				printf("Please key in your selected service : ");
				scanf("%d", &serv);
				getch(); system("CLS");

				if (serv == 1)
				{
					k = strcmp(s.blockchoice, "A1");
					if (k == 0)
					{
						s.totalamount = (roomprice + 40) * s.weekstay;
						strcpy(s.hostelservice, "Internet");
					}
					k = strcmp(s.blockchoice, "B2");
					if (k == 0)
					{
						s.totalamount = (roomprice + 20) * s.weekstay;
						strcpy(s.hostelservice, "Internet");
					}


					k = strcmp(s.blockchoice, "B3");
					if (k == 0)
					{
						s.totalamount = (roomprice + 15) * s.weekstay;
						strcpy(s.hostelservice, "Internet");
					}
					k = strcmp(s.blockchoice, "B4");
					if (k == 0)
					{
						s.totalamount = (roomprice + 10) * s.weekstay;
						strcpy(s.hostelservice, "Internet");
					}
				}
				else if (serv == 2)
				{
					s.totalamount = (roomprice + 10) * s.weekstay;
					strcpy(s.hostelservice, "Gym");

				}
				else if (serv == 3)
				{
					if (!strcmp(s.blockchoice, "A1") || !strcmp(s.blockchoice, "a1"))
					{
						s.totalamount = (roomprice + 40 + 10) * s.weekstay;
						strcpy(s.hostelservice, "Internet and Gym");
					}
					else if (!strcmp(s.blockchoice, "B2") || !strcmp(s.blockchoice, "b2"))
					{
						s.totalamount = (roomprice + 20 + 10) * s.weekstay;
						strcpy(s.hostelservice, "Internet and Gym");
					}
					else if (!strcmp(s.blockchoice, "B3") || !strcmp(s.blockchoice, "b3"))
					{
						s.totalamount = (roomprice + 15 + 10) * s.weekstay;
						strcpy(s.hostelservice, "Internet and Gym");
					}
					else if (!strcmp(s.blockchoice, "B4") || !strcmp(s.blockchoice, "b4"))
					{
						s.totalamount = (roomprice + 10 + 10) * s.weekstay;
						strcpy(s.hostelservice, "Internet and Gym");
					}

				}
				else if (serv == 4)
				{
					s.totalamount = roomprice * s.weekstay;
					strcpy(s.hostelservice, "No Service");

				}
				int a = num;
				

				printf("StudentID       : TP%s\n", s.studentid);
				printf("First name      : %s\n", s.firstname);
				printf("Last name       : %s\n", s.lastname);
				printf("Passport/IC     : %s\n", s.passport);
				printf("Gender          : %s\n", s.gender);
				printf("Block chosen    : %s\n", s.blockchoice);
				printf("Room chosen     : %d\n", a);
				printf("Service chosen  : %s\n", s.hostelservice);
				printf("Weeks stay      : %d\n", s.weekstay);
				printf("Total amount due: %d\n", s.totalamount);
				printf("Booked	at      : %s\n", ctime(&currentTime));
				printf("Press any key to continue\n\n");
				getch(); system("CLS");

		
				fprintf(studentID3, "%s\n%s\n%s\n%s\n%s\n%s\n%d\n%s\n%d\n%d\n%s", s.studentid, s.firstname, s.lastname, s.passport, s.gender, s.blockchoice, a, s.hostelservice, s.weekstay, s.totalamount, ctime(&currentTime));
				fclose(studentID3);
				studentmenu();
			}
			else if (user == 'N' || user == 'n')
			{
				fclose(studentID);

				_fcloseall();
				//deleting files
				remove(studentid);

			}
		}
	}
}

void payment(char filename[100])

{
	char chd;
	char ch;
	char line[11][11];
	struct bookingfix s;
	int count, paymentMade, number, date, year;
	char day[10], month[10], time[20], data[100];
	FILE *filePtrOld, *filePtrNew;
	filePtrOld = fopen(filename, "r");
	int num = 0;
	char id[10];
	int i = 0;
	int k1 = 0;
	int k2 = 0;
	if (filePtrOld == NULL)
	{
		printf("Student didn't exist\n");
		getch(); system("CLS");
		studentmenu();
	}
	else 
	{
		while (fgets(line[i], 100, filePtrOld))
		{

			{
				line[i][strlen(line[i]) - 1] = '\0';
			}
			i++;
		}
		printf("%s", "Outstanding balance:");

		int kki = atoi(line[9]);

		printf("%d\n", kki);
		if (kki > 0)
		{
			printf("Enter the amount of payment:\n");
			scanf("%d", &paymentMade);

			int pay = kki - paymentMade;

			if (pay < 0)
			{
				printf("Your payment is greater then the total payable\n");
				printf("Payment failed\n\n");
				printf("Press any key to continue\n\n");
				getch(); system("CLS");
			}
			else if (pay > 0)
			{
				printf("Payment succeed\n");
				printf("You still have outstanding balance : %d RM\n\n", pay);
				printf("Press any key to continue\n\n");
				filePtrNew = fopen(filename, "w");
				fprintf(filePtrNew, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%d\n%s", line[0], line[1], line[2], line[3], line[4], line[5], line[6], line[7], line[8], pay, line[10]);
				fclose(filePtrNew);
				getch(); system("CLS");
			}
			else
			{
				printf("Payment succeed. Thank you\n\n");
				printf("Press any key to continue\n\n");
				filePtrNew = fopen(filename, "w");
				fprintf(filePtrNew, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%d\n%s", line[0], line[1], line[2], line[3], line[4], line[5], line[6], line[7], line[8], pay, line[10]);
				fclose(filePtrNew);
				getch(); system("CLS");
			}
		}

		else
		{
			printf("You don't have any outstanding balance");
			getch(); system("CLS");
		}
		printf("\n\n\n");
		main();
	}
}


void changingRoom(char filename2[100], char filename[100])
{
	char ch;
	char line[11][11];
	char line2[11][11];
	struct bookingfix s;
	int count, paymentMade, number, date, year;
	char day[10], month[10], time[20], data[100];
	FILE *filePtrOld, *filePtrNew, *filePtrOld2, *filePtrOld3;
	filePtrOld = fopen(filename2, "r");
	int num = 0;
	char studentid[10];
	int i = 0;
	int k1 = 0;
	int k2 = 0;

	int kki = atoi(line[9]);

	printf("%d\n", kki);
	if (filePtrOld == NULL)
	{
		printf("Student didn't exist\n");
		getch(); system("CLS");
		studentmenu();
	}
	else
	{
		{
			while (fgets(line[i], 100, filePtrOld))
			{
				line[i][strlen(line[i]) - 1] = '\0';
				i++;
			}
			char m[15];
			char n[15];
			int saw = 0;
			strcpy(m, line[5]);
			strcpy(n, line[6]);


			printf("Your Block is %s\n", &m);
			printf("Your Room is %s\n", &n);
			int arr[100];

			int index = 0;
			int masaw = atoi(n);

			printf("Enter new room number that you want to book:");
			int num = 0;
			int k = 0;
			scanf("%d", &num);
			int ss = 0;
			char awd[100];
			strcpy(awd, m);
			strcat(awd, ".txt");
			FILE *studentID2 = fopen(awd, "r");
			while ((ch = fgetc(studentID2)) != EOF)
			{
				if (ch == '\n')
				{
					ss++;
				}
				else
					if (arr[ss] == '0')
					{
						arr[ss] = ch - '0';
					}
					else
					{
						saw = ch - '0';
						if (k == masaw)
						{
							index = ss;
						}

					}
			}
			k = 0;
			filePtrOld2 = fopen(awd, "w");
			i = 0;
			for (int d = 0; d < ss; d++)
			{
				if (i == index)
				{
					fprintf(filePtrOld2, "%d\n", num);
				}
				else
					fprintf(filePtrOld2, "%d\n", num);
			}
			fclose(filePtrOld2);
			count = 0;
			k = 0;


			k = strcmp(m, "A1");
			if (k == 0)
			{
				for (int i = 0; i < 100; i++)
				{
					if (arr[i] == num)
					{
						count++;
					}
				}
				if (count == 1)
				{
					count = -2;
				}
			}

			k = strcmp(m, "B2");
			if (k == 0)
			{
				for (int i = 0; i < 100; i++)
				{
					if (arr[i] == num)
					{
						count++;
					}
				}
				if (count == 2)
				{
					count = -2;
				}
			}
			k = strcmp(m, "B3");
			if (k == 0)
			{
				for (int i = 0; i < 100; i++)
				{
					if (arr[i] == num)
					{
						count++;
					}
				}
				if (count == 3)
				{
					count = -2;
				}
			}
			k = strcmp(m, "B4");
			if (k == 0)
			{
				for (int i = 0; i < 100; i++)
				{
					if (arr[i] == num)
					{
						count++;
					}
				}
				if (count == 4)
				{
					count = -2;
				}
			}
			if (count == -2)
			{
				printf("Sorry the room is full. Please try another room.\n");

			}

			else
			{
				char userChoice1 = ' ';
				printf("You Want to Book Room %d?\n", num);
				printf("Please use Y or N\n");
				scanf(" %c", &userChoice1);

				if (userChoice1 == 'Y' || userChoice1 == 'y')
				{
					printf("You have changed your room to %d", num);
					filePtrOld3 = fopen(filename2, "w");

					fprintf(filePtrOld3, "%s\n%s\n%s\n%s\n%s\n%s\n%d\n%s\n%s\n%s\n%s", line[0], line[1], line[2], line[3], line[4], line[5], num, line[7], line[8], line[9], line[10]);
					fclose(filePtrOld3);
					system("CLS");

				}
				else
				{
					main();
				}
			}
		}

	}
		

	printf("\n\n\n");
	_fcloseall();
	main();

}
