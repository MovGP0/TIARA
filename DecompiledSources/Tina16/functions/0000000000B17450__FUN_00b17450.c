/* Ghidra address: 00b17450 */
/* Ghidra symbol: FUN_00b17450 */


bool FUN_00b17450(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00b171f0();
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

