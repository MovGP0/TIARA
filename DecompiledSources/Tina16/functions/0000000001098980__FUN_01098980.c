/* Ghidra address: 01098980 */
/* Ghidra symbol: FUN_01098980 */


void FUN_01098980(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[0x2a] == 1) {
LAB_010989c5:
    *(undefined1 *)((longlong)param_1 + 0x161) = 2;
    param_1 = param_1 + 0x2a;
    lVar5 = *param_1;
    *(int *)param_1 = (int)*param_1 + 1;
    if (SCARRY4((int)lVar5,1)) {
      FUN_00410ab0();
    }
  }
  else {
    if (1 < (int)param_1[0x2a]) {
      if (SBORROW4((int)param_1[0x2a],1)) {
        FUN_00410ab0(param_1);
      }
      cVar3 = (**(code **)(*param_1 + 400))();
      if (cVar3 != '\0') goto LAB_010989c5;
    }
    *(undefined1 *)((longlong)param_1 + 0x161) = 0;
    iVar4 = (int)param_1[0x2a];
    lVar5 = param_1[0x24];
    iVar6 = iVar4 + 1;
    if (SCARRY4(iVar4,1)) {
      iVar4 = FUN_00410ab0();
    }
    if (*(short *)(lVar5 + (longlong)iVar6 * 2) == 0x27) {
      lVar5 = param_1[0x24];
      iVar6 = iVar4 + 2;
      if (SCARRY4(iVar4,2)) {
        iVar6 = FUN_00410ab0();
      }
      if (*(short *)(lVar5 + (longlong)iVar6 * 2) == 0x27) {
        plVar1 = param_1 + 0x2a;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 2;
        if (SCARRY4((int)lVar5,2)) {
          FUN_00410ab0();
        }
      }
    }
    do {
      iVar4 = (int)param_1[0x2a];
      sVar2 = *(short *)(param_1[0x24] + (longlong)iVar4 * 2);
      if (((sVar2 == 0) || (sVar2 == 10)) || (sVar2 == 0xd)) break;
      if (sVar2 == 0x5c) {
        lVar5 = param_1[0x24];
        iVar6 = iVar4 + 1;
        if (SCARRY4(iVar4,1)) {
          iVar6 = FUN_00410ab0();
        }
        if (*(short *)(lVar5 + (longlong)iVar6 * 2) == 10) {
          plVar1 = param_1 + 0x2a;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          if (SCARRY4((int)lVar5,1)) {
            FUN_00410ab0();
          }
        }
      }
      plVar1 = param_1 + 0x2a;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      if (SCARRY4((int)lVar5,1)) {
        FUN_00410ab0();
      }
    } while (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) != 0x27);
    if (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) != 0) {
      param_1 = param_1 + 0x2a;
      lVar5 = *param_1;
      *(int *)param_1 = (int)*param_1 + 1;
      if (SCARRY4((int)lVar5,1)) {
        FUN_00410ab0();
      }
    }
  }
  return;
}

