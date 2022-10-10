# A segmentation fault on Verilator 4.228

## Debug output

```
%Error: Internal Error: ../src/example_0.1/src/cva6_pickled.sv:58287:23: ../V3Broken.cpp:172: Broken link in node (or something without maybePointedTo): 'm_classOrPackageNodep && !m_classOrPackageNodep->brokeExists()' @ ../V3AstNodeOther.h:1054
-node: CLASSORPACKAGEREF 0x55555b8568c0 <e474798> {d58287ax}  ariane_soc cpkg=0x55555b7970e0 -> PACKAGE 0x55555b7970e0 <e475682> {d57980aj}  ariane_soc  L0 [LIB] [NONE]
58287 |     .AXI_ID_WIDTH   ( ariane_soc::IdWidth ),
      |                       ^~~~~~~~~~
- V3Ast.cpp:1120:     Dumping ./Variane_mem_top_990_final.tree
- V3Broken.cpp:326:   Broken called under broken, skipping recursion.
- V3StatsReport.cpp:223:statsReport: 
%Error: Internal Error: Aborting since under --debug
Aborted (core dumped)
%Error: export VERILATOR_ROOT=
%Error: setarch --addr-no-randomize /usr/local/bin/verilator_bin_dbg -f example_0.1.vc -CFLAGS -std=c++11\ -Wall\ -g\ -O0 -LDFLAGS -pthread\ -lutil -debug -Wall -Wno-PINCONNECTEMPTY -Wno-fatal -Wno-BLKANDNBLK
%Error: Command Failed setarch --addr-no-randomize /usr/local/bin/verilator_bin_dbg -f example_0.1.vc -CFLAGS -std=c++11\ -Wall\ -g\ -O0 -LDFLAGS -pthread\ -lutil -debug -Wall -Wno-PINCONNECTEMPTY -Wno-fatal -Wno-BLKANDNBLK
make: *** [Makefile:16: Variane_mem_top.mk] Error 134
ERROR: Failed to build ::example:0.1 : '['make']' exited with an error: 2
```

## How to reproduce

1. Clone this repo

```
git clone https://github.com/flaviens/verisegf
cd verisegf
```

2. Make sure you have FuseSoC installed

```
pip install fusesoc
```

3. Add the library and launch the compilation

```
fusesoc library add verisegf .
fusesoc run verisegf
```