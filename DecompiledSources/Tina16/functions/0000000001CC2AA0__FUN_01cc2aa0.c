/* Ghidra address: 01cc2aa0 */
/* Ghidra symbol: FUN_01cc2aa0 */


void FUN_01cc2aa0(longlong param_1,int param_2,longlong param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                 longlong param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong *plVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  longlong local_res18 [2];
  uint local_94;
  longlong *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_7);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x448);
  local_88 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  local_94 = 0;
  iVar10 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar9 = param_9;
      if (*(uint *)(param_9 + 0x10) <= local_94) {
        FUN_00594f90();
      }
      pcVar3 = *(char **)(*(longlong *)(lVar9 + 8) + (longlong)(int)local_94 * 8);
      plVar4 = *(longlong **)(pcVar3 + 0x18);
      cVar5 = FUN_0198a580(plVar4);
      if (cVar5 == '\x04') {
        sVar6 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((sVar6 == 0x3d) || (sVar6 == 0x65)) || (cVar5 = FUN_01b05ff0(plVar4), cVar5 != '\0')) {
          FUN_01b20020(&local_30,plVar4,&DAT_01cc30d8);
          if (local_30 == 0) {
            FUN_0043f750(&local_40,local_94);
            FUN_00416ba0(&local_30,L"no_label_",local_40);
          }
          if (plVar4 == local_88) {
            FUN_00416ad0(&local_30,L"_Ch2");
            local_88 = plVar4;
          }
          else {
            FUN_00416ad0(&local_30,L"_Ch1");
            local_88 = plVar4;
          }
        }
        else if (sVar6 == 0xc5) {
          FUN_01b20020(&local_30,plVar4,&DAT_01cc30d8);
          if (local_30 == 0) {
            FUN_0043f750(&local_48,local_94);
            FUN_00416ba0(&local_30,L"no_label_",local_48);
          }
          if (plVar4 == local_88) {
            FUN_00416ad0(&local_30,L"_Out");
            local_88 = plVar4;
          }
          else {
            FUN_00416ad0(&local_30,&DAT_01cc3138);
            local_88 = plVar4;
          }
        }
        else {
          if ((ushort)(sVar6 - 8U) < 0xd8) {
            uVar8 = (ulonglong)(ushort)(sVar6 - 8U) + 0x30;
            bVar11 = (*(byte *)((longlong)L"_Out" + ((longlong)uVar8 >> 3) + 4) >> (uVar8 & 7) & 1)
                     != 0;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            FUN_0043e1a0(&local_50,L"LoopGainOut");
            (**(code **)(*plVar4 + 0x288))(plVar4,&local_60);
            FUN_0043e1a0(&local_58,local_60);
            iVar7 = FUN_004170c0(local_50,local_58,1);
            if (0 < iVar7) {
              FUN_00414b50(&local_30,L"Loop Gain");
              goto LAB_01cc2ed9;
            }
          }
          if (*pcVar3 == '\n') {
            FUN_01d02170(plVar4,&local_30);
          }
          else {
            FUN_01b20020(&local_30,plVar4,&DAT_01cc30d8);
          }
          if (local_30 == 0) {
            FUN_0043f750(&local_68,local_94);
            FUN_00416ba0(&local_30,L"no_label_",local_68);
          }
        }
      }
      else {
        cVar5 = FUN_0198a580(plVar4);
        if (cVar5 == '\x06') {
          (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_70,local_94);
            FUN_00416ba0(&local_30,L"no_label_",local_70);
          }
        }
        else {
          FUN_004169a0(&local_30,plVar4 + 0x5b);
          if (local_30 == 0) {
            FUN_0043f750(&local_78,local_94);
            FUN_00416ba0(&local_30,L"no_label_",local_78);
          }
        }
      }
LAB_01cc2ed9:
      iVar7 = FUN_004170c0(&LAB_01cc31c4,local_30,1);
      if ((iVar7 < 1) || (local_res18[0] == 0)) {
        FUN_00416ba0(&local_38,local_30,local_res18[0]);
      }
      else {
        FUN_00414b50(&local_38,local_30);
        FUN_00416ea0(local_res18[0],&local_38,iVar7);
      }
      lVar9 = param_9;
      if (*(uint *)(param_9 + 0x10) <= local_94) {
        FUN_00594f90();
      }
      lVar9 = FUN_01cc2930(param_1,local_38,param_4,param_5,param_6,param_7,
                           **(undefined1 **)(*(longlong *)(lVar9 + 8) + (longlong)(int)local_94 * 8)
                           ,param_8);
      *(int *)(lVar9 + 0x150) = param_2;
      *(uint *)(lVar9 + 0x154) = local_94;
      *(undefined4 *)(lVar9 + 0x158) = uVar2;
      *(undefined4 *)(lVar9 + 0x15c) = *(undefined4 *)(param_1 + 0x454);
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
      *(char *)(lVar9 + 0x3b) = pcVar3[1];
      *(char *)(lVar9 + 0x18) = pcVar3[0x20];
      local_94 = local_94 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x448) = uVar2;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  if (0 < param_2) {
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  }
  *(int *)(param_1 + 0x44c) = param_2;
  FUN_00414560(&local_78,10);
  FUN_00414480(local_res18);
  FUN_00414480(&param_7);
  return;
}

