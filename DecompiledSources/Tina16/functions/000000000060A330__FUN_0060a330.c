/* Ghidra address: 0060a330 */
/* Ghidra symbol: FUN_0060a330 */


uint FUN_0060a330(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (*(int *)((longlong)param_1 + 0x54) == 0x20000000) {
    cVar1 = FUN_00609f50(param_1);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)FUN_00609e10(param_1);
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,0,iVar2 + -1);
    }
    else {
      uVar3 = 0xffffff;
    }
  }
  else {
    uVar3 = FUN_005fbf20(*(int *)((longlong)param_1 + 0x54));
  }
  return uVar3 | 0x2000000;
}

