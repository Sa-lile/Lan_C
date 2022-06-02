ristorante: date.o ingredient.o pizza.o pizzeria.o main.c
	gcc date.o ingredient.o pizza.o pizzeria.o main.c -o ristorante 

date.o: date.c
	gcc -c date.c
ingredient.o : ingredient.c
	gcc -c ingredient.c
pizza.o: pizza.c
	gcc -c pizza.c
pizzeria.o: pizzeria.c
	gcc -c pizzeria.c 

MrProper:
	rm -f *.o