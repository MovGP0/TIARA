/* Ghidra address: 00628a40 */
/* Ghidra symbol: FUN_00628a40 */


ulonglong FUN_00628a40(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((param_2 == 0) && (param_3 == '\x01')) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x3c);
  }
  else {
    uVar1 = FUN_0044d490(&PTR_FUN_00627a48,1,L"Invalid ZStream operation!");
    uVar2 = FUN_004134c0(uVar1);
  }
  return uVar2;
}

