#! /bin/sh
cd src;
make -f Makefile.gcw0;
#mipsel-linux-gcc -o ../bin/jzintv jzintv.o plat/plat_gp2x.o pads/pads_cgc_linux.o cfg/cfg.o cfg/usage.o cfg/mapping.o misc/crc32.o misc/crc16.o misc/avl.o misc/ll.o misc/jzprint.o misc/file_crc32.o  plat/plat_sdl.o plat/plat_lib.o plat/gnu_getopt.o event/event.o event/event_tbl.o gfx/gfx.o gfx/gfx_scale.o gfx/gfx_prescale.o snd/snd.o mvi/mvi.o debug/debug.o debug/debug_dasm1600.o util/symtab.o debug/source.o periph/periph.o cp1600/cp1600.o cp1600/op_decode.o cp1600/op_exec.o cp1600/tbl/fn_cond_br.o cp1600/tbl/fn_dir_2op.o cp1600/tbl/fn_imm_2op.o cp1600/tbl/fn_impl_1op_a.o cp1600/tbl/fn_impl_1op_b.o cp1600/tbl/fn_ind_2op.o cp1600/tbl/fn_reg_1op.o cp1600/tbl/fn_reg_2op.o cp1600/tbl/fn_rot_1op.o cp1600/tbl/formats.o cp1600/emu_link.o mem/mem.o icart/icart.o icart/icartrom.o icart/icartbin.o icart/icartfile.o stic/stic.o  pads/pads.o pads/pads_cgc.o ay8910/ay8910.o ivoice/ivoice.o speed/speed.o minilzo/minilzo.o file/file.o file/elfi.o lzoe/lzoe.o bincfg/bincfg.o bincfg/bincfg_grmr.tab.o bincfg/bincfg_lex.o  bincfg/legacy.o gif/gif_enc.o gif/lzw_enc.o demo/demo.o  joy/joy.o mouse/mouse.o name/name.o name/name_list.o serializer/serializer.o jlp/jlp.o scale/scale2x.o scale/scale3x.o -O0 -g -Wall -W -Wshadow -Wpointer-arith -Wbad-function-cast -Wcast-qual    -I. -I/opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/include -I/opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/include/SDL -DGP2X -DGCWZERO     -DJZINTV_VERSION_MAJOR=0x01 -DJZINTV_VERSION_MINOR=0x00 -L/opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/lib -lpthread -lSDL -lSDL_image -lSDL_ttf -lSDL_gfx -lpng -lz -lc -lm -ldl ;
cd ..;
mksquashfs bin/ jzIntv.opk -all-root -noappend -no-exports -no-xattrs;
echo "\nAnd as if by magic, an opk appears ;)\n";