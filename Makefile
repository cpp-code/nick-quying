CFLAGS = -Wall -Werror

all: frist

frist: regular-expression.cc
	g++ $^ -o $@ $(CFLAGS)

check:
	@echo

distcheck:
	@echo

clean: 
	@rm -vf frsit




