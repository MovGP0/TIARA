/* Ghidra address: 00468610 */
/* Ghidra symbol: FUN_00468610 */


void FUN_00468610(ushort *param_1,ushort param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 0x12;
  param_1[4] = param_2;
  return;
}

