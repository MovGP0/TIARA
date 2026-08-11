/* Ghidra address: 01b3a010 */
/* Ghidra symbol: FUN_01b3a010 */


void FUN_01b3a010(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  int iVar8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  longlong local_50;
  int local_44;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar8 = *(int *)(param_2 + 0x10);
  local_d0 = 0;
  if (-1 < iVar8 + -1) {
    do {
      puVar5 = (undefined8 *)FUN_004aeac0(param_2,local_d0);
      if (*(char *)(puVar5 + 0xb) == '\0') {
        FUN_01b388b0(puVar5);
        FUN_01b388b0(puVar5 + 1);
        iVar2 = FUN_004170c0(&DAT_01b3a8d0,*puVar5,1);
        if (iVar2 != 0) {
          FUN_00416dc0(puVar5,*puVar5,1,iVar2 + -1);
        }
        FUN_0043ea00(&local_50,puVar5[3]);
        iVar2 = 0;
        if (local_50 != 0) {
          iVar2 = *(int *)(local_50 + -4);
        }
        if (iVar2 == 0) {
          FUN_00414480(&local_30);
        }
        else {
          FUN_00414b50(&local_40,puVar5[3]);
          FUN_01b387d0(&local_58,local_40);
          FUN_00ea9ef0(&local_30,local_58);
          if (local_30 != 0) {
            iVar2 = 0;
            if (local_30 != 0) {
              iVar2 = *(int *)(local_30 - 4);
            }
            if (*(short *)((local_30 - 2) + (longlong)iVar2 * 2) == 0x20) {
              uVar3 = 0;
              if (local_30 != 0) {
                uVar3 = *(undefined4 *)(local_30 - 4);
              }
              FUN_00416e20(&local_30,uVar3,1);
            }
          }
        }
        uVar6 = FUN_0040f3d0(param_5,0x5b);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f200(param_5,*puVar5);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f200(param_5,local_30);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f200(param_5,puVar5[1]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        if (puVar5[2] == 0) {
          FUN_00414b50(&local_40,puVar5[1]);
          iVar2 = FUN_004170c0(&DAT_01b3a8e0,local_40,1);
          if (0 < iVar2) {
            iVar2 = FUN_004170c0(&DAT_01b3a8e0,local_40,1);
            uVar3 = 0;
            if (local_40 != 0) {
              uVar3 = *(undefined4 *)(local_40 + -4);
            }
            FUN_00416dc0(&local_40,local_40,iVar2 + 1,uVar3);
          }
          uVar6 = FUN_0040f200(param_5,local_40);
          FUN_0040f590(uVar6);
          FUN_00409900();
        }
        else {
          uVar6 = FUN_0040f200(param_5,puVar5[2]);
          FUN_0040f590(uVar6);
          FUN_00409900();
        }
        FUN_0040f590(param_5);
        FUN_00409900();
        FUN_0040f590(param_5);
        FUN_00409900();
        FUN_0040f590(param_5);
        FUN_00409900();
        uVar6 = FUN_0040f3d0(param_5,0x5d);
        FUN_0040f590(uVar6);
        FUN_00409900();
        FUN_0043f750(&local_68,*(undefined4 *)((longlong)puVar5 + 0x3c));
        FUN_00416ba0(&local_60,&DAT_01b3a8f0,local_68);
        uVar6 = FUN_0040f200(param_5,local_60);
        FUN_0040f590(uVar6);
        FUN_00409900();
        FUN_0043f750(&local_78,*(undefined4 *)(puVar5 + 8));
        FUN_00416ba0(&local_70,&DAT_01b3a904,local_78);
        uVar6 = FUN_0040f200(param_5,local_70);
        FUN_0040f590(uVar6);
        FUN_00409900();
        FUN_0043f750(&local_88,*(undefined4 *)((longlong)puVar5 + 0x44));
        FUN_00416ba0(&local_80,L"DIR=",local_88);
        uVar6 = FUN_0040f200(param_5,local_80);
        FUN_0040f590(uVar6);
        FUN_00409900();
        FUN_00416ba0(&local_90,&DAT_01b3a930,puVar5[4]);
        uVar6 = FUN_0040f200(param_5,local_90);
        FUN_0040f590(uVar6);
        FUN_00409900();
        FUN_00416ba0(&local_98,L"HierID=",puVar5[5]);
        uVar6 = FUN_0040f200(param_5,local_98);
        FUN_0040f590(uVar6);
        uVar6 = FUN_00409900();
        local_44 = 1;
        iVar2 = *(int *)(puVar5 + 7);
        if (iVar2 == 0xd) {
          FUN_00ec34f0(&local_a0,puVar5[3],*(undefined8 *)(puVar5[9] + 0x4f8),0,1,&local_44,plVar4);
        }
        else {
          uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
          uVar3 = (undefined4)CONCAT71(uVar7,4);
          if (iVar2 < 0xb) {
            if (iVar2 == 10) {
              uVar3 = (undefined4)CONCAT71(uVar7,1);
            }
            else if (iVar2 == 2) {
              uVar3 = (undefined4)CONCAT71(uVar7,3);
            }
            else if ((iVar2 == 7) || (iVar2 == 9)) {
              uVar3 = (undefined4)CONCAT71(uVar7,2);
            }
          }
          else if (iVar2 == 0xe) {
            uVar3 = (undefined4)CONCAT71(uVar7,5);
          }
          else if (iVar2 == 0x10) {
            uVar3 = 0;
          }
          FUN_00ececc0(&local_a8,uVar3,puVar5[3],*(undefined8 *)(puVar5[9] + 0x4f8),1,&local_44,
                       plVar4);
        }
        if (1 < local_44) {
          FUN_0043f750(&local_b8,local_44);
          FUN_00416ba0(&local_b0,L"GATES=",local_b8);
          uVar6 = FUN_0040f200(param_5,local_b0);
          FUN_0040f590(uVar6);
          FUN_00409900();
          local_cc = 0;
          iVar2 = local_44;
          if (-1 < local_44 + -1) {
            do {
              (**(code **)(*plVar4 + 0x18))(plVar4,&local_c0,local_cc);
              uVar6 = FUN_0040f200(param_5,local_c0);
              FUN_0040f590(uVar6);
              FUN_00409900();
              local_cc = local_cc + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
      }
      local_d0 = local_d0 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = FUN_019954d0(param_1);
  iVar8 = iVar8 + 2;
  local_d0 = 1;
  if (0 < iVar8) {
    do {
      lVar1 = *(longlong *)(param_3 + 0x10 + (longlong)local_d0 * 0x18);
      if (lVar1 != 0) {
        uVar6 = FUN_0040f3d0(param_5,0x28);
        FUN_0040f590(uVar6);
        FUN_00409900();
        iVar2 = (**(code **)(*param_4 + 0x28))(param_4);
        if ((iVar2 < local_d0) ||
           ((**(code **)(*param_4 + 0x18))(param_4,&local_c8,local_d0 + -1), local_c8 == 0)) {
          FUN_00414b50(&local_38,*(undefined8 *)(param_3 + (longlong)local_d0 * 0x18));
        }
        else {
          (**(code **)(*param_4 + 0x18))(param_4,&local_38,local_d0 + -1);
        }
        FUN_01b388b0(&local_38);
        if (local_38 == 0) {
          FUN_01b38990(*(undefined4 *)(param_3 + 8 + (longlong)local_d0 * 0x18),&local_38);
        }
        uVar6 = FUN_0040f200(param_5,local_38);
        FUN_0040f590(uVar6);
        FUN_00409900();
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
          if (*(longlong *)(lVar1 + 0x10) != 0) {
            uVar6 = FUN_0040f200(param_5,*(undefined8 *)(lVar1 + 8));
            uVar6 = FUN_0040f3d0(uVar6,0x2c);
            uVar6 = FUN_0040f200(uVar6,*(undefined8 *)(lVar1 + 0x10));
            FUN_0040f590(uVar6);
            FUN_00409900();
          }
        }
        uVar6 = FUN_0040f3d0(param_5,0x29);
        FUN_0040f590(uVar6);
        FUN_00409900();
      }
      local_d0 = local_d0 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_0040f590(param_5);
  FUN_00409900();
  FUN_00410f20(plVar4);
  FUN_00414560(&local_c8,0x10);
  FUN_00414560(&local_40,3);
  return;
}

