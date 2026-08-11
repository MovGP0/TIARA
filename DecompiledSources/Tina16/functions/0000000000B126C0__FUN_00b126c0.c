/* Ghidra address: 00b126c0 */
/* Ghidra symbol: FUN_00b126c0 */


void FUN_00b126c0(longlong *param_1,ushort *param_2,short param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_38 [40];
  
  uVar1 = *param_2;
  if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      if (param_3 == 4) {
        iVar3 = FUN_00b10ba0(param_1);
        FUN_00b12690(auStack_38,iVar3 + -1);
      }
      else if (param_3 == 0) {
        iVar3 = FUN_00b10ba0(param_1);
        if (*(int *)((longlong)param_1 + 0x4ac) == iVar3 + -1) {
          cVar2 = FUN_00b125e0(auStack_38);
          if (cVar2 != '\0') {
            uVar4 = FUN_00b11fb0(param_1,0,0,1);
            FUN_00b12690(auStack_38,uVar4);
          }
        }
      }
    }
    else if (uVar1 == 0x1b) {
      FUN_00b12350(param_1);
    }
    else if ((uVar1 == 0x26) && (param_3 == 4)) {
      FUN_00b12690(auStack_38,(int)param_1[0x98]);
    }
  }
  else if (uVar1 == 0x2d) {
    cVar2 = FUN_00b125e0(auStack_38);
    if (cVar2 != '\0') {
      uVar4 = FUN_00b11fb0(param_1,0,0,0);
      FUN_00b12690(auStack_38,uVar4);
    }
  }
  else if (((uVar1 == 0x2e) && (param_3 == 4)) && ((*(byte *)(param_1 + 0xc1) & 4) != 0)) {
    plVar5 = (longlong *)FUN_00b11070(param_1);
    iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (0 < iVar3) {
      (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined4 *)((longlong)param_1 + 0x4ac));
    }
    *param_2 = 0;
  }
  FUN_00845ea0(param_1,param_2,param_3);
  return;
}

