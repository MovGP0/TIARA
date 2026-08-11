/* Ghidra address: 006ecf30 */
/* Ghidra symbol: FUN_006ecf30 */


void FUN_006ecf30(longlong param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x494) = param_2 & 0x1fff;
  *(undefined1 *)(param_1 + 0x491) = 0;
  if ((param_2 & 0x2000) != 0) {
    *(byte *)(param_1 + 0x491) = *(byte *)(param_1 + 0x491) | 1;
  }
  if ((param_2 & 0x4000) != 0) {
    *(byte *)(param_1 + 0x491) = *(byte *)(param_1 + 0x491) | 2;
  }
  if ((param_2 & 0x8000) != 0) {
    *(byte *)(param_1 + 0x491) = *(byte *)(param_1 + 0x491) | 4;
  }
  return;
}

