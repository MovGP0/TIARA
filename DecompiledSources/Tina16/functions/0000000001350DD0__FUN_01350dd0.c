/* Ghidra address: 01350dd0 */
/* Ghidra symbol: FUN_01350dd0 */


undefined8 FUN_01350dd0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416880(local_20,*param_2);
  iVar1 = FUN_004170c0(&LAB_01350e84,local_20[0],1);
  if (0 < iVar1) {
    FUN_00415ad0(param_1,*param_2,1,iVar1 + -1);
    FUN_00415b50(param_2,1,iVar1);
  }
  FUN_00414480(local_20);
  return param_1;
}

