/* Ghidra address: 004686d0 */
/* Ghidra symbol: FUN_004686d0 */


void FUN_004686d0(ushort *param_1,ushort param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 2;
  param_1[4] = param_2;
  return;
}

