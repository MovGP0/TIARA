/* Ghidra address: 01c9aab0 */
/* Ghidra symbol: FUN_01c9aab0 */


ulonglong FUN_01c9aab0(void)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(longlong *)PTR_DAT_02005738 == 0) {
    if (*(longlong *)PTR_DAT_020056e0 == 0) {
      uVar1 = FUN_01086f60(*(undefined8 *)PTR_DAT_02002ab0);
      uVar2 = (ulonglong)uVar1;
    }
    else {
      FUN_010525e0(*(undefined8 *)PTR_DAT_020056e0);
    }
  }
  else {
    FUN_0109f350(*(undefined8 *)PTR_DAT_02005738);
  }
  return uVar2 & 0xffffffff;
}

