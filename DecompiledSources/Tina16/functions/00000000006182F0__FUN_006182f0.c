/* Ghidra address: 006182f0 */
/* Ghidra symbol: FUN_006182f0 */


void FUN_006182f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00427be0(L"ole32.dll");
  if (lVar1 != 0) {
    DAT_02012090 = (code *)FUN_00427c10(lVar1,L"CoWaitForMultipleHandles");
  }
  if (DAT_02012090 == (code *)0x0) {
    DAT_02012090 = FUN_006181e0;
  }
  return;
}

