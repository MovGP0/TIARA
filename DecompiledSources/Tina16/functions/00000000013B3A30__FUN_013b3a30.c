/* Ghidra address: 013b3a30 */
/* Ghidra symbol: FUN_013b3a30 */


void FUN_013b3a30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_2a8 [600];
  undefined8 local_50;
  
  local_2a8[0] = 5;
  local_50 = param_2;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,local_2a8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

