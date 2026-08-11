/* Ghidra address: 015da4a0 */
/* Ghidra symbol: FUN_015da4a0 */


undefined1 FUN_015da4a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00441a10(&local_28,param_2);
  FUN_015bf270(local_20,local_28);
  iVar1 = FUN_004170c0(L".exe",local_20[0],1);
  local_9 = 0 < iVar1;
  FUN_00414560(&local_28,2);
  return local_9;
}

