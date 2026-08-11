/* Ghidra address: 004687b0 */
/* Ghidra symbol: FUN_004687b0 */


void FUN_004687b0(ushort *param_1,undefined8 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 6;
  return;
}

