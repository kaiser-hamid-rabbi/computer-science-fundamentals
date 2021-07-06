user: main.o user.o teacher.o student.o
	g++ main.o user.o teacher.o student.o -o user

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

teacher.o: teacher.cpp
	g++ -c teacher.cpp

student.o: student.cpp
	g++ -c student.cpp

clean:
	rm *.o *.out user