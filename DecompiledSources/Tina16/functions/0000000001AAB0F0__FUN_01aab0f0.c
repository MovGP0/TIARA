/* Ghidra address: 01aab0f0 */
/* Ghidra symbol: FUN_01aab0f0 */


void FUN_01aab0f0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x5e) = 1;
  while ((*(ushort *)(param_1 + 0x5e) <= *(ushort *)(*(longlong *)(param_1 + 0x90) + 0x13b30) &&
         (*(char *)(*(longlong *)
                     (*(longlong *)(param_1 + 0x90) + 0x13b30 +
                     (ulonglong)*(ushort *)(param_1 + 0x5e) * 8) + 3) == '\x01'))) {
    *(undefined1 *)
     (*(longlong *)
       (*(longlong *)(param_1 + 0x90) + 0x13b30 + (ulonglong)*(ushort *)(param_1 + 0x5e) * 8) + 3) =
         0;
    *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 1;
  }
  if (*(ushort *)(*(longlong *)(param_1 + 0x90) + 0x13b30) < *(ushort *)(param_1 + 0x5e)) {
    *(undefined1 *)(param_1 + 0x5d) = 1;
  }
  else {
    *(undefined1 *)
     (*(longlong *)
       (*(longlong *)(param_1 + 0x90) + 0x13b30 + (ulonglong)*(ushort *)(param_1 + 0x5e) * 8) + 3) =
         1;
  }
  return;
}

