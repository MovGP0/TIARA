/* Ghidra address: 01242410 */
/* Ghidra symbol: FUN_01242410 */


undefined8 FUN_01242410(undefined8 param_1,undefined8 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  FUN_00414520(param_1);
  iVar2 = 0;
  FUN_00415e60(&local_20,param_4);
  iVar1 = FUN_00b0d570(local_20,local_res10[0]);
  if (iVar1 < 1) {
    FUN_00414b90(param_1,local_res10[0]);
  }
  else {
    FUN_00416430(param_1,local_res10[0],1,iVar1 + -1);
    iVar2 = 0;
  }
  while ((param_3 != iVar2 && (0 < iVar1))) {
    FUN_00416490(local_res10,1,iVar1);
    FUN_00415e60(&local_28,param_4);
    iVar1 = FUN_00b0d570(local_28,local_res10[0]);
    if (iVar1 < 1) {
      FUN_00414b90(param_1,local_res10[0]);
    }
    else {
      FUN_00416430(param_1,local_res10[0],1,iVar1 + -1);
    }
    iVar2 = iVar2 + 1;
  }
  FUN_004145c0(&local_28,2);
  FUN_00414520(local_res10);
  return param_1;
}

