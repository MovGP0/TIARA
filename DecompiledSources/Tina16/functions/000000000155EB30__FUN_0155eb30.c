/* Ghidra address: 0155eb30 */
/* Ghidra symbol: FUN_0155eb30 */


void FUN_0155eb30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  int local_124;
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
  undefined1 local_a1;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  
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
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar1 = *(longlong *)(param_1 + 0x8f0);
  iVar11 = *(int *)(lVar1 + 0x10);
  local_124 = 0;
  if (-1 < iVar11 + -1) {
    do {
      lVar8 = FUN_01d347d0(lVar1,local_124);
      cVar4 = FUN_01d3f210(*(undefined8 *)(lVar8 + 0x40));
      if (cVar4 != '\0') {
        lVar2 = *(longlong *)(lVar8 + 0x40);
        lVar3 = *(longlong *)(lVar2 + 0x1a8);
        FUN_017ff4a0(lVar2,&local_68);
        if (*(char *)(lVar2 + 0x560) == '\0') {
          FUN_00414b50(&local_38,*(undefined8 *)(lVar3 + 0x48));
          FUN_00e0f2a0(*(undefined8 *)(param_1 + 0x938),&local_98,*(undefined8 *)(param_1 + 0xa20),
                       *(undefined8 *)(lVar8 + 0x40),&local_a0);
          FUN_0043e1a0(&local_b0,local_98);
          iVar5 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_b0);
          if (iVar5 < 0) {
            FUN_0043e1a0(&local_b8,local_98);
            (**(code **)(*plVar7 + 0x78))(plVar7,local_b8);
            local_a0 = FUN_00e0f340(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(lVar8 + 0x40));
            FUN_00e0e8e0(*(undefined8 *)(local_a0 + 0x828),&local_2c,&local_a1);
            plVar9 = *(longlong **)(lVar3 + 0xf0);
            FUN_00416cd0(&local_58,4,*(undefined8 *)(param_1 + 0x790),L"timesim_",local_68,L".sdf");
            iVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
            if ((0 < iVar5) && (local_2c == 0)) {
              (**(code **)(*plVar9 + 0x100))(plVar9,local_58);
              FUN_00416cd0(&local_c0,4,&DAT_0155f428,*(undefined8 *)(local_a0 + 0x830),&DAT_0155f43c
                           ,local_58);
              FUN_0155b290(param_1,local_c0,0);
            }
            cVar4 = FUN_01773dd0(lVar3);
            if (cVar4 != '\0') {
              FUN_01773c50(lVar3,&local_c8,2,param_1 + 0x7f0);
              FUN_01773c50(lVar3,&local_d0,3,param_1 + 0x7f4);
              FUN_01773da0(lVar3,&local_58);
              FUN_00441a10(&local_d8,local_58);
              FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0x790),L"pmbus_data_file",local_d8)
              ;
              plVar9 = (longlong *)FUN_01773d80(lVar3);
              (**(code **)(*plVar9 + 0x100))(plVar9,local_58);
              FUN_00416ba0(&local_e0,L"2:<none>:",local_58);
              FUN_0155b290(param_1,local_e0,0);
            }
            iVar5 = (**(code **)**(undefined8 **)(lVar3 + 0xf8))(*(undefined8 **)(lVar3 + 0xf8));
            iVar6 = FUN_00e0fa20(local_a0,1);
            if ((0 < iVar5) && (local_2c != 0)) {
              FUN_015fe920(&local_e8,*(undefined8 *)(lVar3 + 0xb0));
              cVar4 = FUN_016091b0(local_e8);
              if (cVar4 != '\0') {
                cVar4 = FUN_01602fb0();
                if (cVar4 == '\0') {
                  FUN_0041ddd0(&local_f0,PTR_PTR_02002f60);
                  uVar10 = FUN_0044d490(&PTR_FUN_004334c0,1,local_f0);
                  FUN_004134c0(uVar10);
                }
                *(undefined4 *)(param_1 + 0x7fc) = 1;
                uVar10 = FUN_0153d8c0(*(undefined8 *)(lVar3 + 0xf8),param_1 + 0x7f8);
                *(undefined8 *)(param_1 + 0x8c8) = uVar10;
                goto LAB_0155f340;
              }
            }
            if ((iVar5 < 1) || (iVar6 != 8)) {
              if ((0 < iVar5) && ((iVar6 == 5 || (iVar6 == 6)))) {
                FUN_00416cd0(&local_58,5,*(undefined8 *)(param_1 + 0x790),local_98,&DAT_0155f498,
                             *(undefined8 *)(local_a0 + 0x850),L".dll");
                FUN_0155e900(*(undefined8 *)(lVar3 + 0xf8),local_58,local_6c);
                cVar4 = FUN_01773f40(lVar3,0x800);
                if ((cVar4 != '\0') &&
                   ((*(int *)(lVar3 + 0x100) == 1 || (*(int *)(lVar3 + 0x100) == 3)))) {
                  FUN_004414c0(&local_60,local_58,L".hex");
                  (**(code **)(**(longlong **)(lVar3 + 0xd0) + 0x100))
                            (*(longlong **)(lVar3 + 0xd0),local_60);
                }
                lVar2 = *(longlong *)(param_1 + 0x748);
                *(undefined1 *)(lVar2 + 0xe40) = 1;
                *(undefined4 *)(lVar2 + 0xe50) =
                     *(undefined4 *)(*(longlong *)(lVar3 + 0x110) + 0x2a);
                *(undefined8 *)(lVar2 + 0xe58) = *(undefined8 *)(lVar3 + 0x108);
                FUN_00414ad0(lVar2 + 0xe48,local_58);
                FUN_0155c910(param_1,local_58);
                if (iVar6 == 5) {
                  *(uint *)(param_1 + 0x7e8) = *(uint *)(param_1 + 0x7e8) | 1;
                }
                if (iVar6 == 6) {
                  *(uint *)(param_1 + 0x7e8) = *(uint *)(param_1 + 0x7e8) | 2;
                }
                if (*(int *)(param_1 + 0x7e8) != 0) {
                  *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(lVar8 + 0x40);
                }
                if (((*(uint *)(param_1 + 0x7e8) & 1) != 0) ||
                   ((*(uint *)(param_1 + 0x7e8) & 2) != 0)) {
                  *(uint *)(param_1 + 0x7e8) = *(uint *)(param_1 + 0x7e8) | 4;
                  *(uint *)(param_1 + 0x7e8) = *(uint *)(param_1 + 0x7e8) | 8;
                }
              }
            }
            else {
              FUN_00416cd0(&local_58,5,*(undefined8 *)(param_1 + 0x790),local_98,&DAT_0155f498,
                           *(undefined8 *)(local_a0 + 0x850),L".tflite");
              FUN_0155e360(*(undefined8 *)(lVar3 + 0xf8),local_58,local_6c,0);
              FUN_0155c910(param_1,local_58);
              FUN_004414c0(&local_f8,local_58,&DAT_0155f4c4);
              FUN_0155c910(param_1,local_f8);
              FUN_004414c0(&local_100,local_58,L".jpg");
              FUN_0155c910(param_1,local_100);
              FUN_004414c0(&local_108,local_58,&DAT_0155f4c4);
              FUN_00414b50(&local_58,local_108);
              FUN_0155e4a0(local_58);
              FUN_00414ad0(param_1 + 0x7c8,local_58);
              *(uint *)(param_1 + 0x7e8) = *(uint *)(param_1 + 0x7e8) | 0x20;
              *(uint *)(param_1 + 0x7e8) = *(uint *)(param_1 + 0x7e8) | 8;
            }
          }
        }
      }
LAB_0155f340:
      local_124 = local_124 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  FUN_00410f20(plVar7);
  FUN_00414560(&local_108,0xc);
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_68,7);
  return;
}

