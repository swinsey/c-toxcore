if BUILD_DHT_BOOTSTRAP

bin_PROGRAMS += DHT_bootstrap

DHT_bootstrap_SOURCES = ../other/DHT_bootstrap.c \
                        ../toxcore/DHT.h \
                        ../toxcore/friend_requests.h \
                        ../other/bootstrap_node_packets.h \
                        ../other/bootstrap_node_packets.c

DHT_bootstrap_CFLAGS = -I$(top_srcdir)/other \
                        $(LIBSODIUM_CFLAGS) \
                        $(NACL_CFLAGS)

DHT_bootstrap_LDADD =   $(LIBSODIUM_LDFLAGS) \
                        $(NACL_LDFLAGS) \
                        libtoxcore.la \
                        $(LIBSODIUM_LIBS) \
                        $(NACL_OBJECTS) \
                        $(NACL_LIBS) \
                        $(WINSOCK2_LIBS)

endif

EXTRA_DIST +=           $(top_srcdir)/other/DHTnodes \
                        $(top_srcdir)/other/tox.png
