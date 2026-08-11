/* Ghidra address: 0054c670 */
/* Ghidra symbol: FUN_0054c670 */


undefined8 FUN_0054c670(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar2 = FUN_00547190(param_1);
  if (*(longlong *)(lVar2 + 9) == 0) {
    bVar5 = true;
  }
  else {
    lVar3 = FUN_00547190(param_1);
    lVar2 = 0;
    if (*(longlong **)(lVar3 + 9) != (longlong *)0x0) {
      lVar2 = **(longlong **)(lVar3 + 9);
    }
    lVar3 = FUN_005466a0(param_1);
    bVar5 = lVar2 == lVar3;
  }
  if (!bVar5) {
    uVar4 = FUN_005466a0(param_1);
    cVar1 = FUN_00534d20(uVar4);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

