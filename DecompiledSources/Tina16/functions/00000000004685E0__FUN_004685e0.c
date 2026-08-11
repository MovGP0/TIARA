/* Ghidra address: 004685e0 */
/* Ghidra symbol: FUN_004685e0 */


void FUN_004685e0(ushort *param_1,undefined1 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 0x11;
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}

