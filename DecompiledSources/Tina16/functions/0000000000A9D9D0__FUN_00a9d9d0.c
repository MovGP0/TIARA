/* Ghidra address: 00a9d9d0 */
/* Ghidra symbol: FUN_00a9d9d0 */


void FUN_00a9d9d0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x4c) == '\x02') {
    if ((*(int *)(*(longlong *)(param_1 + 0x60) + 0x4dc) == -0xbc6d5d) &&
       (*(int *)(*(longlong *)(param_1 + 0x60) + 0x4d4) != -0xbc6d5d)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x4c8) = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = FUN_00a9d980(param_1);
      iVar3 = (*(int *)(param_1 + 0x70) - iVar3) - *(int *)(*(longlong *)(param_1 + 0x60) + 0x52c);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      *(int *)(*(longlong *)(param_1 + 0x60) + 0x4c8) = iVar3;
    }
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x60) + 0x60);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x60) >> 8),1) <<
               (bVar1 & 0x1f) & 0x60U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar3 = FUN_00a9d980(param_1);
      iVar3 = *(int *)(param_1 + 0x70) - iVar3;
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      *(int *)(*(longlong *)(param_1 + 0x60) + 0x4c8) = iVar3;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = FUN_00a9d980(param_1);
      iVar3 = *(int *)(param_1 + 0x70) - iVar3;
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      *(int *)(*(longlong *)(param_1 + 0x60) + 0x4c8) = iVar3;
    }
  }
  return;
}

