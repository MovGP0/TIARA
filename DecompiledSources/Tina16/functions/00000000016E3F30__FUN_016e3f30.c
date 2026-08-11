/* Ghidra address: 016e3f30 */
/* Ghidra symbol: FUN_016e3f30 */


void FUN_016e3f30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0xb0) + -0x20))(*(longlong **)(param_1 + 0xb0),1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

