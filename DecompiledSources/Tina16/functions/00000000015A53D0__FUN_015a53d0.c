/* Ghidra address: 015a53d0 */
/* Ghidra symbol: FUN_015a53d0 */


void FUN_015a53d0(longlong param_1)

{
  if (*(int *)(param_1 + 0x16f0) < 9) {
    if (0 < *(int *)(param_1 + 0x16f0)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
           *(undefined1 *)(param_1 + 0x16ee);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  else {
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  *(undefined2 *)(param_1 + 0x16ee) = 0;
  *(undefined4 *)(param_1 + 0x16f0) = 0;
  return;
}

