/* Ghidra address: 00468530 */
/* Ghidra symbol: FUN_00468530 */


void FUN_00468530(ushort *param_1,undefined4 param_2,char param_3)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  if (DAT_01dc4378 == '\0') {
    *param_1 = 3;
  }
  else {
    *param_1 = *(ushort *)(&DAT_01dc4618 + (longlong)param_3 * 2);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

