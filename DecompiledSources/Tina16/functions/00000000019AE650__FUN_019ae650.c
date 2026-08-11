/* Ghidra address: 019ae650 */
/* Ghidra symbol: FUN_019ae650 */


longlong FUN_019ae650(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00414610();
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_30 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 8),iVar2);
      iVar1 = FUN_00416db0(*(undefined8 *)(local_30 + 8),local_res10[0]);
      if (iVar1 == 0) goto LAB_019ae6d3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_30 = 0;
LAB_019ae6d3:
  FUN_00414480(local_res10);
  return local_30;
}

