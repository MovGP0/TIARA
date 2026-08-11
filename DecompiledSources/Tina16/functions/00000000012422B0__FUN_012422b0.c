/* Ghidra address: 012422b0 */
/* Ghidra symbol: FUN_012422b0 */


undefined8 FUN_012422b0(undefined8 param_1,undefined8 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  iVar2 = 0;
  FUN_00416780(&local_20,param_4);
  iVar1 = FUN_004170c0(local_20,local_res10[0],1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  else {
    FUN_00416dc0(param_1,local_res10[0],1,iVar1 + -1);
    iVar2 = 0;
  }
  while ((param_3 != iVar2 && (0 < iVar1))) {
    FUN_00416e20(local_res10,1,iVar1);
    FUN_00416780(&local_28,param_4);
    iVar1 = FUN_004170c0(local_28,local_res10[0],1);
    if (iVar1 < 1) {
      FUN_00414ad0(param_1,local_res10[0]);
    }
    else {
      FUN_00416dc0(param_1,local_res10[0],1,iVar1 + -1);
    }
    iVar2 = iVar2 + 1;
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return param_1;
}

