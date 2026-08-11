/* Ghidra address: 006f6760 */
/* Ghidra symbol: FUN_006f6760 */


bool FUN_006f6760(undefined8 param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar4 = false;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    if (param_2 == (code *)0x0) {
      param_2 = FUN_006f1620;
    }
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x1030,param_3,param_2);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}

