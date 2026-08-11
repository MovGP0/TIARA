/* Ghidra address: 0094f020 */
/* Ghidra symbol: FUN_0094f020 */


undefined8 FUN_0094f020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00416420(param_3,&DAT_0094f08c);
  if (iVar1 == 0) {
    FUN_00414b90(param_2,L"http://www.w3.org/XML/1998/namespace");
  }
  else {
    iVar1 = FUN_00416420(param_3,L"xmlns");
    if (iVar1 == 0) {
      FUN_00414b90(param_2,L"http://www.w3.org/2000/xmlns/");
    }
    else {
      FUN_00414520(param_2);
    }
  }
  return param_2;
}

