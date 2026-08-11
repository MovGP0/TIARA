/* Ghidra address: 014a72f0 */
/* Ghidra symbol: FUN_014a72f0 */


undefined8 FUN_014a72f0(undefined8 param_1,longlong param_2,int param_3)

{
  short sVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong local_res10 [3];
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(&local_20);
  iVar5 = 0;
  if (local_res10[0] != 0) {
    iVar5 = *(int *)(local_res10[0] + -4);
  }
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      sVar1 = *(short *)(local_res10[0] + -2 + (longlong)iVar4 * 2);
      uVar3 = sVar1 - 0x28;
      if (uVar3 < 0x20) {
        bVar6 = (1 << ((byte)uVar3 & 0x1f) & 0x3ff40U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00416780(&local_30,sVar1);
        FUN_00416ad0(&local_20,local_30);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = 0;
  if (local_20 != 0) {
    iVar5 = *(int *)(local_20 + -4);
  }
  if (1 < iVar5) {
    FUN_00414480(param_1);
    FUN_005b86c0(&local_28,local_20,&LAB_014a74c0);
    lVar2 = 0;
    if (local_28 != 0) {
      lVar2 = *(longlong *)(local_28 + -8);
    }
    iVar5 = FUN_00b905f0(lVar2 + -1,param_3 + -1);
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar5 = iVar5 + 1;
      do {
        FUN_00416ad0(param_1,*(undefined8 *)(local_28 + (longlong)iVar4 * 8));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00419430(&local_28,&DAT_004210c0);
  }
  FUN_00414480(&local_30);
  FUN_00419430(&local_28,&DAT_004210c0);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return param_1;
}

