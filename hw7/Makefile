myprog:main.cpp Cube.cpp Cube.h Cylinder.cpp Cylinder.h

    g++ main.cpp Cube.cpp Cylinder.cpp -o myprog

main.o:main.cpp Cube.h Cylinder.h

    g++ -c main.cpp 

Cylinder.o:Cylinder.cpp Cylinder.h

    g++ -c Cylinder.cpp

Cube.o:Cube.cpp Cube.h

    g++ -c Cube.cpp 

clean:

    rm *.o myprog
