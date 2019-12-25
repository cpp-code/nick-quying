CFLAGS = -Wall -Werror

all: frsit

frsit: regular-expression.cc
	g++ $^ -o $@ $(CFLAGS)

check:
	@echo

distcheck:
	@echo

clean: 
	@rm -rf frsit




