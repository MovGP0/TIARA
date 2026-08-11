/* Ghidra address: 00c5a690 */
/* Ghidra symbol: FUN_00c5a690 */


void FUN_00c5a690(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  FUN_0082a320(param_1,param_2,param_3,param_4,param_5);
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x340),0);
  }
  return;
}

