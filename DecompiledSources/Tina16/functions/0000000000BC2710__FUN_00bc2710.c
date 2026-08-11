/* Ghidra address: 00bc2710 */
/* Ghidra symbol: FUN_00bc2710 */


void FUN_00bc2710(void)

{
  DAT_02019ae8 = DAT_02019ae8 + 1;
  if (DAT_02019ae8 == 0) {
    FUN_00410f20(DAT_02019af0);
    DAT_02019af0 = 0;
  }
  return;
}

