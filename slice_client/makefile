


CC=aCC

SERVER=client

CFLAGS = -mt

LFLAGS = -mt

LIB=-L$(ICE_HOME)/lib -lIce -lIceUtil \
      -L/usr/local/lib -lbz2 \
      -lxti -lrt -ldld -lpthread -lcl 

OBJS=main.o ../slice_h/test1.o 

INC=-I. -I$(ICE_HOME)/include \
      -I../slice_h

$(SERVER): $(OBJS)
	$(CC) -o $(SERVER)  $(OBJS) $(LFLAGS) $(LIB)


$(OBJS): %.o:%.cpp
	$(CC) -g -c $(CFLAGS) $(INC) $< -o $@


.PHONY:clean
clean:
	rm -rf $(OBJS) $(SERVER)
