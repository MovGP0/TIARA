/* Ghidra address: 00468640 */
/* Ghidra symbol: FUN_00468640 */


void FUN_00468640(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 0x13;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

