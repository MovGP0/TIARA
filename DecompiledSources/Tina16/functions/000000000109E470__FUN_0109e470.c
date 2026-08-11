/* Ghidra address: 0109e470 */
/* Ghidra symbol: FUN_0109e470 */


void FUN_0109e470(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x550));
  uVar1 = _Dbg_GetBreakPoints(*(undefined8 *)(param_1 + 0x9c0));
  FUN_004167d0(param_1 + 0x9d0,uVar1);
  lVar2 = FUN_00f7db60(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548),
                       *(undefined8 *)(param_1 + 0x9d0));
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar2,iVar4);
      FUN_00441920(&local_38,*(undefined8 *)(lVar3 + 0x10));
      FUN_0043f750(&local_40,*(undefined4 *)(lVar3 + 8));
      FUN_00416cd0(&local_30,3,local_38,&LAB_0109e628,local_40);
      uVar1 = FUN_006def00(*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x550),0,local_30);
      FUN_006dc990(uVar1,lVar3);
      if (*(char *)(lVar3 + 0x18) == '\0') {
        FUN_006dcbd0(uVar1,1);
      }
      else {
        FUN_006dcbd0(uVar1,0);
      }
      if (*(char *)(lVar3 + 0x18) == '\0') {
        FUN_006dcca0(uVar1,1);
      }
      else {
        FUN_006dcca0(uVar1,0);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(lVar2);
  FUN_00414560(&local_40,3);
  return;
}

