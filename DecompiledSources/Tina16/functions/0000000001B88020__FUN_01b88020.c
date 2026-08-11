/* Ghidra address: 01b88020 */
/* Ghidra symbol: FUN_01b88020 */


void FUN_01b88020(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined8 local_30;
  
  local_30 = *param_3;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  bVar1 = false;
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x3a0) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x260) + 0x3a0),iVar5);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 8),local_res10[0]);
      if (iVar2 == 0) {
        *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + (longlong)*(int *)(lVar3 + 0x18) * 8) =
             local_30;
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (!bVar1) {
    uVar4 = FUN_01b819b0(&DAT_01b7d0b0,1,local_res10[0],&local_30);
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x260) + 0x3a0),uVar4);
  }
  FUN_00414480(local_res10);
  return;
}

