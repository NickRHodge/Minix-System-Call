CFLAGS = -D_POSIX_SOURCE
LDFALGS =
CC = cc
LD = cc

TARG = a4

OBJS = a4.o mycall.o

$(TARG): $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(TARG)

clean:
	rm -f $(OBJS) $(TARG) core a.out
