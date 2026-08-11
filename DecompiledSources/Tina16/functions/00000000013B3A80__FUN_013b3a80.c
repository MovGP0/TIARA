/* Ghidra address: 013b3a80 */
/* Ghidra symbol: FUN_013b3a80 */


void FUN_013b3a80(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 local_2a8 [640];
  undefined4 local_28;
  
  local_2a8[0] = 6;
  local_28 = param_2;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,local_2a8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

