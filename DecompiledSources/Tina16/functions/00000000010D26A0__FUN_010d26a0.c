/* Ghidra address: 010d26a0 */
/* Ghidra symbol: FUN_010d26a0 */


void FUN_010d26a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 local_3f8 [256];
  undefined8 local_2f8 [32];
  undefined1 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1e0 [472];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1f4 = 0;
  local_1f8 = 6;
  local_2f8[0] = 0x65736c61666f6707;
  FUN_00416910(local_3f8,local_res10[0],0xff);
  FUN_00415020(local_1e0,local_3f8,0x50);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_2f8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  FUN_00414480(local_res10);
  return;
}

