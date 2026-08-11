/* Ghidra address: 004689d0 */
/* Ghidra symbol: FUN_004689d0 */


void FUN_004689d0(ushort *param_1,undefined8 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 8;
  FUN_00414b90(param_1 + 4,param_2);
  return;
}

