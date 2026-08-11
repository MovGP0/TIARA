/* Ghidra address: 00f211b0 */
/* Ghidra symbol: FUN_00f211b0 */


longlong FUN_00f211b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  lVar3 = local_30;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar1,iVar4);
      iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 8),local_res10[0]);
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      lVar3 = local_30;
    } while (iVar5 != 0);
  }
  local_30 = lVar3;
  FUN_00414480(local_res10);
  return local_30;
}

