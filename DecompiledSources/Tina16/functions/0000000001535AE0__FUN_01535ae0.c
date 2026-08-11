/* Ghidra address: 01535ae0 */
/* Ghidra symbol: FUN_01535ae0 */


void FUN_01535ae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x7e0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x700),*(undefined8 *)(lVar1 + 0x995));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(lVar1 + 0x99d));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x708),*(undefined2 *)(lVar1 + 0x993));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x710),*(undefined1 *)(lVar1 + 0x9a5));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x718),*(undefined1 *)(lVar1 + 0x9a6));
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a7) >> 8),(*(ushort *)(lVar1 + 0x9a7) & 1) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))
            (*(longlong **)(param_1 + 0x750),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a7) >> 8),(*(ushort *)(lVar1 + 0x9a7) & 2) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
            (*(longlong **)(param_1 + 0x758),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a7) >> 8),(*(ushort *)(lVar1 + 0x9a7) & 4) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
            (*(longlong **)(param_1 + 0x768),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a7) >> 8),
                      (*(ushort *)(lVar1 + 0x9a7) & 0x20) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))
            (*(longlong **)(param_1 + 0x760),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a7) >> 8),
                      (*(ushort *)(lVar1 + 0x9a7) & 0x40) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))
            (*(longlong **)(param_1 + 0x7a8),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9ab) >> 8),(*(ushort *)(lVar1 + 0x9ab) & 1) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
            (*(longlong **)(param_1 + 0x7b0),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9ab) >> 8),(*(ushort *)(lVar1 + 0x9ab) & 2) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
            (*(longlong **)(param_1 + 0x7c0),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9ab) >> 8),
                      (*(ushort *)(lVar1 + 0x9ab) & 0x20) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x268))
            (*(longlong **)(param_1 + 0x7b8),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9ab) >> 8),
                      (*(ushort *)(lVar1 + 0x9ab) & 0x40) != 0));
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))
            (*(longlong **)(param_1 + 2000),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9ab) >> 8),
                      (*(ushort *)(lVar1 + 0x9ab) & 0x80) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))
            (*(longlong **)(param_1 + 0x7c8),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9ab) >> 8),
                      (*(ushort *)(lVar1 + 0x9ab) & 0x10) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
            (*(longlong **)(param_1 + 0x788),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a9) >> 8),(*(ushort *)(lVar1 + 0x9a9) & 2) != 0)
            );
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
            (*(longlong **)(param_1 + 0x798),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a9) >> 8),
                      (*(ushort *)(lVar1 + 0x9a9) & 0x20) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
            (*(longlong **)(param_1 + 0x790),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a9) >> 8),
                      (*(ushort *)(lVar1 + 0x9a9) & 0x40) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
            (*(longlong **)(param_1 + 0x780),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a9) >> 8),
                      (*(ushort *)(lVar1 + 0x9a9) & 0x80) != 0));
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
            (*(longlong **)(param_1 + 0x778),
             CONCAT11((char)(*(ushort *)(lVar1 + 0x9a9) >> 8),
                      (*(ushort *)(lVar1 + 0x9a9) & 0x100) != 0));
  return;
}

