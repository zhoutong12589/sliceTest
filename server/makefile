


CC=g++
SERVER=server

LIB = -L$(ICE_HOME)/lib -lIce \
      -lpthread 

OBJS = main.o ../head.o 

INC = -I. -I$(ICE_HOME)/include -I../.

$(SERVER): $(OBJS)
	$(CC) -o $(SERVER)  $(OBJS) $(LFLAGS) $(LIB)


$(OBJS): %.o:%.cpp
	$(CC) -g -c $(INC) $< -o $@


.PHONY:clean
clean:
	rm -rf $(OBJS) $(SERVER)
