/* Ghidra address: 004686a0 */
/* Ghidra symbol: FUN_004686a0 */


void FUN_004686a0(ushort *param_1,undefined1 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 0x10;
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}

