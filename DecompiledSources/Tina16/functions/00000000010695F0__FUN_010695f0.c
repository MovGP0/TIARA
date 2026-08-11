/* Ghidra address: 010695f0 */
/* Ghidra symbol: FUN_010695f0 */


void FUN_010695f0(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = param_1[0x24];
  iVar5 = (int)param_1[0x2a] + 1;
  if (SCARRY4((int)param_1[0x2a],1)) {
    lVar4 = FUN_00410ab0();
  }
  sVar2 = *(short *)(lVar4 + (longlong)iVar5 * 2);
  if (sVar2 == 0x2a) {
    *(undefined1 *)((longlong)param_1 + 0x162) = 1;
    cVar3 = *(char *)((longlong)param_1 + 0x161);
    if (cVar3 == '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x161) = 2;
    }
    else if (cVar3 == '\x05') {
      *(undefined1 *)((longlong)param_1 + 0x161) = 3;
    }
    else if (cVar3 != '\a') {
      *(undefined1 *)((longlong)param_1 + 0x161) = 1;
    }
    plVar1 = param_1 + 0x2a;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 2;
    if (SCARRY4((int)lVar4,2)) {
      FUN_00410ab0();
    }
    while( true ) {
      iVar5 = (int)param_1[0x2a];
      sVar2 = *(short *)(param_1[0x24] + (longlong)iVar5 * 2);
      if (sVar2 == 0) break;
      if ((sVar2 == 10) || (sVar2 == 0xd)) {
        if (*(char *)((longlong)param_1 + 0x161) != '\a') {
          return;
        }
        *(undefined1 *)((longlong)param_1 + 0x161) = 1;
        return;
      }
      if (sVar2 == 0x2a) {
        lVar4 = param_1[0x24];
        iVar6 = iVar5 + 1;
        if (SCARRY4(iVar5,1)) {
          lVar4 = FUN_00410ab0();
        }
        if (*(short *)(lVar4 + (longlong)iVar6 * 2) == 0x2f) {
          plVar1 = param_1 + 0x2a;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + 2;
          if (SCARRY4((int)lVar4,2)) {
            FUN_00410ab0();
          }
          cVar3 = *(char *)((longlong)param_1 + 0x161);
          if (cVar3 == '\a') {
            *(undefined1 *)((longlong)param_1 + 0x161) = 9;
            return;
          }
          if (cVar3 == '\x02') {
            *(undefined1 *)((longlong)param_1 + 0x161) = 4;
            return;
          }
          if (cVar3 == '\x03') {
            *(undefined1 *)((longlong)param_1 + 0x161) = 5;
            return;
          }
          *(undefined1 *)((longlong)param_1 + 0x161) = 0;
          return;
        }
        plVar1 = param_1 + 0x2a;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar4,1)) {
          FUN_00410ab0();
        }
      }
      else {
        plVar1 = param_1 + 0x2a;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar4,1)) {
          FUN_00410ab0();
        }
      }
    }
  }
  else if (sVar2 == 0x2f) {
    *(undefined1 *)((longlong)param_1 + 0x162) = 1;
    plVar1 = param_1 + 0x2a;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 2;
    if (SCARRY4((int)lVar4,2)) {
      FUN_00410ab0();
    }
    while (cVar3 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]), cVar3 == '\0') {
      plVar1 = param_1 + 0x2a;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      if (SCARRY4((int)lVar4,1)) {
        FUN_00410ab0();
      }
    }
  }
  else if (sVar2 == 0x3d) {
    plVar1 = param_1 + 0x2a;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 2;
    if (SCARRY4((int)lVar4,2)) {
      FUN_00410ab0();
    }
    *(undefined1 *)((longlong)param_1 + 0x162) = 9;
    *(undefined1 *)((longlong)param_1 + 0x163) = 0xd;
  }
  else {
    plVar1 = param_1 + 0x2a;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    if (SCARRY4((int)lVar4,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)((longlong)param_1 + 0x162) = 9;
    *(undefined1 *)((longlong)param_1 + 0x163) = 0xc;
  }
  return;
}

