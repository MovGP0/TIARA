/* Ghidra address: 00743c30 */
/* Ghidra symbol: FUN_00743c30 */


void FUN_00743c30(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x40;
  }
  else {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xffffffbf;
  }
  *(undefined1 *)(param_1 + 0x4a7) = 1;
  FUN_0065eb70();
  return;
}

