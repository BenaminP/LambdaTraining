LIB = libalgorithm.a

CXX = g++
CPPFLAGS = -std=c++11 -I include -c

MKDIR = mkdir -p 
RM = rm -r

vpath %.cpp src
vpath %.h include

SRCDIR = src
SRC =  $(notdir $(wildcard $(SRCDIR)/*.cpp))

BUILDDIR = build
OBJS = $(addprefix $(BUILDDIR)/, $(SRC:.cpp=.o))


.INTERMEDIATE: $(OBJS)
	
all : $(LIB)

$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $(BUILDDIR)/$@ $^
	
$(OBJS): | $(BUILDDIR)

$(BUILDDIR):
	$(MKDIR) $@
	
$(BUILDDIR)/%.o: %.cpp
	$(CXX) $(CPPFLAGS) -o $@  $^


.PHONY: clean
clean:
	$(RM) build