/* Ghidra address: 00e1df50 */
/* Ghidra symbol: FUN_00e1df50 */


ulonglong FUN_00e1df50(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e920 == (code *)0x0) {
      DAT_0202e920 = (code *)FUN_00427c10(DAT_01edc8a0,L"HWCanCo_operate");
    }
    if (DAT_0202e920 != (code *)0x0) {
      uVar1 = (*DAT_0202e920)(param_1,param_2);
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2 & 0xffffffff;
}

