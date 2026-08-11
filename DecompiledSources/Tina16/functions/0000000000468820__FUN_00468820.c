/* Ghidra address: 00468820 */
/* Ghidra symbol: FUN_00468820 */


void FUN_00468820(ushort *param_1,char param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *param_1 = 0xb;
  param_1[4] = -(ushort)(param_2 != '\0');
  return;
}

