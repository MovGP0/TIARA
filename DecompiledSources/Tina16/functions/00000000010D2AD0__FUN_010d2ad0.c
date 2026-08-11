/* Ghidra address: 010d2ad0 */
/* Ghidra symbol: FUN_010d2ad0 */


void FUN_010d2ad0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 local_408 [256];
  undefined4 local_308;
  undefined2 uStack_304;
  undefined1 local_208;
  undefined4 local_204;
  undefined1 local_1f0 [472];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_204 = 0;
  local_208 = 1;
  local_308 = 0x62616c05;
  uStack_304 = 0x6c65;
  FUN_00416910(local_408,local_res10[0],0xff);
  FUN_00415020(local_1f0,local_408,0x50);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  FUN_00414480(local_res10);
  return;
}

