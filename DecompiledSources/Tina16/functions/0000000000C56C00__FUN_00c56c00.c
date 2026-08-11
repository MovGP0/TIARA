/* Ghidra address: 00c56c00 */
/* Ghidra symbol: FUN_00c56c00 */


void FUN_00c56c00(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)(param_1 + 0x521) = 0;
  if (*(char *)(param_1 + 0x520) == '\x01') {
    FUN_0064e190(param_1,0);
  }
  return;
}

