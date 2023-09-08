TOPNAME = count

INC_PATH ?= 
GTKWAVE = gtkwave

VERILATOR = verilator
VERILATOR_ARGUMENTS += --cc --build
VERILATOR_ARGUMENTS += --Wall 
VERILATOR_ARGUMENTS += --exe
VERILATOR_ARGUMENTS += --trace
VERILATOR_TOP += --top-module $(TOPNAME) 

VERILATOR_INPUT += vsrc/*.v
VERILATOR_INPUT += csrc/*.cpp

OBJ_DIR = obj_dir

default: ver

all: default

ver:
	@echo
	@echo "----------Switch Exercise----------"
	@echo
	@echo "----------Verilator Compile--------"
	$(VERILATOR) $(VERILATOR_TOP) $(VERILATOR_ARGUMENTS) $(VERILATOR_INPUT)
	@echo
	@echo "----------Generating Wavefrom------"
	@rm -rf logs
	$(OBJ_DIR)/V$(TOPNAME) +trace
	@echo
	@echo "----------Done---------------------"
	@echo "You can make GTKwave to see the wavefroms." 

wave:
	@echo "Opening dump.vcd"
	$(GTKWAVE) $(TOPNAME).vcd

clean:
	rm -rf $(OBJ_DIR) $(TOPNAME).vcd

.PHONY: default all ver wave clean
