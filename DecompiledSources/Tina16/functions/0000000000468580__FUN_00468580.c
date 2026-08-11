/* Ghidra address: 00468580 */
/* Ghidra symbol: FUN_00468580 */


void FUN_00468580(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

