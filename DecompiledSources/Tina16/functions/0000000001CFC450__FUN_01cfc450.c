/* Ghidra address: 01cfc450 */
/* Ghidra symbol: FUN_01cfc450 */


ulonglong FUN_01cfc450(void)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  lVar1 = FUN_01d06e20();
  if (lVar1 != 0) {
    uVar2 = CONCAT71(uVar3,(*(uint *)(lVar1 + 8) & 1) != 0);
  }
  return uVar2 & 0xffffffff;
}

