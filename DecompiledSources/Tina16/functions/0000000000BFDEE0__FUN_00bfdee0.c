/* Ghidra address: 00bfdee0 */
/* Ghidra symbol: FUN_00bfdee0 */


void FUN_00bfdee0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar3 = (longlong)*(short *)(param_2 + 8);
  if (lVar3 < 4) {
    if (lVar3 == 0) {
      FUN_00bfb1b0(param_1,*(int *)(param_1 + 0x50c) + -1);
    }
    else if (lVar3 == 1) {
      FUN_00bfb1b0(param_1,*(int *)(param_1 + 0x50c) + 1);
    }
    else if (lVar3 == 2) {
      FUN_00bfb1b0(param_1,*(int *)(param_1 + 0x50c) -
                           (*(int *)(param_1 + 0x4d0) -
                           (uint)((*(uint *)(param_1 + 0x63a) & 0x8000) != 0)));
    }
    else if (lVar3 == 3) {
      FUN_00bfb1b0(param_1,*(int *)(param_1 + 0x50c) +
                           (*(int *)(param_1 + 0x4d0) -
                           (uint)((*(uint *)(param_1 + 0x63a) & 0x8000) != 0)));
    }
  }
  else if (lVar3 - 4U < 2) {
    *(undefined1 *)(param_1 + 0x7e8) = 1;
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x40000) == 0) {
      iVar2 = FUN_00bcfa20(*(undefined8 *)(param_1 + 0x4e8));
      if (iVar2 < 2) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x510);
    }
    if (iVar2 < 0x8000) {
      FUN_00bfb1b0(param_1,(longlong)*(short *)(param_2 + 10));
    }
    else {
      uVar1 = thunk_FUN_03f3ed25(iVar2,(longlong)*(short *)(param_2 + 10),0x7fff);
      FUN_00bfb1b0(param_1,uVar1);
    }
  }
  else if (lVar3 == 6) {
    FUN_00bfb1b0(param_1,1);
  }
  else if (lVar3 == 7) {
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x40000) == 0) {
      uVar1 = FUN_00bcfa20(*(undefined8 *)(param_1 + 0x4e8));
      FUN_00bfb1b0(param_1,uVar1);
    }
    else {
      FUN_00bfb1b0(param_1,(*(int *)(param_1 + 0x510) - *(int *)(param_1 + 0x4d0)) + 1);
    }
  }
  else if (lVar3 == 8) {
    *(undefined1 *)(param_1 + 0x7e8) = 0;
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    (**(code **)(param_1 + 0x780))(*(undefined8 *)(param_1 + 0x788),param_1,0);
  }
  return;
}

