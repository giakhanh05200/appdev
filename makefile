OBJ=score.o eval.o classify.o output.o getscore.o 
APPNAME=score 
#rule to generate executable
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c 
	gcc -g -c -o $@ $<
#clean rule
clean :
	rm $(OBJ) $(APPNAME) 

#clean
//clean
