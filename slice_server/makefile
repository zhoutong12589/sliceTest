


CC=aCC

SERVER=server
#添加-mt参数在编译和链接参数中是ICE的要求，这样才能正确的使用有方法的类ice文件映射的头文件
#才能正常运行，否则ice会提示报错
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
