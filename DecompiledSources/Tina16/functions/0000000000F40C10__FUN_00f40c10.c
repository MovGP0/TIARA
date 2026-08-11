/* Ghidra address: 00f40c10 */
/* Ghidra symbol: FUN_00f40c10 */


void FUN_00f40c10(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined1 *)(param_1 + 0x33a) = 0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x340),0);
  }
  FUN_0082a320(param_1,param_2,param_3,param_4,param_5);
  return;
}

