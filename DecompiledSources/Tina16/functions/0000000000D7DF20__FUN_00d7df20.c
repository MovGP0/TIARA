/* Ghidra address: 00d7df20 */
/* Ghidra symbol: FUN_00d7df20 */


undefined4 FUN_00d7df20(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,param_1);
  FUN_00d57300(local_20,&local_10,&LAB_00d7dfd8);
  FUN_00d57170(&local_28,&local_10);
  uVar1 = FUN_0043fc00(local_28);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return uVar1;
}

