ifdef OS
	RM = del /Q
	FixPath = $(subst /,\,$1)
else
	ifeq ($(shell uname), Linux)
		RM = rm -f
		FixPath = $1
	endif
endif
SOURCES := ../src
VPATH := $(call FixPath,$(SOURCES))
DEPDIR := .d
$(shell mkdir -p $(DEPDIR) >/dev/null)
DEPFLAGS = -MT $@ -MMD -MP
SRCS := $(foreach dir,$(VPATH),$(call FixPath,$(wildcard *.cpp $(dir)/*.cpp)))
OBJS_L := $(subst .cpp,.o,$(SRCS))
CXXFLAGS := -Wall -Wextra -std=c++23 -I ../include

COMPILE.cpp = $(CXX) $(DEPFLAGS) $(CXXFLAGS) $(SRCS)
POSTCOMPILE = @mv -f $(DEPDIR)/$*.Td $(DEPDIR)/$*.d && touch $@

debug : CXXFLAGS += -ggdb3 -g -O0 -D DEBUG
debug : damascusHawk
all: debug

damascusHawk : $(OBJS)
	$(COMPILE.cpp) -o $@ $^

 %.o : %.cpp
 %.o : %.cpp $(DEPDIR)/%.d
	$(COMPILE.cpp) -c $(OUTPUT_OPTIONS) $<
	$(POSTCOMPILE)

$(DEPDIR)/%.d: ;
.PRECIOUS: $(DEPDIR)/%.d

.PHONY: clean
clean:
	$(RM) *.o damascusHawk.*
