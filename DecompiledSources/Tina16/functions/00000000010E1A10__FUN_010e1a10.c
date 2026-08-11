/* Ghidra address: 010e1a10 */
/* Ghidra symbol: FUN_010e1a10 */


void FUN_010e1a10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    *(undefined8 *)
     (*(longlong *)(param_1 + 0x8c0) + -0x38 + (ulonglong)*(byte *)(param_1 + 0x7fa) * 0x40 +
      (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20 + (longlong)*(int *)(param_1 + 0x7e8) * 8) = 0;
  }
  return;
}

