


run:	time
	clear
	@./output/time_calc
	@echo "\n\n\n"

time: time_calc.cpp
	@g++ -o ./output/time_calc ./time_calc.cpp