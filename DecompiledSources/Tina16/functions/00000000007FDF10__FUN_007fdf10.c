/* Ghidra address: 007fdf10 */
/* Ghidra symbol: FUN_007fdf10 */


void FUN_007fdf10(longlong param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0xa4) & 8) == 0) {
    FUN_0064d150();
  }
  else {
    *(undefined4 *)(param_1 + 0x53c) = param_2;
    *(byte *)(param_1 + 0xfc) = *(byte *)(param_1 + 0xfc) | 8;
  }
  return;
}

