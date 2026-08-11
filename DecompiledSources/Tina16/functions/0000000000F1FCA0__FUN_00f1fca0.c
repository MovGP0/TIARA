/* Ghidra address: 00f1fca0 */
/* Ghidra symbol: FUN_00f1fca0 */


int FUN_00f1fca0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  int local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c = -1;
  iVar2 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar1 = local_1c;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      iVar3 = FUN_00416db0(*(undefined8 *)(lVar4 + 8),local_res10[0]);
      iVar1 = iVar2;
      if (iVar3 == 0) break;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      iVar1 = local_1c;
    } while (iVar5 != 0);
  }
  local_1c = iVar1;
  FUN_00414480(local_res10);
  return local_1c;
}

