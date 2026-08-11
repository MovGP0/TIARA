/* Ghidra address: 00849210 */
/* Ghidra symbol: FUN_00849210 */


void FUN_00849210(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x18) = 1;
  if ((*(uint *)(param_1 + 0x4d4) & 0x1000) == 0) {
    if ((*(uint *)(param_1 + 0x4d4) & 0x800) != 0) {
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
    }
    if ((*(uint *)(param_1 + 0x4d4) & 0x400) != 0) {
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x80;
    }
  }
  return;
}

