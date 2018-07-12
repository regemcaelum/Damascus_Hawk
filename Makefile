.PHONY: debug release clean test doc
debug:
	$(MAKE) -C debug debug
release:
	$(MAKE) -C release release
test:
	$(MAKE) -C test test
doc:
	$(MAKE) -C doc doc
clean:
	$(MAKE) -C debug clean
	$(MAKE) -C release clean
	$(MAKE) -C test clean
	$(MAKE) -C doc clean

all: debug release
