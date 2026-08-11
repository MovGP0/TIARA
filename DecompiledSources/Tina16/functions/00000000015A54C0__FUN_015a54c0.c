/* Ghidra address: 015a54c0 */
/* Ghidra symbol: FUN_015a54c0 */


void FUN_015a54c0(longlong param_1)

{
  if (*(int *)(param_1 + 0x16f0) == 0x10) {
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(undefined2 *)(param_1 + 0x16ee) = 0;
    *(undefined4 *)(param_1 + 0x16f0) = 0;
  }
  else if (7 < *(int *)(param_1 + 0x16f0)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         *(undefined1 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(ushort *)(param_1 + 0x16ee) = *(ushort *)(param_1 + 0x16ee) >> 8;
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -8;
  }
  return;
}

