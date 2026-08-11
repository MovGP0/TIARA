/* Ghidra address: 01bbc0f0 */
/* Ghidra symbol: FUN_01bbc0f0 */


longlong FUN_01bbc0f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  lVar2 = local_30;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 8),local_res10[0]);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      lVar2 = local_30;
    } while (iVar4 != 0);
  }
  local_30 = lVar2;
  FUN_00414480(local_res10);
  return local_30;
}

