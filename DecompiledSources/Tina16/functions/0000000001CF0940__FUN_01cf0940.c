/* Ghidra address: 01cf0940 */
/* Ghidra symbol: FUN_01cf0940 */


void FUN_01cf0940(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [24];
  
  local_30 = param_3;
  local_2c = param_4;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,local_28);
  FUN_00b958b0(local_28,&local_30);
  return;
}

