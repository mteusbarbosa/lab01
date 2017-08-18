CC=g++

SRC_DIR=./src
OBJ_DIR=./build
DOC_DIR=./doc
DATA_DIR=./data
test_DIR=./test
BIN_DIR=./bin
INC_DIR=./include
IMG_DIR=./images

CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean doxy debug doc

all: multimat
		
debug: CFLAGS += -g -O0 
debug: multimat

multimat: $(OBJ_DIR)/main.o $(OBJ_DIR)/arquivo.o

	@echo	"ligando o alvo $@"
	@echo "-------------------"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "-------------------"
	@echo	"executavel de sequencia criado em $(BIN_DIR)"

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(INC_DIR)/multiplica.h $(INC_DIR)/arquivo.h 
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/arquivo.o: $(SRC_DIR)/arquivo.cpp $(INC_DIR)/arquivo.h 
	$(CC) -c $(CFLAGS) -o $@ $<

doc:
	doxygen

gnuplot:
	$(RM) $(IMG_DIR)/*
	gnuplot -e "set term unknown" $(DATA_DIR)/gnuplot/linegraph.gnuplot

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DATA_DIR)/output/*
