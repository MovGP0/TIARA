/* Ghidra address: 0130e500 */
/* Ghidra symbol: FUN_0130e500 */


undefined8 FUN_0130e500(undefined8 param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00416780(local_20,param_4);
  iVar1 = FUN_004170c0(local_20[0],local_res18[0],1);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (local_res18[0] != 0) {
      iVar1 = *(int *)(local_res18[0] + -4);
    }
    FUN_00416780(&local_28,param_4);
    iVar2 = FUN_004170c0(local_28,local_res18[0],1);
    iVar3 = 0;
    if (local_res18[0] != 0) {
      iVar3 = *(int *)(local_res18[0] + -4);
    }
    FUN_00416780(&local_30,param_4);
    uVar4 = FUN_004170c0(local_30,local_res18[0],1);
    FUN_00416e20(local_res18,uVar4,iVar3 - (iVar1 - iVar2));
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  return param_2;
}

