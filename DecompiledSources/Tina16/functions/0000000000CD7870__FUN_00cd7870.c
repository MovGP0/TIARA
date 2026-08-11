/* Ghidra address: 00cd7870 */
/* Ghidra symbol: FUN_00cd7870 */


undefined8 * FUN_00cd7870(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_004144d0(param_1);
  if (param_2 != 0) {
    FUN_00410ae0(param_2,&local_10);
    FUN_00415dd0(param_1,local_10,0);
    FUN_00416880(&local_18,*param_1);
    iVar1 = FUN_004170c0(&LAB_00cd7948,local_18,1);
    if (0 < iVar1) {
      FUN_00415b50(param_1,1,iVar1);
    }
  }
  FUN_00414560(&local_18,2);
  return param_1;
}

