SRCDIR = src
TARGET = log
BINDIR = bin

all: clean compile done

.PHONY: all

clean:
	@echo "\033[90mCleaning files..."
	@rm -f $(BINDIR)/*.o
	@rm -f $(BINDIR)/*.out
	@rm -f $(BINDIR)/$(TARGET)

compile:
	@echo "\033[93mCompiling files..."
	@clang++ -arch x86_64 -o $(BINDIR)/$(TARGET) $(SRCDIR)/*.cpp

done:
	@echo "\033[92mFinished compiling!"

run:
	@./bin/log
