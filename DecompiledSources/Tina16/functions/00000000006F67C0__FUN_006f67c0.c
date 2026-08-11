/* Ghidra address: 006f67c0 */
/* Ghidra symbol: FUN_006f67c0 */


bool FUN_006f67c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x1030,0,FUN_006f1620);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}

