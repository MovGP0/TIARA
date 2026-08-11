/* Ghidra address: 01614270 */
/* Ghidra symbol: FUN_01614270 */


undefined8 FUN_01614270(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01614590(param_2);
  if (iVar1 == 0x3eb) {
    FUN_00414ad0(param_1,L"TIME");
  }
  else {
    iVar1 = FUN_01614590(param_2);
    if (iVar1 == 0x3ec) {
      FUN_00414ad0(param_1,L"TEMP");
    }
    else {
      iVar1 = FUN_01614590(param_2);
      if (iVar1 == 0x3ed) {
        FUN_00414ad0(param_1,&PTR_DAT_01614334);
      }
      else {
        FUN_01613110(L"GetSystemOpStr");
      }
    }
  }
  return param_1;
}

