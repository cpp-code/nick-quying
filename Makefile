CFLAGS = -Wall -Werror

all: frist second third

frist: regular-expression.cc 
	g++ $^ -o $@ $(CFLAGS)

second: variable-arguments.c
	gcc $^ -o $@ $(CFLAGS)

third: date-and-time.c
	gcc $^ -o $@ $(CFLAGS)

check:
	@echo

distcheck:
	@echo
:
clean: 							
	@rm -vf frist second third		
