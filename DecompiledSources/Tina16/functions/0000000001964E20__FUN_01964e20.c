/* Ghidra address: 01964e20 */
/* Ghidra symbol: FUN_01964e20 */


ulonglong FUN_01964e20(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  iVar1 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"Formats");
  if (iVar1 == 0) {
    FUN_0180f880(*(undefined8 *)(param_1 + 0x2c8),param_2,param_1,0);
  }
  else {
    iVar1 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"Highlights");
    if (iVar1 == 0) {
      FUN_0180f880(*(undefined8 *)(param_1 + 0x2f8),param_2,param_1,0);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 0xffffffff;
}

