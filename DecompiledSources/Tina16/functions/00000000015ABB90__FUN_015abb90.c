/* Ghidra address: 015abb90 */
/* Ghidra symbol: FUN_015abb90 */


undefined8 * FUN_015abb90(undefined8 *param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_c;
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_004144d0(param_1);
  if (param_2 != 0) {
    FUN_00410ae0(param_2,local_20);
    FUN_00415dd0(param_1,local_20[0],0);
    FUN_00416880(&local_28,*param_1);
    local_c = FUN_004170c0(&LAB_015abc68,local_28,1);
    if (0 < local_c) {
      FUN_00415b50(param_1,1,local_c);
    }
  }
  FUN_00414560(&local_28,2);
  return param_1;
}

