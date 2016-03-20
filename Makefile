lab2: lab2.o BMI.o
	g++ -o lab2 lab2.o BMI.o

lab2.o: lab2.cpp lab2.h
	g++ -c lab2.cpp
	
BMI.o: BMI.cpp lab2.h
	g++ -c BMI.cpp
clean:
	rm lab2 *.o
