/* Ghidra address: 019b6ae0 */
/* Ghidra symbol: FUN_019b6ae0 */


void FUN_019b6ae0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res8;
  longlong local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  iVar1 = FUN_004170c0(local_res10,local_res8,1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_3,local_res8);
  }
  else {
    FUN_00416dc0(param_3,local_res8,1,iVar1 + -1);
    iVar2 = 0;
    if (local_res10 != 0) {
      iVar2 = *(int *)(local_res10 + -4);
    }
    iVar3 = 0;
    if (local_res8 != 0) {
      iVar3 = *(int *)(local_res8 + -4);
    }
    iVar4 = 0;
    if (local_res10 != 0) {
      iVar4 = *(int *)(local_res10 + -4);
    }
    FUN_00416dc0(param_4,local_res8,iVar1 + iVar2,(iVar3 - (iVar1 + iVar4)) + 1);
  }
  FUN_00414560(&local_res8,2);
  return;
}

