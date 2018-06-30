SOURCES := ../src/
VPATH := $(SOURCES)
DEPDIR := .d
$(shell mkdir -p $(DEPDIR) >/dev/null)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.Td
SRCS := $(foreach dir,$(SOURCES),$(wildcard $(dir)/*.c))
OBJS_L :- $(subst .c,.o,$(SRCS))
#LIBS := $(shell pkg-config --libs)
CFLAGS := -Wall -Wextra -std=gnu99 -I ../include

COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(TARGET_ARCH)
POSTCOMPILE = @mv -f $(DEPDIR)/$*.Td $(DEPDIR)/$*.d && touch $@

debug : CFLAGS += -ggdb3 -g -O0 -D DEBUG
debug : damascusHawk
all: debug

damascusHawk : $(OBJS)
  $(COMPILE.c) -o $@ $^ $(LIBS)
  
 %.o : %.c
 %.o : %.c $(DEPDIR)/%.d
  $(COMPILE.c) -c $(OUTPUT_OPTIONS) $<
  $(POSTCOMPILE)
  
$(DEPDIR)/%.d: ;
.PRECIOUS: $(DEPDIR)/%.d

.PHONY: clean
clean:
  rm -f *.o damascusHawk
