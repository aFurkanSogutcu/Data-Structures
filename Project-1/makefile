all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/BasamakDugum.cpp -o ./lib/BasamakDugum.o
	g++ -c -I "./include" ./src/BasamakListe.cpp -o ./lib/BasamakListe.o
	g++ -c -I "./include" ./src/SayilarDugum.cpp -o ./lib/SayilarDugum.o
	g++ -c -I "./include" ./src/SayilarListe.cpp -o ./lib/SayilarListe.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
bagla:
	g++ ./lib/BasamakDugum.o ./lib/BasamakListe.o ./lib/SayilarDugum.o ./lib/SayilarListe.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program