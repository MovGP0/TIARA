/* Ghidra address: 019b6930 */
/* Ghidra symbol: FUN_019b6930 */


void FUN_019b6930(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414480(local_20);
  iVar1 = FUN_004170c0(local_res10,*param_1,1);
  while (0 < iVar1) {
    FUN_00414480(local_20);
    FUN_00416dc0(local_20,*param_1,1,iVar1 + -1);
    iVar2 = 0;
    if (local_res10 != 0) {
      iVar2 = *(int *)(local_res10 + -4);
    }
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    iVar4 = 0;
    if (local_res10 != 0) {
      iVar4 = *(int *)(local_res10 + -4);
    }
    FUN_00416dc0(local_30,*param_1,iVar1 + iVar2,(iVar3 - (iVar1 + iVar4)) + 1);
    FUN_00416cd0(local_20,3,local_20[0],local_res18,local_30[0]);
    FUN_00414ad0(param_1,local_20[0]);
    iVar1 = FUN_004170c0(local_res10,*param_1,1);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414560(&local_res10,2);
  return;
}

