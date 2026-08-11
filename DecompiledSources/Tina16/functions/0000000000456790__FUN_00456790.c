/* Ghidra address: 00456790 */
/* Ghidra symbol: FUN_00456790 */


bool FUN_00456790(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  bVar6 = false;
  if (param_3 < 0) {
    bVar1 = true;
  }
  else {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    bVar1 = iVar3 + -1 < param_3;
  }
  if (!bVar1) {
    cVar2 = FUN_0044f380(*param_1,param_3);
    if (cVar2 == '\0') {
      uVar4 = FUN_00416740(param_2);
      lVar5 = FUN_00442980(uVar4,*(undefined2 *)(*param_1 + (longlong)param_3 * 2));
      bVar6 = lVar5 != 0;
    }
  }
  return bVar6;
}

