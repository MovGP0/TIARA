/* Ghidra address: 00468910 */
/* Ghidra symbol: FUN_00468910 */


void FUN_00468910(ushort *param_1,undefined8 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0x100;
  FUN_00414bf0(param_1 + 4,param_2);
  return;
}

