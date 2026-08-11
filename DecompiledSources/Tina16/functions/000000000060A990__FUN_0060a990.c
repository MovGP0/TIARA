/* Ghidra address: 0060a990 */
/* Ghidra symbol: FUN_0060a990 */


void FUN_0060a990(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  undefined8 *local_10;
  
  local_20 = auStack_58;
  FUN_0060a440(param_1);
  local_38 = 2;
  local_10 = (undefined8 *)FUN_004babc0(&PTR_FUN_0047d7f8,1,param_2,param_3);
  uVar1 = (**(code **)*local_10)(local_10);
  FUN_0060acc0(param_1,local_10,uVar1,0);
  FUN_00410f20(local_10);
  return;
}

