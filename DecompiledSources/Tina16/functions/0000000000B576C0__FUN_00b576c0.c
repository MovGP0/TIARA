/* Ghidra address: 00b576c0 */
/* Ghidra symbol: FUN_00b576c0 */


void FUN_00b576c0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

