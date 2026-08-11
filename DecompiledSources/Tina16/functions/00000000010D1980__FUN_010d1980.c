/* Ghidra address: 010d1980 */
/* Ghidra symbol: FUN_010d1980 */


void FUN_010d1980(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 local_308 [256];
  undefined1 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_198;
  undefined1 local_78;
  int local_70;
  
  local_308[0] = 0;
  local_208 = 0;
  local_200 = 0x105;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_198 = 5;
  local_78 = 3;
  local_70 = *(int *)(param_3 + 0x10) + -1;
  local_204 = param_4;
  local_1e8 = param_2;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

