/* Ghidra address: 00d99450 */
/* Ghidra symbol: FUN_00d99450 */


void FUN_00d99450(void)

{
  undefined8 uVar1;
  
  DAT_0201a190 = DAT_0201a190 + 1;
  if (DAT_0201a190 == 0) {
    FUN_00d99640(&PTR_FUN_00d4f5c0);
    uVar1 = DAT_0201a188;
    DAT_0201a188 = 0;
    FUN_00410f20(uVar1);
    FUN_007872c0(&PTR_FUN_00d4f5c0);
  }
  return;
}

