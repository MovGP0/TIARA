/* Ghidra address: 00632420 */
/* Ghidra symbol: FUN_00632420 */


void FUN_00632420(longlong param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1714);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1710) | 2 << ((byte)iVar4 & 0x1f);
  *(short *)(param_1 + 0x1710) = (short)uVar3;
  if (iVar4 < 0xe) {
    iVar4 = iVar4 + 3;
    *(int *)(param_1 + 0x1714) = iVar4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1) = (char)uVar3;
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3) =
         *(undefined1 *)(param_1 + 0x1711);
    uVar3 = 2 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
    *(short *)(param_1 + 0x1710) = (short)uVar3;
    iVar4 = *(int *)(param_1 + 0x1714) + -0xd;
    uVar3 = uVar3 & 0xffff;
    *(int *)(param_1 + 0x1714) = iVar4;
  }
  uVar2 = (undefined1)uVar3;
  if (iVar4 < 10) {
    iVar4 = iVar4 + 7;
    *(int *)(param_1 + 0x1714) = iVar4;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3) =
         *(undefined1 *)(param_1 + 0x1711);
    *(undefined2 *)(param_1 + 0x1710) = 0;
    iVar4 = *(int *)(param_1 + 0x1714) + -9;
    uVar2 = 0;
    *(int *)(param_1 + 0x1714) = iVar4;
  }
  if (iVar4 == 0x10) {
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3) =
         *(undefined1 *)(param_1 + 0x1711);
    *(undefined2 *)(param_1 + 0x1710) = 0;
    iVar4 = 0;
  }
  else {
    if (iVar4 < 8) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3) = uVar2;
    *(ushort *)(param_1 + 0x1710) = (ushort)*(byte *)(param_1 + 0x1711);
    iVar4 = *(int *)(param_1 + 0x1714) + -8;
  }
  *(int *)(param_1 + 0x1714) = iVar4;
  return;
}

