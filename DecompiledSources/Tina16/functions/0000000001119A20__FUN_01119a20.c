/* Ghidra address: 01119a20 */
/* Ghidra symbol: FUN_01119a20 */


void FUN_01119a20(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  
  sVar2 = *(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2);
  if (sVar2 == 0) {
    FUN_01119940(param_1);
  }
  else if (sVar2 == 10) {
    FUN_011199c0(param_1);
  }
  else if (sVar2 == 0xd) {
    FUN_01119970(param_1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x161) = 0;
    do {
      if (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) == 0x7d) {
        plVar1 = param_1 + 0x2a;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar3,1)) {
          FUN_00410ab0();
        }
        *(undefined1 *)(param_1 + 0x2c) = 0;
        return;
      }
      cVar4 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
      if (cVar4 == '\0') {
        plVar1 = param_1 + 0x2a;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar3,1)) {
          FUN_00410ab0();
        }
      }
      cVar4 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    } while (cVar4 == '\0');
  }
  return;
}

