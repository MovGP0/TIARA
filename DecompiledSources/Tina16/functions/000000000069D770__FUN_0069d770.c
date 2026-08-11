/* Ghidra address: 0069d770 */
/* Ghidra symbol: FUN_0069d770 */


void FUN_0069d770(longlong param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x3a) = 0;
  if ((param_2 & 1) != 0) {
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 2;
  }
  if ((param_2 & 0x100) != 0) {
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 1;
  }
  if ((param_2 & 0x8000) != 0) {
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 4;
  }
  return;
}

