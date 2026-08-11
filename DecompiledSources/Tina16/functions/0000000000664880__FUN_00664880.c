/* Ghidra address: 00664880 */
/* Ghidra symbol: FUN_00664880 */


void FUN_00664880(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x30);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x88);
  if (*(char *)(*(longlong *)(lVar2 + 0x28) + 0x20) == '\x01') {
    iVar3 = FUN_00660730(lVar2,1);
    if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x74) <= iVar3 + iVar1) {
      *(int *)(*(longlong *)(param_1 + 0x50) + 0x74) = iVar3 + iVar1;
    }
    iVar3 = FUN_00663ec0(*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x88));
    if (iVar3 - iVar1 <= *(int *)(*(longlong *)(param_1 + 0x50) + 0x74)) {
      *(int *)(*(longlong *)(param_1 + 0x50) + 0x74) = iVar3 - iVar1;
    }
  }
  else {
    iVar3 = FUN_00660730(lVar2,2);
    if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x70) <= iVar3 + iVar1) {
      *(int *)(*(longlong *)(param_1 + 0x50) + 0x70) = iVar3 + iVar1;
    }
    iVar3 = FUN_00663ec0(*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x88));
    if (iVar3 - iVar1 <= *(int *)(*(longlong *)(param_1 + 0x50) + 0x70)) {
      *(int *)(*(longlong *)(param_1 + 0x50) + 0x70) = iVar3 - iVar1;
    }
  }
  return;
}

