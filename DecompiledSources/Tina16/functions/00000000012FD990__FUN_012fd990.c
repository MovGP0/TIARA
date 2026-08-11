/* Ghidra address: 012fd990 */
/* Ghidra symbol: FUN_012fd990 */


undefined1 FUN_012fd990(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_148 [44];
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_68;
  undefined8 local_60;
  int local_54;
  longlong *local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_148;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_50 = (longlong *)0x0;
  local_60 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  local_68 = *(char **)(param_2 + 0x18);
  (**(code **)(*local_res18 + 0x148))(local_res18,&local_50,L"action");
  (**(code **)(*local_res20 + 0x98))(local_res20,&local_a8,local_50);
  if (*local_68 != '\0') {
    (**(code **)(*local_50 + 0x108))(local_50,L"mode",&DAT_012feb00);
  }
  if (local_68[2] != '\0') {
    (**(code **)(*local_50 + 0x108))(local_50,L"mode",&PTR_DAT_012feb14);
  }
  if (local_68[1] != '\0') {
    (**(code **)(*local_50 + 0x108))(local_50,L"mode",&PTR_DAT_012feb28);
  }
  local_41 = 1;
  FUN_00414b50(&local_60,L"runThis");
  iVar3 = FUN_006dd6f0(param_2);
  uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
  cVar2 = FUN_012e5840(uVar5);
  if (cVar2 == '\0') {
    (**(code **)(*local_res20 + 0x108))(local_res20,local_60,L"false");
  }
  else {
    (**(code **)(*local_res20 + 0x108))(local_res20,local_60,L"true");
  }
  iVar3 = FUN_006dd6f0(param_2);
  uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
  iVar3 = FUN_012e5860(uVar5);
  if (iVar3 == 1) {
    (**(code **)(*local_50 + 0x108))(local_50,L"action",L"Save");
  }
  else {
    iVar3 = FUN_006dd6f0(param_2);
    uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
    iVar3 = FUN_012e5860(uVar5);
    if (iVar3 == 2) {
      (**(code **)(*local_50 + 0x108))(local_50,L"action",L"Compare");
    }
    else {
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      iVar3 = FUN_012e5860(uVar5);
      if (iVar3 == 3) {
        (**(code **)(*local_50 + 0x108))(local_50,L"action",L"Just run");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,L"action",L"Do not run");
      }
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xaf8);
  if (lVar1 != 0) {
    iVar3 = FUN_006dd6f0(param_2);
    uVar5 = FUN_004aeac0(lVar1,iVar3 + -1);
    iVar3 = FUN_012e58b0(uVar5);
    if (0 < iVar3) {
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      uVar4 = FUN_012e5710(uVar5);
      FUN_0043f750(&local_b0,uVar4);
      (**(code **)(*local_50 + 0x108))(local_50,L"simType",local_b0);
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      uVar4 = FUN_012e5860(uVar5);
      FUN_0043f750(&local_b8,uVar4);
      (**(code **)(*local_50 + 0x108))(local_50,L"simSetting",local_b8);
      FUN_00414480(local_20);
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      local_78 = FUN_012e5730(uVar5);
      FUN_00448450(local_20,local_78,PTR_DAT_02004830);
      (**(code **)(*local_50 + 0x108))(local_50,L"compRangeFrom",local_20[0]);
      FUN_00414480(local_20);
      FUN_00414480(&local_28);
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      local_80 = FUN_012e5750(uVar5);
      FUN_00448450(&local_28,local_80,PTR_DAT_02004830);
      (**(code **)(*local_50 + 0x108))(local_50,L"compRangeTo",local_28);
      FUN_00414480(&local_28);
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      uVar4 = FUN_012e5880(uVar5);
      FUN_0043f750(&local_c0,uVar4);
      (**(code **)(*local_50 + 0x108))(local_50,L"smplPoints",local_c0);
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      uVar4 = FUN_012e58a0(uVar5);
      FUN_0043f750(&local_c8,uVar4);
      (**(code **)(*local_50 + 0x108))(local_50,L"showOptions",local_c8);
      FUN_00414b50(&local_60,L"globalCompTimeCheck");
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      cVar2 = FUN_012e57a0(uVar5);
      if (cVar2 == '\0') {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
      }
      FUN_00414b50(&local_60,L"addSpiceResult");
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      cVar2 = FUN_012e57c0(uVar5);
      if (cVar2 == '\0') {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
      }
      FUN_00414b50(&local_60,L"addLTSpice");
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      cVar2 = FUN_012e57e0(uVar5);
      if (cVar2 == '\0') {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
      }
      FUN_00414b50(&local_60,L"addPSpice");
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      cVar2 = FUN_012e5800(uVar5);
      if (cVar2 == '\0') {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
      }
      FUN_00414b50(&local_60,L"addSIMetrix");
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      cVar2 = FUN_012e5820(uVar5);
      if (cVar2 == '\0') {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
      }
      FUN_00414b50(&local_60,L"useDatasheetMinMaxVals");
      iVar3 = FUN_006dd6f0(param_2);
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      cVar2 = FUN_012e53a0(uVar5);
      if (cVar2 == '\0') {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
      }
      else {
        (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
      }
      iVar3 = FUN_006dd6f0(param_2);
      FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
      iVar3 = FUN_012e58b0();
      local_11c = iVar3 + -1;
      local_54 = 0;
      if (-1 < local_11c) {
        do {
          local_11c = iVar3;
          FUN_0043f750(&local_d0,local_54);
          FUN_00416ba0(&local_60,L"checkedRef",local_d0);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          cVar2 = FUN_012e5ee0(uVar5,local_54);
          if (cVar2 == '\0') {
            (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
          }
          else {
            (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
          }
          FUN_0043f750(&local_d8,local_54);
          FUN_00416ba0(&local_60,L"checkedCompTime",local_d8);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          cVar2 = FUN_012e5f30(uVar5,local_54);
          if (cVar2 == '\0') {
            (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
          }
          else {
            (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
          }
          FUN_0043f750(&local_e0,local_54);
          FUN_00416ba0(&local_60,L"visibility",local_e0);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          cVar2 = FUN_012e5f80(uVar5,local_54);
          if (cVar2 == '\0') {
            (**(code **)(*local_50 + 0x108))(local_50,local_60,L"false");
          }
          else {
            (**(code **)(*local_50 + 0x108))(local_50,local_60,L"true");
          }
          FUN_0043f750(&local_e8,local_54);
          FUN_00416ba0(&local_60,L"selected",local_e8);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          uVar4 = FUN_012e5fd0(uVar5,local_54);
          FUN_0043f750(&local_f0,uVar4);
          (**(code **)(*local_50 + 0x108))(local_50,local_60,local_f0);
          FUN_0043f750(&local_f8,local_54);
          FUN_00416ba0(&local_60,L"sryType",local_f8);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          uVar4 = FUN_012e6020(uVar5,local_54);
          FUN_0043f750(&local_100,uVar4);
          (**(code **)(*local_50 + 0x108))(local_50,local_60,local_100);
          FUN_0043f750(&local_108,local_54);
          FUN_00416ba0(&local_60,L"timeFrom",local_108);
          FUN_00414480(&local_30);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          local_88 = FUN_012e6090(uVar5,local_54);
          FUN_00448450(&local_30,local_88,PTR_DAT_02004830);
          (**(code **)(*local_50 + 0x108))(local_50,local_60,local_30);
          FUN_00414480(&local_30);
          FUN_0043f750(&local_110,local_54);
          FUN_00416ba0(&local_60,L"timeTo",local_110);
          FUN_00414480(&local_38);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          local_90 = FUN_012e6110(uVar5,local_54);
          FUN_00448450(&local_38,local_90,PTR_DAT_02004830);
          (**(code **)(*local_50 + 0x108))(local_50,local_60,local_38);
          FUN_00414480(&local_38);
          FUN_0043f750(&local_118,local_54);
          FUN_00416ba0(&local_60,&LAB_012feec4,local_118);
          FUN_00414480(&local_40);
          iVar3 = FUN_006dd6f0(param_2);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          local_98 = FUN_012e6190(uVar5,local_54);
          FUN_00448450(&local_40,local_98,PTR_DAT_02004830);
          (**(code **)(*local_50 + 0x108))(local_50,local_60,local_40);
          FUN_00414480(&local_40);
          local_54 = local_54 + 1;
          local_11c = local_11c + -1;
          iVar3 = local_11c;
        } while (local_11c != 0);
      }
    }
  }
  FUN_00414560(&local_118,0xe);
  FUN_0041b800(&local_a8);
  FUN_00414480(&local_60);
  FUN_0041b800(&local_50);
  FUN_00414560(&local_40,5);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return local_41;
}

