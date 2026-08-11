/* Ghidra address: 0043e530 */
/* Ghidra symbol: FUN_0043e530 */


bool FUN_0043e530(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

