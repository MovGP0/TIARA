/* Ghidra address: 007fa260 */
/* Ghidra symbol: FUN_007fa260 */


ulonglong FUN_007fa260(ulonglong param_1,longlong param_2)

{
  short sVar1;
  ulonglong uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_58 [40];
  
  if (*(char *)(param_1 + 0x27) != '\0') {
    if (*(ushort *)(param_2 + 8) < 8) {
      bVar12 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
                ((byte)*(ushort *)(param_2 + 8) & 0x1f) & 0xfU) != 0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      if (*(ushort *)(param_2 + 8) < 2) {
        uVar4 = *(ushort *)(param_1 + 0x10);
        iVar11 = *(int *)(param_1 + 0x48);
        iVar5 = (int)((longlong)(ulonglong)uVar4 / (longlong)iVar11);
        uVar8 = (longlong)(ulonglong)uVar4 / (longlong)iVar11 & 0xffffffff;
        iVar10 = (int)((longlong)(ulonglong)uVar4 % (longlong)iVar11);
      }
      else {
        uVar4 = *(ushort *)(param_2 + 8) - 2;
        uVar8 = (ulonglong)uVar4;
        if (uVar4 < 2) {
          iVar11 = *(int *)(param_1 + 0x44);
          iVar10 = (int)((longlong)(ulonglong)*(ushort *)(param_1 + 0x12) % (longlong)iVar11);
          uVar2 = (longlong)(ulonglong)*(ushort *)(param_1 + 0x12) / (longlong)iVar11;
          uVar8 = uVar2 & 0xffffffff;
          iVar5 = (int)uVar2;
        }
        else {
          iVar11 = 0;
          iVar5 = 0;
          iVar10 = 0;
        }
      }
      iVar3 = 0;
      for (; 0 < iVar11; iVar11 = iVar11 + -1) {
        iVar6 = FUN_00427dd0();
        if ((uint)(iVar6 - iVar3) < *(uint *)(param_1 + 0x28)) {
          thunk_FUN_0419965d(*(uint *)(param_1 + 0x28) - (iVar6 - iVar3));
        }
        sVar1 = *(short *)(param_2 + 8);
        if (sVar1 == 0) {
          FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) - iVar5);
        }
        else if (sVar1 == 1) {
          FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) + iVar5);
        }
        else if (sVar1 == 2) {
          FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) - iVar5);
        }
        else if (sVar1 == 3) {
          FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) + iVar5);
        }
        uVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8));
        iVar3 = iVar6;
      }
      if (iVar10 < 1) {
        return uVar8;
      }
      sVar1 = *(short *)(param_2 + 8);
      if (sVar1 == 0) {
        uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) - iVar10);
        return uVar8;
      }
      if (sVar1 != 1) {
        if (sVar1 == 2) {
          uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) - iVar10);
          return uVar8;
        }
        if ((ushort)(sVar1 - 3U) != 0) {
          return (ulonglong)(ushort)(sVar1 - 3U);
        }
        uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) + iVar10);
        return uVar8;
      }
      uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) + iVar10);
      return uVar8;
    }
  }
  lVar9 = (longlong)*(short *)(param_2 + 8);
  if (lVar9 < 5) {
    if (lVar9 == 4) {
      if (*(int *)(param_1 + 0x1c) < 0x8000) {
        uVar8 = FUN_007fa6c0(param_1,(longlong)*(short *)(param_2 + 10));
      }
      else {
        uVar7 = FUN_007fa200(auStack_58);
        uVar8 = FUN_007fa6c0(param_1,uVar7);
      }
    }
    else if (lVar9 == 0) {
      uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) - (uint)*(ushort *)(param_1 + 0x10));
    }
    else if (lVar9 == 1) {
      uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) + (uint)*(ushort *)(param_1 + 0x10));
    }
    else if (lVar9 == 2) {
      iVar11 = FUN_007fa0c0(param_1,1,0);
      uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) - iVar11);
    }
    else {
      uVar8 = lVar9 - 3U;
      if (lVar9 - 3U == 0) {
        iVar11 = FUN_007fa0c0(param_1,1,0);
        uVar8 = FUN_007fa6c0(param_1,*(int *)(param_1 + 0x14) + iVar11);
      }
    }
  }
  else if (lVar9 == 5) {
    uVar8 = param_1;
    if (*(char *)(param_1 + 0x25) != '\0') {
      if (*(int *)(param_1 + 0x1c) < 0x8000) {
        uVar8 = FUN_007fa6c0(param_1,(longlong)*(short *)(param_2 + 10));
      }
      else {
        uVar7 = FUN_007fa200(auStack_58);
        uVar8 = FUN_007fa6c0(param_1,uVar7);
      }
    }
  }
  else if (lVar9 == 6) {
    uVar8 = FUN_007fa6c0(param_1,0);
  }
  else {
    uVar8 = lVar9 - 7U;
    if (lVar9 - 7U == 0) {
      uVar8 = FUN_007fa6c0(param_1,*(undefined4 *)(param_1 + 0x1c));
    }
  }
  return uVar8;
}

