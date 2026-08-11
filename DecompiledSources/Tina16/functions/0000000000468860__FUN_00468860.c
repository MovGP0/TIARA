/* Ghidra address: 00468860 */
/* Ghidra symbol: FUN_00468860 */


void FUN_00468860(ushort *param_1,undefined8 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 5;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}

