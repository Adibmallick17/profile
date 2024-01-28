proFile: src/mainA3.o src/countEmployees.o src/fireAll.o src/fireOne.o src/helperA3.o src/lookOnFullName.o src/lookOnId.o src/printAll.o src/printOne.o src/recruitEmployee.o src/sortEmployeesId.o
	gcc -Wall -std=c99 src/mainA3.o src/countEmployees.o src/fireAll.o src/fireOne.o src/helperA3.o src/lookOnFullName.o src/lookOnId.o src/printAll.o src/printOne.o src/recruitEmployee.o src/sortEmployeesId.o -o bin/proFile

mainA3.o: src/mainA3.c include/headerA3.h
	gcc -Wall -std=c99 -c src/mainA3.c

countEmployees.o: src/countEmployees.c include/headerA3.h
	gcc -Wall -std=c99 -c src/countEmployees.c

fireAll.o: src/fireAll.c include/headerA3.h
	gcc -Wall -std=c99 -c src/fireAll.c

fireOne.o: src/fireOne.c include/headerA3.h
	gcc -Wall -std=c99 -c src/fireOne.c

helperA3.o: src/helperA3.c include/headerA3.h
	gcc -Wall -std=c99 -c src/helperA3.c

lookOnFullName.o: src/lookOnFullName.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookOnFullName.c

lookOnId.o: src/lookOnId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookOnId.c

printAll.o: src/printAll.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printAll.c

printOne.o: src/printOne.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printOne.c

recruitEmployee.o: src/recruitEmployee.c include/headerA3.h
	gcc -Wall -std=c99 -c src/recruitEmployee.c

sortEmployeesId.o: src/sortEmployeesId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/sortEmployeesId.c

clean:
	rm -f *.o bin/proFile src/mainA3.o src/countEmployees.o src/fireAll.o src/fireOne.o src/helperA3.o src/lookOnFullName.o src/lookOnId.o src/printAll.o src/printOne.o src/recruitEmployee.o src/sortEmployeesId.o
