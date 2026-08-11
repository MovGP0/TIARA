/* Ghidra address: 00e16c60 */
/* Ghidra symbol: FUN_00e16c60 */


ulonglong FUN_00e16c60(undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 unaff_R13;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1f0 == (code *)0x0) {
      DAT_0202e1f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadDVM");
    }
    if (DAT_0202e1f0 != (code *)0x0) {
      uVar1 = (*DAT_0202e1f0)(param_1,param_2,param_3);
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2 & 0xffffffff;
}

