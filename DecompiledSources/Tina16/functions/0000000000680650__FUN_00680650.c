/* Ghidra address: 00680650 */
/* Ghidra symbol: FUN_00680650 */


bool FUN_00680650(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_0065b870(param_1);
    lVar3 = thunk_FUN_041b2403(uVar2,0xc6,0,0);
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}

