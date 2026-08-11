/* Ghidra address: 01cafbf0 */
/* Ghidra symbol: FUN_01cafbf0 */


void FUN_01cafbf0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x20) + -0x20))(*(longlong **)(param_1 + 0x20),1);
  (**(code **)(**(longlong **)(param_1 + 0x18) + -0x20))(*(longlong **)(param_1 + 0x18),1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

