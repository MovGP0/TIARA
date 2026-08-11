/* Ghidra address: 00c36470 */
/* Ghidra symbol: FUN_00c36470 */


void FUN_00c36470(void)

{
  DAT_02019b44 = DAT_02019b44 + 1;
  if (DAT_02019b44 == 0) {
    FUN_00410f20(DAT_01ea1328);
    FUN_00410f20(DAT_01ea16c8);
    FUN_00604e80(&DAT_005f7500,&PTR_FUN_00c17678);
  }
  return;
}

