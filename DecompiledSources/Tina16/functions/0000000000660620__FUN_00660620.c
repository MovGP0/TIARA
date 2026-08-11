/* Ghidra address: 00660620 */
/* Ghidra symbol: FUN_00660620 */


ulonglong FUN_00660620(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    for (lVar2 = FUN_00660e70(); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
      cVar1 = FUN_00660620(lVar2);
      if (cVar1 != '\0') goto LAB_00660660;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0xa9);
  }
LAB_00660660:
  return uVar3 & 0xffffffff;
}

