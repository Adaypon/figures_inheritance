CC=g++
SRC_PATH=src
OBJ_PATH=obj
SOURCES=main.cpp Figure.cpp Triangle.cpp RTriangle.cpp ITriangle.cpp ETriangle.cpp Parallelogram.cpp Rectangle.cpp Square.cpp Ellipse.cpp Circle.cpp # список исходников
OBJECTS=$(SOURCES:.cpp=.o) # список объектных файлов
TARGET=figures # имя бинарника

all: $(TARGET)

$(TARGET): $(OBJECTS) 
	$(CC) -o $@ $^ 
	[ -d $(OBJ_PATH)/ ] || mkdir -p $(OBJ_PATH)/
	mv ./*.o $(OBJ_PATH)/

%.o: $(SRC_PATH)/%.cpp 
	$(CC) -o $@ -c $<

clean:
	rm *.o || rm -rf $(OBJ_PATH)/ figures