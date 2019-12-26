CFLAGS = -Wall -Werror

all: frist second

frist: regular-expression.cc 
	g++ $^ -o $@ $(CFLAGS)

second: variable-arguments.cc
	g++ $^ -o $@ $(CFLAGS)

check:
	@echo

distcheck:
	@echo
:
clean: 							
	@rm -vf frist second		
