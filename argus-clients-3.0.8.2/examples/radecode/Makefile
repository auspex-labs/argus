# 
#  Argus Software
#  Copyright (c) 2000-2016 QoSient, LLC
#  All rights reserved.
# 
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2, or (at your option)
#  any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
# 
#
# @(#) $Header: //depot/argus/clients/examples/radecode/Makefile.in#8 $ (LBL)

#
# Various configurable paths (remember to edit Makefile.in, not Makefile)
#
NOOP = $(SHELL) -c true
NOECHO = @

# Top level hierarchy

prefix = /usr/local
exec_prefix = ${prefix}
datarootdir = ${prefix}/share

# Pathname of directory to install the system binaries
SBINDIR = ${exec_prefix}/sbin
# Pathname of directory to install the system binaries
BINDIR = ${exec_prefix}/bin
# Pathname of directory to install the include files
INCLDEST = ${prefix}/include
# Pathname of directory to install the library
LIBDEST =  ${exec_prefix}/lib
# Pathname of directory to install the man page
MANDEST = ${datarootdir}/man

# Pathname of directory to install the man page
PERL = /usr/bin/perl

# VPATH
srcdir = .


#
# You shouldn't need to edit anything below.
#

INSTALL    = /usr/bin/install -c
INSTALLBIN = ../../bin

PROGS = $(INSTALLBIN)/radecode

all: $(PROGS)

$(INSTALLBIN)/radecode: radecode.pl
	sed 's+@BINDIR@+$(DESTDIR)$(BINDIR)+' radecode.pl | \
	sed 's+@PERLBIN@+$(PERL)+' > $@
	chmod +x $@

CLEANFILES = $(PROGS)

install: force all
	[ -d $(DESTDIR)$(BINDIR) ] || \
		(mkdir -p $(DESTDIR)$(BINDIR); chmod 755 $(DESTDIR)$(BINDIR))
	$(INSTALL) $(INSTALLBIN)/radecode $(DESTDIR)$(BINDIR)

uninstall: force all
	rm -f $(DESTDIR)$(BINDIR)/radecode

clean:
	rm -f $(CLEANFILES)

distclean:
	rm -f $(CLEANFILES) Makefile

tags: $(TAGFILES)
	ctags -wtd $(TAGFILES)

force: /tmp
depend: force
	$(NOECHO) $(NOOP)
