/* Ghidra address: 00af5bc0 */
/* Ghidra symbol: FUN_00af5bc0 */


void FUN_00af5bc0(longlong param_1,ushort *param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  FUN_00a77ed0(param_1,param_2,param_3);
  if ((*(ushort *)(param_1 + 0x8a0) & 0x100) == 0) {
    if ((*param_2 == 0x74) && (param_3 == 0)) {
      plVar3 = *(longlong **)(param_1 + 0x768);
      if (plVar3 == (longlong *)0x0) {
        FUN_00afe4c0(param_1);
      }
      else {
        (**(code **)(*plVar3 + 0x260))(plVar3);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x758);
    iVar2 = *(int *)(lVar4 + 0x494);
    uVar1 = *param_2;
    iVar8 = iVar2;
    if (uVar1 < 0x24) {
      if (uVar1 == 0x23) {
        if (param_3 == 4) {
          iVar8 = *(int *)(param_1 + 0x908);
        }
      }
      else if (uVar1 == 0x20) {
        if (param_3 == 0) {
          iVar8 = iVar2 + (uint)*(ushort *)(lVar4 + 0x4aa);
        }
        else if (param_3 == 1) {
          iVar8 = iVar2 - (uint)*(ushort *)(lVar4 + 0x4aa);
        }
      }
      else if (uVar1 == 0x21) {
        if (param_3 == 0) {
          iVar8 = iVar2 - (uint)*(ushort *)(lVar4 + 0x4aa);
        }
      }
      else if ((uVar1 == 0x22) && (param_3 == 0)) {
        iVar8 = iVar2 + (uint)*(ushort *)(lVar4 + 0x4aa);
      }
    }
    else if (uVar1 == 0x24) {
      if (param_3 == 4) {
        iVar8 = 0;
      }
    }
    else if (uVar1 == 0x26) {
      if (param_3 == 0) {
        iVar8 = iVar2 - (uint)*(ushort *)(lVar4 + 0x4a8);
      }
    }
    else if ((uVar1 == 0x28) && (param_3 == 0)) {
      iVar8 = iVar2 + (uint)*(ushort *)(lVar4 + 0x4a8);
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar7 = *(int *)(param_1 + 0x908) - *(int *)(*(longlong *)(param_1 + 0x740) + 0x9c);
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (iVar7 != iVar2) {
      FUN_0068e980(lVar4,iVar7);
      FUN_00aa66b0(*(undefined8 *)(param_1 + 0x8b0),iVar7);
      uVar9 = iVar2 - iVar7;
      if (((*(ushort *)(param_1 + 0x8a0) & 1) == 0) &&
         ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) == (uint)*(ushort *)(lVar4 + 0x4a8)))
      {
        uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0x740));
        thunk_FUN_0418ab71(uVar6,0,uVar9,0,0);
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0x198))(*(longlong **)(param_1 + 0x740));
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0x180))(*(longlong **)(param_1 + 0x740));
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x750);
    iVar2 = *(int *)(lVar4 + 0x494);
    iVar8 = iVar2;
    if (*param_2 == 0x25) {
      if (param_3 == 0) {
        iVar8 = iVar2 - (uint)*(ushort *)(lVar4 + 0x4a8);
      }
    }
    else if ((*param_2 == 0x27) && (param_3 == 0)) {
      iVar8 = iVar2 + (uint)*(ushort *)(lVar4 + 0x4a8);
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar7 = *(int *)(lVar4 + 0x49c) - *(int *)(*(longlong *)(param_1 + 0x740) + 0x98);
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (iVar7 != iVar2) {
      FUN_0068e980(lVar4,iVar7);
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x180))(*(longlong **)(param_1 + 0x740));
    }
  }
  else {
    *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) & 0xfeff;
    uVar5 = FUN_00af6df0(param_1);
    FUN_0064e140(*(undefined8 *)(param_1 + 0x740),uVar5);
  }
  return;
}

