#top level makefile
LIBSDIR = libs
LIBS = libalgorithm
PROGS = application
BUILDDIR = build

RM = rm -f -r

.PHONY: createlibs
#build lib

#build application
all: createprogs

createprogs : $(PROGS)
$(PROGS): $(LIBS)
	cd $@; \
	make all
	


createlibs: $(LIBS)
$(LIBS):
	cd $(LIBSDIR)/$@; \
	make all

#clean all build directories
clean:
	cd $(LIBSDIR)/$(LIBS); \
	$(RM) $(BUILDDIR)
	cd $(PROGS); \
	$(RM) $(BUILDDIR)
	
		