/* Ghidra address: 00668100 */
/* Ghidra symbol: FUN_00668100 */


void FUN_00668100(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02012338;
  DAT_020122d4 = DAT_020122d4 + 1;
  if (DAT_020122d4 == 0) {
    DAT_02012338 = 0;
    FUN_00410f20(uVar1);
    FUN_006651f0();
    FUN_00414480(&DAT_020122e0);
    FUN_00414480(&DAT_020122e8);
  }
  return;
}

