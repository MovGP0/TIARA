/* Ghidra address: 00b173c0 */
/* Ghidra symbol: FUN_00b173c0 */


bool FUN_00b173c0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_00b17220(param_1,param_2,param_3);
    bVar2 = iVar1 == param_3;
  }
  return bVar2;
}

