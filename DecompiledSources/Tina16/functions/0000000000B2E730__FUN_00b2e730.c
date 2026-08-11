/* Ghidra address: 00b2e730 */
/* Ghidra symbol: FUN_00b2e730 */


void FUN_00b2e730(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x20) + -0x20))(*(longlong **)(param_1 + 0x20),1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + -0x20))(*(longlong **)(param_1 + 0x28),1);
  (**(code **)(**(longlong **)(param_1 + 0x30) + -0x20))(*(longlong **)(param_1 + 0x30),1);
  (**(code **)(**(longlong **)(param_1 + 0x18) + -0x20))(*(longlong **)(param_1 + 0x18),1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

