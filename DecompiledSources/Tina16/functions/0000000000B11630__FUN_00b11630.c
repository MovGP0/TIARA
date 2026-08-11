/* Ghidra address: 00b11630 */
/* Ghidra symbol: FUN_00b11630 */


void FUN_00b11630(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_00b11070(param_1);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x4c0) + 1;
  }
  else {
    plVar3 = (longlong *)FUN_00b11070(param_1);
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    iVar1 = iVar1 + *(int *)(param_1 + 0x4c0);
  }
  iVar2 = FUN_00b10ba0(param_1);
  if (iVar1 != iVar2) {
    if (iVar1 < *(int *)(param_1 + 0x4ac)) {
      FUN_00848a30(param_1,iVar1 + -1);
    }
    if (((*(byte *)(param_1 + 0x609) & 1) != 0) && (*(int *)(param_1 + 0x4ac) == 0)) {
      FUN_00848a30(param_1,1);
    }
    FUN_00848a70(param_1,iVar1);
  }
  return;
}

