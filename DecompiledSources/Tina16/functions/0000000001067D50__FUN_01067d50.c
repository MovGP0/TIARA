/* Ghidra address: 01067d50 */
/* Ghidra symbol: FUN_01067d50 */


void FUN_01067d50(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  
  *(undefined1 *)((longlong)param_1 + 0x162) = 1;
  sVar2 = *(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2);
  if (sVar2 == 0) {
    FUN_010689b0(param_1);
  }
  else if (sVar2 == 10) {
    FUN_01068710(param_1);
  }
  else if (sVar2 == 0xd) {
    FUN_010680f0(param_1);
  }
  else {
    while( true ) {
      while( true ) {
        iVar3 = (int)param_1[0x2a];
        sVar2 = *(short *)(param_1[0x24] + (longlong)iVar3 * 2);
        if (sVar2 == 0) {
          return;
        }
        if (sVar2 == 10) {
          return;
        }
        if (sVar2 == 0xd) {
          return;
        }
        if (sVar2 == 0x2a) break;
        plVar1 = param_1 + 0x2a;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar5,1)) {
          FUN_00410ab0();
        }
      }
      lVar5 = param_1[0x24];
      iVar6 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        lVar5 = FUN_00410ab0();
      }
      if (*(short *)(lVar5 + (longlong)iVar6 * 2) == 0x2f) break;
      plVar1 = param_1 + 0x2a;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      if (SCARRY4((int)lVar5,1)) {
        FUN_00410ab0();
      }
    }
    plVar1 = param_1 + 0x2a;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 2;
    if (SCARRY4((int)lVar5,2)) {
      FUN_00410ab0();
    }
    if (*(char *)((longlong)param_1 + 0x161) == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x161) = 4;
    }
    else if (*(char *)((longlong)param_1 + 0x161) == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x161) = 5;
    }
    else {
      if ((*(char *)((longlong)param_1 + 0x161) == '\a') &&
         (cVar4 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x161) = 9;
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x161) = 0;
    }
  }
  return;
}

