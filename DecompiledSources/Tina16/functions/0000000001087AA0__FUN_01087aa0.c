/* Ghidra address: 01087aa0 */
/* Ghidra symbol: FUN_01087aa0 */


void FUN_01087aa0(longlong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar6 = (int)param_1[0xd8];
  iVar4 = iVar6;
  if (iVar6 == 0) {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    if (*(char *)((longlong)param_1 + 0xbfc) == '\0') {
LAB_01087b11:
      bVar7 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0xbfc) != '\0') {
        uVar3 = FUN_0108bb30(param_1);
        if (*(uint *)(param_1 + 0x17f) <= uVar3) goto LAB_01087b11;
      }
      bVar7 = 0;
    }
    bVar1 = FUN_01085fb0(param_1,(int)param_1[0x991],local_30);
    if ((bVar7 & bVar1) != 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c8c) = 0;
      _Debug_SetTraceOverPc(param_1[0x164],0);
      _Debug_ClearStackFrames(param_1[0x164]);
      (**(code **)(*param_1 + 0x340))(param_1,1,0);
      FUN_0108b840(param_1,0);
      *(undefined1 *)(param_1 + 0x17d) = 1;
      iVar4 = 1;
    }
  }
  else {
    if (iVar6 == 2) {
      *(undefined1 *)(param_1 + 0x17d) = 1;
      *(undefined4 *)(param_1 + 0xd8) = 3;
      goto LAB_01088034;
    }
    if (iVar6 == 3) {
      iVar6 = _GetMCUStackPtr(param_1[0x164]);
      iVar4 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
      *(int *)((longlong)param_1 + 0x4c94) = iVar4;
      uVar2 = 3;
      if (iVar6 == *(int *)((longlong)param_1 + 0x4ca4)) {
        if ((int)param_1[0x994] == iVar4) {
          uVar2 = 4;
        }
        else {
          uVar2 = 1;
          (**(code **)(*param_1 + 0x340))(param_1,1,0);
          FUN_0108b840(param_1,0);
          *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
          *(undefined1 *)(param_1 + 0x17d) = 1;
        }
      }
      *(undefined4 *)(param_1 + 0xd8) = uVar2;
      goto LAB_01088034;
    }
    if (iVar6 == 4) {
      uVar2 = FUN_01085d60(param_1,(int)param_1[0x991],param_1 + 0x996,0);
      *(undefined4 *)((longlong)param_1 + 0x4c94) = uVar2;
      iVar5 = _GetMCUStackPtr(param_1[0x164]);
      if ((int)param_1[0x994] != *(int *)((longlong)param_1 + 0x4c94)) {
        if (iVar5 != *(int *)((longlong)param_1 + 0x4ca4)) {
          *(undefined4 *)(param_1 + 0xd8) = 3;
          goto LAB_01088034;
        }
        iVar4 = 1;
        (**(code **)(*param_1 + 0x340))(param_1,1,0);
        FUN_0108b840(param_1,0);
        *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
        *(undefined1 *)(param_1 + 0x17d) = 1;
      }
    }
  }
  if (iVar6 == 5) {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    iVar6 = FUN_01085d60(param_1,uVar2,local_30,0);
    if (0 < iVar6) {
      if (iVar6 == *(int *)((longlong)param_1 + 0x4c94)) {
        iVar6 = FUN_00416db0(local_30[0],param_1[0x996]);
        if (iVar6 == 0) goto LAB_01087d7c;
      }
      uVar2 = _Debug_GetTraceOverPc(param_1[0x164]);
      *(undefined4 *)((longlong)param_1 + 0x4c8c) = uVar2;
      iVar4 = 6;
    }
  }
LAB_01087d7c:
  if (iVar4 == 6) {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    iVar6 = *(int *)((longlong)param_1 + 0x4c8c);
    if ((((iVar6 != 0) && ((int)param_1[0x991] == iVar6)) || (iVar6 == 0)) ||
       (*(char *)((longlong)param_1 + 0x6c4) != '\0')) {
      *(undefined4 *)((longlong)param_1 + 0x4c8c) = 0;
      _Debug_SetTraceOverPc(param_1[0x164],0);
      iVar6 = FUN_01085d60(param_1,(int)param_1[0x991],local_30,0);
      if (iVar6 == -1) {
        iVar4 = 7;
      }
      else {
        iVar4 = 1;
        (**(code **)(*param_1 + 0x340))(param_1,1,0);
        FUN_0108b840(param_1,0);
        *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
        *(undefined1 *)(param_1 + 0x17d) = 1;
      }
    }
  }
  if (iVar4 == 7) {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    iVar6 = FUN_01085d60(param_1,uVar2,local_30,0);
    if (0 < iVar6) {
      if (iVar6 == *(int *)((longlong)param_1 + 0x4c94)) {
        iVar6 = FUN_00416db0(local_30[0],param_1[0x996]);
        if (iVar6 == 0) goto LAB_01087eca;
      }
      iVar4 = 1;
      (**(code **)(*param_1 + 0x340))(param_1,1,0);
      FUN_0108b840(param_1,0);
      *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
      *(undefined1 *)(param_1 + 0x17d) = 1;
    }
  }
LAB_01087eca:
  if ((iVar4 == 9) || (iVar4 == 0xb)) {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    iVar6 = (int)param_1[0x992];
    if (((iVar6 != 0) && ((int)param_1[0x991] == iVar6)) ||
       ((iVar6 == 0 || (*(char *)((longlong)param_1 + 0x6c4) != '\0')))) {
      *(undefined4 *)((longlong)param_1 + 0x4c8c) = 0;
      _Debug_SetTraceOverPc(param_1[0x164],0);
      iVar6 = FUN_01085d60(param_1,(int)param_1[0x991],local_30,0);
      if (iVar6 == -1) {
        iVar4 = 10;
      }
      else {
        iVar4 = 1;
        (**(code **)(*param_1 + 0x340))(param_1,1,0);
        FUN_0108b840(param_1,0);
        *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
        *(undefined1 *)(param_1 + 0x17d) = 1;
      }
    }
  }
  else if (iVar4 == 10) {
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x991) = uVar2;
    iVar6 = FUN_01085d60(param_1,uVar2,local_30,0);
    if (0 < iVar6) {
      if (iVar6 == *(int *)((longlong)param_1 + 0x4c94)) {
        iVar6 = FUN_00416db0(local_30[0],param_1[0x996]);
        if (iVar6 == 0) goto LAB_01088029;
      }
      iVar4 = 1;
      (**(code **)(*param_1 + 0x340))(param_1,1,0);
      FUN_0108b840(param_1,0);
      *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
      *(undefined1 *)(param_1 + 0x17d) = 1;
    }
  }
LAB_01088029:
  *(int *)(param_1 + 0xd8) = iVar4;
LAB_01088034:
  FUN_00414480(local_30);
  return;
}

