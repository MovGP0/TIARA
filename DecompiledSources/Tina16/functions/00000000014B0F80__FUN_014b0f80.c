/* Ghidra address: 014b0f80 */
/* Ghidra symbol: FUN_014b0f80 */


void FUN_014b0f80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = param_1 + 0x2a;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  if (SCARRY4((int)lVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)((longlong)param_1 + 0x161) = 7;
  while( true ) {
    if (0x20 < *(ushort *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2)) {
      return;
    }
    cVar3 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    if (cVar3 != '\0') break;
    plVar1 = param_1 + 0x2a;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    if (SCARRY4((int)lVar2,1)) {
      FUN_00410ab0();
    }
  }
  return;
}

