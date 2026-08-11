/* Ghidra address: 016bca60 */
/* Ghidra symbol: FUN_016bca60 */


undefined8 FUN_016bca60(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_004169a0(&local_10,*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_00414480(&local_18);
  }
  else {
    FUN_004169a0(&local_18,*(longlong *)(param_1 + 0x20));
  }
  FUN_00416cd0(param_2,3,local_10,&LAB_016bcb28,local_18);
  FUN_00414560(&local_18,2);
  return param_2;
}

