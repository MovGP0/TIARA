/* Ghidra address: 0196f2d0 */
/* Ghidra symbol: FUN_0196f2d0 */


void FUN_0196f2d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_01977c80(param_1);
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x210);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))(plVar1);
    }
  }
  else {
    lVar3 = FUN_019810d0(&PTR_FUN_0193efb0,1,param_1,1);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + 0x10;
    }
    FUN_01980800(*(undefined8 *)(param_1 + 0x2b8),lVar3);
  }
  return;
}

