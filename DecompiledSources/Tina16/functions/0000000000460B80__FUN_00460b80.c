/* Ghidra address: 00460b80 */
/* Ghidra symbol: FUN_00460b80 */


void FUN_00460b80(ushort *param_1)

{
  if ((*param_1 & 0xbfe8) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00460ac0();
  }
  return;
}

