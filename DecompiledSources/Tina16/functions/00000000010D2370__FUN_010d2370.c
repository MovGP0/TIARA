/* Ghidra address: 010d2370 */
/* Ghidra symbol: FUN_010d2370 */


void FUN_010d2370(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 local_408 [256];
  undefined4 local_308;
  undefined1 uStack_304;
  undefined1 local_208;
  undefined4 local_204;
  undefined1 local_1f0 [96];
  undefined8 local_190;
  undefined1 local_78;
  int local_70;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_204 = param_5;
  local_208 = 0x14;
  local_308 = 0x6c616304;
  uStack_304 = 0x6c;
  FUN_00416910(local_408,local_res10[0],0xff);
  FUN_00415020(local_1f0,local_408,0x50);
  local_78 = 3;
  local_70 = *(int *)(param_4 + 0x10) + -1;
  local_190 = param_3;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  FUN_00414480(local_res10);
  return;
}

