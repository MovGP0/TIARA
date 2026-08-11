/* Ghidra address: 006a06c0 */
/* Ghidra symbol: FUN_006a06c0 */


void FUN_006a06c0(longlong param_1,longlong param_2)

{
  if ((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf000) {
    *(undefined4 *)(param_1 + 0x6bc) = 0;
    *(undefined4 *)(param_1 + 0x6b8) = 0;
  }
  FUN_008038e0(param_1);
  *(undefined1 *)(param_1 + 0x6c0) = 0;
  return;
}

