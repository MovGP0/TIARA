/* Ghidra address: 0043e560 */
/* Ghidra symbol: FUN_0043e560 */


undefined1 FUN_0043e560(longlong param_1,longlong param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == '\x01') {
    uVar1 = FUN_0043e740();
  }
  else if (param_1 == param_2) {
    uVar1 = 1;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_0043e420();
    uVar1 = iVar2 == 0;
  }
  return uVar1;
}

