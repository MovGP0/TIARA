/* Ghidra address: 015a2070 */
/* Ghidra symbol: FUN_015a2070 */


void FUN_015a2070(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x16f0) < 0xe) {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         (ushort)(2 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) | 2 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(short *)(param_1 + 0x16ee) =
         (short)(2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xd;
  }
  uVar1 = DAT_01f69a60;
  uVar2 = (uint)DAT_01f69a62;
  if ((int)(0x10 - uVar2) < *(int *)(param_1 + 0x16f0)) {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         DAT_01f69a60 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(short *)(param_1 + 0x16ee) =
         (short)((int)(uint)uVar1 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(uint *)(param_1 + 0x16f0) = (uVar2 - 0x10) + *(int *)(param_1 + 0x16f0);
  }
  else {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         DAT_01f69a60 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
    *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar2;
  }
  FUN_015a54c0(param_1);
  return;
}

