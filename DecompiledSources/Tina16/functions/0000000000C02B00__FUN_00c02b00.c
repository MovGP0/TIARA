/* Ghidra address: 00c02b00 */
/* Ghidra symbol: FUN_00c02b00 */


void FUN_00c02b00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_004d2d90(param_1,*(longlong *)(param_1 + 0x850));
  }
  *(undefined8 *)(param_1 + 0x850) = 0;
  FUN_00c02640(param_1);
  return;
}

