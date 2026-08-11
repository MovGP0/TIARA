/* Ghidra address: 00cd7d10 */
/* Ghidra symbol: FUN_00cd7d10 */


void FUN_00cd7d10(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02019fc0;
  DAT_02019fb0 = DAT_02019fb0 + 1;
  if (DAT_02019fb0 == 0) {
    DAT_02019fc0 = 0;
    FUN_00410f20(uVar1);
    FUN_00414480(&DAT_02019fa8);
    FUN_00414480(&DAT_02019fb8);
  }
  return;
}

