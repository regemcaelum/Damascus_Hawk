SOURCES := ../src/
VPATH := $(SOURCES)
DEPDIR := .d
$(shell mkdir -p $(DEPDIR) >/dev/null)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.Td
SRCS := $(foreach dir,$(SOURCES),$(wildcard $(dir)/*.cpp))
OBJS_L :- $(subst .cpp,.o,$(SRCS))
CFLAGS := -Wall -Wextra -std=c++17 -I ../includes

COMPILE.cpp = $(CXX) $(DEPFLAGS) $(CFLAGS) $(TARGET_ARCH) $(SRCS)
POSTCOMPILE = @mv -f $(DEPDIR)/$*.Td $(DEPDIR)/$*.d && touch $@

test : CFLAGS += -ggdb3 -g -O0 -D DEBUG
test : damascusHawk.so
all: test

damascusHawk.so : $(OBJS)
  $(COMPILE.cpp) -o $@ $^

 %.o : %.c
 %.o : %.c $(DEPDIR)/%.d
  $(COMPILE.cpp) -c $(OUTPUT_OPTIONS) $<
  $(POSTCOMPILE)

$(DEPDIR)/%.d: ;
.PRECIOUS: $(DEPDIR)/%.d

.PHONY: clean
clean:
  rm -f *.o damascusHawk
