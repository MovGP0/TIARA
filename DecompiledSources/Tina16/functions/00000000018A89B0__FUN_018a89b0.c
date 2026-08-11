/* Ghidra address: 018a89b0 */
/* Ghidra symbol: FUN_018a89b0 */


void FUN_018a89b0(longlong *param_1,short *param_2,ushort param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_00659710(param_1,param_2,param_3);
  if (*param_2 == 0x26) {
    FUN_018933f0(param_1[0xaa],*(int *)(param_1[0xaa] + 0x4b4) + -8);
  }
  else if (*param_2 == 0x28) {
    FUN_018933f0(param_1[0xaa],*(int *)(param_1[0xaa] + 0x4b4) + 8);
  }
  else if (*param_2 == 0x25) {
    FUN_018932d0(param_1[0xaa],*(int *)(param_1[0xaa] + 0x4a0) + -8);
  }
  else if (*param_2 == 0x27) {
    FUN_018932d0(param_1[0xaa],*(int *)(param_1[0xaa] + 0x4a0) + 8);
  }
  else if (*param_2 == 0x21) {
    if ((param_3 & 4) == 0) {
      FUN_018933f0(param_1[0xaa],*(int *)(param_1[0xaa] + 0x4b4) + -300);
    }
    else {
      FUN_018a9020(param_1,(int)param_1[0xa5] + -1);
    }
  }
  else if (*param_2 == 0x22) {
    if ((param_3 & 4) == 0) {
      FUN_018933f0(param_1[0xaa],*(int *)(param_1[0xaa] + 0x4b4) + 300);
    }
    else {
      FUN_018a9020(param_1,(int)param_1[0xa5] + 1);
    }
  }
  else if (*param_2 == 0x24) {
    FUN_018a9020(param_1,1);
  }
  else if (*param_2 == 0x23) {
    uVar1 = FUN_018a9b40(param_1);
    FUN_018a9020(param_1,uVar1);
  }
  else {
    if ((*param_2 == 0x72) &&
       (lVar2 = (**(code **)(*param_1 + 0x268))(param_1),
       (*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 0x20) != 0)) {
      FUN_018aac40(param_1);
      return;
    }
    if ((param_3 & 4) != 0) {
      if ((*param_2 == 0x50) &&
         (lVar2 = (**(code **)(*param_1 + 0x268))(param_1),
         (*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 1) != 0)) {
        FUN_018a9f30(param_1);
        return;
      }
      if ((*param_2 == 0x53) &&
         (lVar2 = (**(code **)(*param_1 + 0x268))(param_1),
         (*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 4) != 0)) {
        FUN_018a9fe0(param_1);
        return;
      }
      if ((*param_2 == 0x46) &&
         (lVar2 = (**(code **)(*param_1 + 0x268))(param_1),
         (*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 0x20) != 0)) {
        FUN_018aabc0(param_1);
        return;
      }
      if ((*param_2 == 0x4f) &&
         (lVar2 = (**(code **)(*param_1 + 0x268))(param_1),
         (*(uint *)(*(longlong *)(lVar2 + 0x220) + 10) & 2) != 0)) {
        FUN_018aa2d0(param_1);
      }
    }
  }
  return;
}

