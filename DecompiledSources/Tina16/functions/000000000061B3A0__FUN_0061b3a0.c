/* Ghidra address: 0061b3a0 */
/* Ghidra symbol: FUN_0061b3a0 */


void FUN_0061b3a0(void)

{
  DAT_02012230 = DAT_02012230 + 1;
  if (DAT_02012230 == 0) {
    while (0 < DAT_02012240) {
      FUN_0061a430();
    }
    FUN_00410f20(DAT_01df0878);
    DAT_01df0878 = 0;
  }
  return;
}

