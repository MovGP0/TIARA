/* Ghidra address: 00632390 */
/* Ghidra symbol: FUN_00632390 */


void FUN_00632390(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1714) == 0x10) {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1) =
         *(undefined1 *)(param_1 + 0x1710);
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1) =
         *(undefined1 *)(param_1 + 0x1711);
    *(undefined2 *)(param_1 + 0x1710) = 0;
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1714) < 8) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1) =
         *(undefined1 *)(param_1 + 0x1710);
    *(ushort *)(param_1 + 0x1710) = (ushort)*(byte *)(param_1 + 0x1711);
    iVar2 = *(int *)(param_1 + 0x1714) + -8;
  }
  *(int *)(param_1 + 0x1714) = iVar2;
  return;
}

