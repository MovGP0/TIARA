/* Ghidra address: 01c9ae20 */
/* Ghidra symbol: FUN_01c9ae20 */


ulonglong FUN_01c9ae20(void)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(int *)PTR_DAT_02003570 == 0) {
    FUN_01c9ab80();
  }
  else {
    uVar1 = FUN_01c9ab10();
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2 & 0xffffffff;
}

