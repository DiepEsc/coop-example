CC=gcc

main: maino
	$(CC) *.o -o main -lm
	./main

maino: ChuNhat HinhVuong TamGiac
	$(CC) -c main.c

Class: Object.h ObjectAlone.h Class.h Class.c
	$(CC) -c Class.c

Object: Object.c Object.h ObjectAlone.h Class.h
	$(CC) -c Object.c

ClassObj: Class Object

DaGiac: DaGiac.c DaGiac.h ClassObj
	$(CC) -c DaGiac.c

ChuNhat: ChuNhat.c ChuNhat.h DaGiac
	$(CC) -c ChuNhat.c

HinhVuong: HinhVuong.c HinhVuong.h ChuNhat
	$(CC) -c HinhVuong.c

TamGiac: TamGiac.c TamGiac.h DaGiac
	$(CC) -c TamGiac.c

clean: 
	rm *.o
	rm main


# test1: test.c test.h
# 	$(CC) -c test.c

# test2: test2.c test.h
# 	$(CC) -c test2.c
	

# testcode: test1 test2
# 	$(CC) test.o test2.o -o testcode
# 	./testcode
