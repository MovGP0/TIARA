/* Ghidra address: 01350e90 */
/* Ghidra symbol: FUN_01350e90 */


undefined8 FUN_01350e90(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_00416880(local_20,*param_1);
  iVar1 = FUN_004170c0(&DAT_01350f9c,local_20[0],1);
  if (0 < iVar1) {
    FUN_00415ad0(&local_28,*param_1,1,iVar1 + -1);
    FUN_00416880(&local_30,local_28);
    local_38 = FUN_00b8f030(local_30);
    FUN_00415b50(param_1,1,iVar1);
  }
  FUN_00414480(&local_30);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  return local_38;
}

