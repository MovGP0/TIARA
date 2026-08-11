/* Ghidra address: 010d2770 */
/* Ghidra symbol: FUN_010d2770 */


void FUN_010d2770(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 local_408 [256];
  undefined8 local_308;
  undefined4 uStack_300;
  undefined1 local_208;
  undefined4 local_204;
  undefined1 local_1f0 [472];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_204 = 0;
  local_208 = 0x16;
  local_308 = 0x65736c61666f670b;
  uStack_300 = 0x77617264;
  FUN_00416910(local_408,local_res10[0],0xff);
  FUN_00415020(local_1f0,local_408,0x50);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  FUN_00414480(local_res10);
  return;
}

