/* Ghidra address: 010683a0 */
/* Ghidra symbol: FUN_010683a0 */


void FUN_010683a0(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  
  *(undefined1 *)((longlong)param_1 + 0x162) = 2;
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
    *(undefined1 *)((longlong)param_1 + 0x161) = 0;
    do {
      iVar4 = (int)param_1[0x2a];
      uVar3 = *(ushort *)(param_1[0x24] + (longlong)iVar4 * 2);
      if (uVar3 < 0xe) {
        if (uVar3 == 0xd) {
          return;
        }
        if (uVar3 == 0) {
          return;
        }
        if (uVar3 == 10) {
          return;
        }
      }
      else if (uVar3 == 0x2f) {
        lVar7 = param_1[0x24];
        iVar6 = iVar4 + 1;
        if (SCARRY4(iVar4,1)) {
          iVar6 = FUN_00410ab0();
        }
        sVar2 = *(short *)(lVar7 + (longlong)iVar6 * 2);
        if (sVar2 == 0x2a) {
          *(undefined1 *)((longlong)param_1 + 0x161) = 7;
          return;
        }
        if (sVar2 == 0x2f) {
          *(undefined1 *)((longlong)param_1 + 0x161) = 0;
          return;
        }
      }
      else if (uVar3 == 0x5c) {
        lVar7 = param_1[0x24];
        iVar6 = iVar4 + 1;
        if (SCARRY4(iVar4,1)) {
          iVar6 = FUN_00410ab0();
        }
        if (*(short *)(lVar7 + (longlong)iVar6 * 2) == 0) {
          plVar1 = param_1 + 0x2a;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          if (SCARRY4((int)lVar7,1)) {
            FUN_00410ab0();
          }
          *(undefined1 *)((longlong)param_1 + 0x161) = 9;
          return;
        }
      }
      plVar1 = param_1 + 0x2a;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      if (SCARRY4((int)lVar7,1)) {
        FUN_00410ab0();
      }
      cVar5 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    } while (cVar5 == '\0');
  }
  return;
}

