
######################################INCLUDES#################################
include ../macros.mk

#######################################VARS####################################
CXX_FLAGS+=-frtti
SFCPP01=safercpp-arr
SRCS=$(wildcard *.cpp)
ifeq ($(shell $(LLVM_CONF) --has-rtti), NO)
$(error your llvm-config says you dont have rtti. you cant build safercpparr without rtti support.)
endif
######################################RULES####################################
.DEFAULT: all

.PHONY: all clean help

all: $(SFCPP01)

%cpp:.depend 

.depend:$(SRCS)
	$(CXX) -MM $(CXX_FLAGS) $^ > ./.depend

-include .depend

.cpp.o:
	$(CXX) $(CXX_FLAGS) -c $< -o $@

$(SFCPP01): $(SFCPP01).o ../mutator_aux.o
	$(CXX) $^ $(LD_FLAGS) -o $@

clean:
	rm -f *.o *~ $(SFCPP01)
	rm ./.depend

help:
	@echo 'There is help.'
	@echo 'All is the defualt target.'
	@echo 'Clean runs clean.'
	@echo 'For a more complete and detaild list of BUILD_MODE and other things look at the main makefiles help under project root.'
