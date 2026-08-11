/* Ghidra address: 00409880 */
/* Ghidra symbol: FUN_00409880 */


void FUN_00409880(uint param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1 & 0xffffffffffffff7f;
  if (PTR_FUN_02006018 != (undefined *)0x0) {
    (*(code *)PTR_FUN_02006018)(uVar2,param_2);
  }
  if ((byte)uVar2 == 0) {
    lVar1 = FUN_0041f930();
    uVar2 = (ulonglong)*(byte *)(lVar1 + 0x210);
  }
  else if ((byte)uVar2 < 0x1d) {
    uVar2 = (ulonglong)(byte)(&DAT_01db9e7c)[(ulonglong)param_1 & 0x7f];
  }
  FUN_00409860(uVar2 & 0xff,param_2);
  return;
}

