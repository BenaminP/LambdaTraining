PROG = algorithmTest

CXX = g++
CPPFLAGS = -std=c++11 -I include -c

MKDIR = mkdir -p 
RM = rm -r

vpath %.cpp src
 
vpath %.h 
vpath %.h include

INCLUDEDIR = \
	include \
	../libs/libalgorithm/include \

SRCDIR = src
SRC =  $(notdir $(wildcard $(SRCDIR)/*.cpp))

BUILDDIR = build
OBJS = $(addprefix $(BUILDDIR)/, $(SRC:.cpp=.o))

LIBDIR = ../libs/libalgorithm/build
LIB = algorithm
LDFLAGS = -L$(LIBDIR)

.INTERMEDIATE: all
	
all : $(PROG)


compile : $(OBJS)
$(PROG): $(OBJS)
	$(CXX) -o  $(BUILDDIR)/$@ $(LDFLAGS) $^ -l$(LIB)
	
$(OBJS): | $(BUILDDIR)

$(BUILDDIR):
	$(MKDIR) $@
	
$(BUILDDIR)/%.o: %.cpp
	$(CXX) $(CPPFLAGS)  -o $@  $^


.PHONY: clean
clean:
	$(RM) build