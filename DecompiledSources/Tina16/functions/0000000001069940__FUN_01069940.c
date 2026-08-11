/* Ghidra address: 01069940 */
/* Ghidra symbol: FUN_01069940 */


void FUN_01069940(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  *(undefined1 *)((longlong)param_1 + 0x162) = 8;
  do {
    iVar3 = (int)param_1[0x2a];
    if (*(short *)(param_1[0x24] + (longlong)iVar3 * 2) == 0x5c) {
      lVar6 = param_1[0x24];
      iVar5 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        iVar5 = FUN_00410ab0();
      }
      sVar2 = *(short *)(lVar6 + (longlong)iVar5 * 2);
      if (sVar2 == 0) {
        plVar1 = param_1 + 0x2a;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar6,1)) {
          FUN_00410ab0();
        }
        *(undefined1 *)((longlong)param_1 + 0x161) = 8;
        return;
      }
      if ((sVar2 == 0x22) || (sVar2 == 0x5c)) {
        plVar1 = param_1 + 0x2a;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar6,1)) {
          FUN_00410ab0();
        }
      }
    }
    plVar1 = param_1 + 0x2a;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    if (SCARRY4((int)lVar6,1)) {
      FUN_00410ab0();
    }
    cVar4 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
  } while ((cVar4 == '\0') && (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) != 0x22)
          );
  if (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) == 0x22) {
    param_1 = param_1 + 0x2a;
    lVar6 = *param_1;
    *(int *)param_1 = (int)*param_1 + 1;
    if (SCARRY4((int)lVar6,1)) {
      FUN_00410ab0();
    }
  }
  return;
}

