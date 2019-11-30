all: clean app 

app:
	g++ -I"./soft" -o lib/app.x soft/app.cpp soft/nuitrack.cpp


clean:
	rm ./lib/* || exit 0
