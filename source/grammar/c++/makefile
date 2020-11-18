OUTPUT=output
GENERATED=generated
# runtime from  https://www.antlr.org/download/
RUNTIME=./antlr4-cpp-runtime
CCARGS=-c -I $(RUNTIME)/antlr4-runtime/ -I $(GENERATED) -std=c++11	
LDARGS=-g
LIBS=$(RUNTIME)/lib/libantlr4-runtime.a
JAVA=/usr/bin/java
CC=g++
TYPE=qasm3
GRAMMAR=../qasm3
# This assumes you have antlr-4.8-complete.jar in the current directory.
# ANTLR4=$(JAVA) -jar antlr-4.8-complete.jar
ANTLR4=antlr

ANTLRGEN=BaseListener Lexer Listener Parser 
OBJS=$(addsuffix .o,$(addprefix $(OUTPUT)/$(GRAMMAR),$(ANTLRGEN)))
GSOURCES=$(addsuffix .cpp,$(addprefix $(GENERATED)/$(GRAMMAR),$(ANTLRGEN)))

.precious: $(GSOURCES)

all: parser

parser: dirs antlr4 $(TYPE).cpp $(OBJS)
	$(CC) $(CCARGS) $(TYPE).cpp  -o $(OUTPUT)/$(TYPE).o 
	$(CC) $(LDARGS) $(OUTPUT)/$(TYPE).o $(OBJS) $(LIBS) -o $(TYPE).exe

antlr4: $(GENERATED)/.generated;
 
$(GENERATED)/.generated: $(GRAMMAR).g4
	$(ANTLR4) -Dlanguage=Cpp -o $(GENERATED) $(GRAMMAR).g4
	@touch $(GENERATED)/.generated

$(OUTPUT)/%.o : $(GENERATED)/%.cpp
	$(CC) $(CCARGS) $< -o $@

$(GENERATED)/%.cpp: $(GENERATED)/.generated;

dirs:; mkdir -p $(OUTPUT) $(GENERATED) 
clean:; rm -rf $(OUTPUT) $(GENERATED)
