/* Ghidra address: 01571a60 */
/* Ghidra symbol: FUN_01571a60 */


undefined8 FUN_01571a60(longlong param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00414480(&local_18);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_01571790(param_1,&local_18);
  }
  else {
    FUN_015f0d60(&local_20,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x30),0,0);
    FUN_00416880(&local_18,local_20);
  }
  FUN_00414ad0(param_2,local_18);
  FUN_004144d0(&local_20);
  FUN_00414560(&local_18,2);
  return param_2;
}

