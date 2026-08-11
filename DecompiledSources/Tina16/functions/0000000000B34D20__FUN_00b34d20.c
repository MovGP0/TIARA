/* Ghidra address: 00b34d20 */
/* Ghidra symbol: FUN_00b34d20 */


void FUN_00b34d20(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x40) + -0x20))(*(longlong **)(param_1 + 0x40),1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

