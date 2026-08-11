/* Ghidra address: 004b5390 */
/* Ghidra symbol: FUN_004b5390 */


undefined8 * FUN_004b5390(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_3 < 0) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
    FUN_00416780(local_20,(short)param_1[6]);
    iVar1 = FUN_0044f900(local_20[0],*param_2);
    if (iVar1 < 1) {
      FUN_00414480(param_2);
    }
    else {
      FUN_00416e20(param_2,1,iVar1);
    }
  }
  FUN_00414480(local_20);
  return param_2;
}

