/* Ghidra address: 0086d070 */
/* Ghidra symbol: FUN_0086d070 */


void FUN_0086d070(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_020127f0;
  DAT_020127f8 = DAT_020127f8 + 1;
  if (DAT_020127f8 == 0) {
    DAT_020127f0 = 0;
    FUN_00410f20(uVar1);
    FUN_00414480(&DAT_020127e0);
    FUN_00414480(&DAT_020127e8);
  }
  return;
}

