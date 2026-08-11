/* Ghidra address: 00e10580 */
/* Ghidra symbol: FUN_00e10580 */


void FUN_00e10580(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar2 = FUN_00e0ffc0(param_1);
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar2,iVar4);
      FUN_0043e130(&local_30,*(undefined8 *)(lVar3 + 0x10));
      FUN_0043e130(&local_38,local_res10[0]);
      iVar1 = FUN_00416db0(local_30,local_38);
      if (iVar1 == 0) {
        FUN_00e0f7a0(lVar3,param_3);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return;
}

