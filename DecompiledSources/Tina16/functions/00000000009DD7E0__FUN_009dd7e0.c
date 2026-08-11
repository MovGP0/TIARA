/* Ghidra address: 009dd7e0 */
/* Ghidra symbol: FUN_009dd7e0 */


void FUN_009dd7e0(void)

{
  DAT_02012ac0 = DAT_02012ac0 + 1;
  if (DAT_02012ac0 == 0) {
    DAT_01e40518 = 0;
    if (DAT_02012ae0 != 0) {
      thunk_FUN_041c8c2f(DAT_02012ae0);
    }
    FUN_0086cca0(DAT_02012ab8);
    FUN_00410f20(DAT_02012ab8);
    FUN_009d3150();
  }
  return;
}

