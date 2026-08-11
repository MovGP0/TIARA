/* Ghidra address: 010d2cb0 */
/* Ghidra symbol: FUN_010d2cb0 */


void FUN_010d2cb0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 local_308 [64];
  undefined1 local_208;
  undefined4 local_204;
  undefined1 local_78;
  int local_70;
  
  local_204 = 0;
  local_208 = 7;
  local_308[0] = 0x706f6e03;
  local_78 = 3;
  local_70 = *(int *)(param_2 + 0x10) + -1;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

