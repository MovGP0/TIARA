/* Ghidra address: 00743380 */
/* Ghidra symbol: FUN_00743380 */


void FUN_00743380(longlong param_1,char param_2)

{
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x8c);
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x84);
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x84);
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x8c);
  }
  return;
}

