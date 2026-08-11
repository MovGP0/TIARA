/* Ghidra address: 004688e0 */
/* Ghidra symbol: FUN_004688e0 */


void FUN_004688e0(ushort *param_1,undefined8 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 6;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}

