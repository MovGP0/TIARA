/* Ghidra address: 013c5bc0 */
/* Ghidra symbol: FUN_013c5bc0 */


longlong FUN_013c5bc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  longlong local_40;
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_40 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  lVar3 = local_40;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_01d347d0(lVar1,iVar4);
      FUN_01cc0ae0(lVar3,&local_30);
      iVar2 = FUN_004170c0(&LAB_013c5ce4,local_30,1);
      if (0 < iVar2) {
        FUN_00416dc0(&local_30,local_30,1,iVar2 + -1);
      }
      iVar2 = FUN_00416db0(local_30,local_res10[0]);
      if ((iVar2 == 0) && (*(char *)(lVar3 + 8) == '\0')) break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      lVar3 = local_40;
    } while (iVar5 != 0);
  }
  local_40 = lVar3;
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_40;
}

