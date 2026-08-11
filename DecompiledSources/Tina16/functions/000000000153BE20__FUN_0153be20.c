/* Ghidra address: 0153be20 */
/* Ghidra symbol: FUN_0153be20 */


ulonglong FUN_0153be20(void)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  FUN_0153a8e0(0);
  cVar1 = FUN_01500620(1);
  if (cVar1 == '\0') {
    FUN_014ffdd0(*(undefined8 *)PTR_DAT_02002810,*(undefined8 *)PTR_DAT_02004030);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1 == '\0') & 0xffffffff;
}

