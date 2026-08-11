/* Ghidra address: 00949a90 */
/* Ghidra symbol: FUN_00949a90 */


void FUN_00949a90(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)param_2 >> 8);
  uVar1 = (undefined1)param_2;
  if (param_2 == 0) {
    uVar1 = 1;
    param_1 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0();
  }
  *(ulonglong *)(param_1 + 8) = CONCAT71(uVar2,uVar1);
  return;
}

