/* Ghidra address: 00cde2d0 */
/* Ghidra symbol: FUN_00cde2d0 */


void FUN_00cde2d0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01eb0290;
  DAT_0201a058 = DAT_0201a058 + 1;
  if (DAT_0201a058 == 0) {
    DAT_01eb0290 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

