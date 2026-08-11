/* Ghidra address: 00b173f0 */
/* Ghidra symbol: FUN_00b173f0 */


bool FUN_00b173f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_00b171f0(param_1,param_2,2);
    bVar2 = iVar1 == 2;
  }
  return bVar2;
}

