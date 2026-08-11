/* Ghidra address: 010d1c40 */
/* Ghidra symbol: FUN_010d1c40 */


void FUN_010d1c40(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 local_308 [256];
  undefined1 local_208;
  undefined4 local_204;
  int local_200;
  undefined1 local_1f8;
  undefined4 local_1f0;
  undefined1 local_198;
  undefined1 local_78;
  int local_70;
  
  local_204 = param_5;
  local_200 = param_2;
  if (param_2 == 0x10e) {
    local_200 = 0x119;
  }
  if (param_2 == 0x10f) {
    local_200 = 0x11a;
  }
  local_208 = 0;
  local_1f8 = 3;
  local_198 = 5;
  local_78 = 3;
  local_70 = *(int *)(param_4 + 0x10) + -1;
  local_1f0 = param_3;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

