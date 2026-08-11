/* Ghidra address: 01094180 */
/* Ghidra symbol: FUN_01094180 */


void FUN_01094180(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (SEXT816((longlong)(int)param_1[0x2a] * 2) !=
      SEXT816((longlong)(int)param_1[0x2a]) * SEXT816(2)) {
    FUN_00410ab0(param_1);
  }
  uVar3 = FUN_01093ae0();
  *(undefined1 *)((longlong)param_1 + 0x161) = uVar3;
  plVar1 = param_1 + 0x2a;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + *(int *)((longlong)param_1 + 0x13c);
  if (SCARRY4((int)lVar2,*(int *)((longlong)param_1 + 0x13c))) {
    FUN_00410ab0();
  }
  while( true ) {
    cVar4 = (**(code **)(*param_1 + 400))
                      (param_1,*(undefined2 *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2));
    if (cVar4 == '\0') break;
    plVar1 = param_1 + 0x2a;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    if (SCARRY4((int)lVar2,1)) {
      FUN_00410ab0();
    }
  }
  return;
}

