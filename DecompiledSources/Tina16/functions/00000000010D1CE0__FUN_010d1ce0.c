/* Ghidra address: 010d1ce0 */
/* Ghidra symbol: FUN_010d1ce0 */


void FUN_010d1ce0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined1 local_308 [256];
  undefined1 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined4 local_1f0;
  undefined1 local_198;
  undefined4 local_190;
  undefined1 local_78;
  int local_70;
  
  local_204 = param_6;
  local_208 = 0;
  local_1f8 = 3;
  local_198 = 3;
  local_78 = 3;
  local_70 = *(int *)(param_5 + 0x10) + -1;
  local_200 = param_2;
  local_1f0 = param_3;
  local_190 = param_4;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

