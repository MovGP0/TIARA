/* Ghidra address: 01adca80 */
/* Ghidra symbol: FUN_01adca80 */


void FUN_01adca80(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 local_res10 [3];
  int local_f4;
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
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_f0 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x168),local_res10[0],L"Orientation");
  uVar1 = FUN_01cd6670(param_3);
  (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
            (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_30,uVar1);
  FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x168),local_res10[0],L"Scale");
  (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
            (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_38,
             *(undefined1 *)(param_3 + 0x70));
  FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x168),local_res10[0],L"Caption");
  FUN_01cd6430(param_3,&local_48);
  (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
            (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_40,local_48);
  FUN_00416cd0(&local_50,3,*(undefined8 *)(param_1 + 0x168),local_res10[0],L"Color");
  (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
            (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_50,
             *(undefined4 *)(*(longlong *)(param_3 + 0x98) + 0x28));
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_3 + 0x110);
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x90))
            (*(longlong **)(param_1 + 0x160),L"main",*(undefined8 *)(param_1 + 0x158));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))();
  local_f4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x18))
                (*(longlong **)(param_1 + 0x158),&local_60,local_f4);
      FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0x168),local_res10[0],local_60);
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x18))
                (*(longlong **)(param_1 + 0x158),&local_70,local_f4);
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))
                (*(longlong **)(param_1 + 0x160),&local_68,L"main",local_70,0);
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
                (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_58,local_68)
      ;
      local_f4 = local_f4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(param_1 + 0x150);
  iVar3 = *(int *)(*(longlong *)(param_3 + 0xf8) + 0x10);
  local_f4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar5 = 0;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x150) + -4);
      }
      if (0 < iVar5) {
        FUN_00416ad0(param_1 + 0x150,&DAT_01add624);
      }
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      FUN_01abd980(&local_78,uVar6);
      FUN_00416ad0(param_1 + 0x150,local_78);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      FUN_01abd980(&local_80,uVar6);
      FUN_00416cd0(param_1 + 0x148,3,L"Curve.",local_80,&DAT_01add650);
      FUN_00416cd0(&local_88,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                   *(undefined8 *)(param_1 + 0x148),L"Type");
      puVar7 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      FUN_00410ae0(*puVar7,&local_90);
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
                (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_88,local_90)
      ;
      FUN_00416cd0(&local_98,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                   *(undefined8 *)(param_1 + 0x148),L"Reader");
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      puVar7 = (undefined8 *)FUN_01abda80(uVar6);
      FUN_00410ae0(*puVar7,&local_a0);
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
                (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_98,local_a0)
      ;
      FUN_00416cd0(&local_a8,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                   *(undefined8 *)(param_1 + 0x148),L"Writer");
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      uVar4 = FUN_01abd9e0(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
                (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_a8,uVar4);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      cVar2 = FUN_004113d0(uVar6,&PTR_FUN_01aae560);
      if (cVar2 == '\0') {
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
        lVar8 = *(longlong *)(lVar8 + 0x78);
        FUN_00416cd0(&local_c0,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                     *(undefined8 *)(param_1 + 0x148),L"width");
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
                  (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_c0,
                   *(undefined4 *)(*(longlong *)(lVar8 + 0x18) + 0x2c));
        FUN_00416cd0(&local_c8,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                     *(undefined8 *)(param_1 + 0x148),L"color");
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
        uVar4 = FUN_005fd4d0(*(undefined8 *)(lVar8 + 0x78));
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
                  (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_c8,uVar4);
      }
      else {
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
        lVar8 = *(longlong *)(lVar8 + 0x60);
        FUN_00416cd0(&local_b0,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                     *(undefined8 *)(param_1 + 0x148),L"width");
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
                  (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_b0,
                   *(undefined4 *)(*(longlong *)(lVar8 + 0x18) + 0x2c));
        FUN_00416cd0(&local_b8,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                     *(undefined8 *)(param_1 + 0x148),L"color");
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
        uVar4 = FUN_005fd4d0(*(undefined8 *)(lVar8 + 0x60));
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x28))
                  (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_b8,uVar4);
      }
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_3 + 0xf8),local_f4);
      uVar6 = FUN_01abda30(uVar6);
      *(undefined8 *)(param_1 + 0x160) = uVar6;
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x90))
                (*(longlong **)(param_1 + 0x160),L"main",*(undefined8 *)(param_1 + 0x158));
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))();
      iVar9 = 0;
      if (-1 < iVar5 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x158) + 0x18))
                    (*(longlong **)(param_1 + 0x158),&local_d8,iVar9);
          FUN_00416cd0(&local_d0,4,*(undefined8 *)(param_1 + 0x168),local_res10[0],
                       *(undefined8 *)(param_1 + 0x148),local_d8);
          (**(code **)(**(longlong **)(param_1 + 0x158) + 0x18))
                    (*(longlong **)(param_1 + 0x158),&local_e8,iVar9);
          (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))
                    (*(longlong **)(param_1 + 0x160),&local_e0,L"main",local_e8,0);
          (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
                    (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_d0,
                     local_e0);
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_f4 = local_f4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416cd0(&local_f0,3,*(undefined8 *)(param_1 + 0x168),local_res10[0],L"Curves");
  (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
            (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),local_f0,
             *(undefined8 *)(param_1 + 0x150));
  FUN_00414560(&local_f0,0x19);
  FUN_00414480(local_res10);
  return;
}

