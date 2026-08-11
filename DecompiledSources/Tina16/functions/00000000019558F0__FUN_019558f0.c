/* Ghidra address: 019558f0 */
/* Ghidra symbol: FUN_019558f0 */


ulonglong FUN_019558f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00640c18);
  if (cVar2 != '\0') {
    uVar3 = (ulonglong)*(byte *)(lVar1 + 900);
  }
  return uVar3 & 0xffffffff;
}

