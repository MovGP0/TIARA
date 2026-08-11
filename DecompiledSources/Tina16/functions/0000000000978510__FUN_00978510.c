/* Ghidra address: 00978510 */
/* Ghidra symbol: FUN_00978510 */


void FUN_00978510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x90);
  }
  else {
    lVar1 = FUN_008e5de0(&PTR_FUN_008d2398,param_2);
    if (lVar1 == 0) {
      uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Encoding not supported error.");
      lVar1 = FUN_004134c0(uVar2);
    }
    FUN_00410f20(lVar1);
    FUN_00414ad0(param_1 + 0x90,param_2);
  }
  FUN_009784b0(param_1);
  return;
}

