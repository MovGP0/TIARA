/* Ghidra address: 00cebf60 */
/* Ghidra symbol: FUN_00cebf60 */


void FUN_00cebf60(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01eb1410;
  DAT_0201a074 = DAT_0201a074 + 1;
  if (DAT_0201a074 == 0) {
    DAT_01eb1410 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

