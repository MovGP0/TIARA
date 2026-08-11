/* Ghidra address: 010681f0 */
/* Ghidra symbol: FUN_010681f0 */


void FUN_010681f0(longlong *param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_18;
  short *local_10;
  
  local_10 = (short *)0x0;
  local_18 = 0;
  FUN_004167d0(&local_18,param_1[0x24]);
  FUN_00bd17b0(&local_10,local_18);
  if (*local_10 == 0x23) {
    *(undefined1 *)((longlong)param_1 + 0x162) = 2;
    do {
      iVar3 = (int)param_1[0x2a];
      if (*(short *)(param_1[0x24] + (longlong)iVar3 * 2) == 0x2f) {
        lVar6 = param_1[0x24];
        iVar5 = iVar3 + 1;
        if (SCARRY4(iVar3,1)) {
          iVar5 = FUN_00410ab0();
        }
        sVar2 = *(short *)(lVar6 + (longlong)iVar5 * 2);
        if (sVar2 == 0x2f) {
          *(undefined1 *)((longlong)param_1 + 0x161) = 0;
          break;
        }
        if (sVar2 == 0x2a) {
          *(undefined1 *)((longlong)param_1 + 0x161) = 7;
          break;
        }
      }
      iVar3 = (int)param_1[0x2a];
      if (*(short *)(param_1[0x24] + (longlong)iVar3 * 2) == 0x5c) {
        lVar6 = param_1[0x24];
        iVar5 = iVar3 + 1;
        if (SCARRY4(iVar3,1)) {
          iVar5 = FUN_00410ab0();
        }
        if (*(short *)(lVar6 + (longlong)iVar5 * 2) == 0) {
          plVar1 = param_1 + 0x2a;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          if (SCARRY4((int)lVar6,1)) {
            FUN_00410ab0();
          }
          *(undefined1 *)((longlong)param_1 + 0x161) = 9;
          break;
        }
      }
      plVar1 = param_1 + 0x2a;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      if (SCARRY4((int)lVar6,1)) {
        FUN_00410ab0();
      }
      cVar4 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    } while (cVar4 == '\0');
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x162) = 10;
    param_1 = param_1 + 0x2a;
    lVar6 = *param_1;
    *(int *)param_1 = (int)*param_1 + 1;
    if (SCARRY4((int)lVar6,1)) {
      FUN_00410ab0();
    }
  }
  FUN_00414560(&local_18,2);
  return;
}

