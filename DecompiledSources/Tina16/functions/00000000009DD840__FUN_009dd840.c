/* Ghidra address: 009dd840 */
/* Ghidra symbol: FUN_009dd840 */


void FUN_009dd840(void)

{
  DAT_02012ac0 = DAT_02012ac0 + -1;
  if (DAT_02012ac0 == -1) {
    FUN_009d3190();
    DAT_02012ab8 = FUN_00410e60(&PTR_FUN_009d1270,1);
    FUN_0086cc80(DAT_02012ab8);
  }
  return;
}

