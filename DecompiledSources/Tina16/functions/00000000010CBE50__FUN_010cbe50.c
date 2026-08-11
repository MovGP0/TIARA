/* Ghidra address: 010cbe50 */
/* Ghidra symbol: FUN_010cbe50 */


void FUN_010cbe50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = FUN_0040c840(param_2);
  FUN_010cbda0(param_1,local_20,param_4);
  FUN_010cbe10(uVar1,&local_28);
  FUN_00416cd0(local_20,3,local_20[0],&LAB_010cbf18,local_28);
  FUN_00414ad0(param_3,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

