/* Ghidra address: 01adeca0 */
/* Ghidra symbol: FUN_01adeca0 */


undefined1 FUN_01adeca0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_b1;
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
  undefined8 local_28;
  undefined8 local_20;
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_b1 = 0;
  FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
               L"Curves");
  (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
            (*(longlong **)(param_1 + 0x250),&local_20,*(undefined8 *)(param_1 + 0x248),local_28,0);
  FUN_00414b50(param_1 + 0x230,local_20);
  FUN_00416cd0(&local_30,3,&DAT_01adf914,*(undefined8 *)(param_1 + 0x230),&DAT_01adf914);
  uVar5 = local_30;
  FUN_00416cd0(&local_38,3,&DAT_01adf914,*(undefined8 *)(param_1 + 0x228),&DAT_01adf914);
  cVar2 = FUN_005b83d0(uVar5,local_38);
  if (cVar2 == '\0') goto code_r0x01adf8a5;
  FUN_00416cd0(&local_40,4,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
               *(undefined8 *)(param_1 + 0x220),L"Writer");
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                    (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),local_40,0);
  if (iVar3 != *(int *)(param_1 + 0x2a8)) goto code_r0x01adf8a5;
  local_b1 = 1;
  if (*(longlong *)(param_1 + 0x218) == 0) {
LAB_01adefbe:
    FUN_00416cd0(&local_68,4,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
                 *(undefined8 *)(param_1 + 0x220),L"Reader");
    (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
              (*(longlong **)(param_1 + 0x250),&local_60,*(undefined8 *)(param_1 + 0x248),local_68,
               *(undefined8 *)(param_1 + 0x210));
    uVar5 = FUN_01abcde0(local_60,*(undefined8 *)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x218) = uVar5;
  }
  else {
    FUN_00410ae0(**(undefined8 **)(param_1 + 0x218),&local_48);
    FUN_00416cd0(&local_58,4,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
                 *(undefined8 *)(param_1 + 0x220),L"Reader");
    (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
              (*(longlong **)(param_1 + 0x250),&local_50,*(undefined8 *)(param_1 + 0x248),local_58,
               *(undefined8 *)(param_1 + 0x210));
    iVar3 = FUN_00416db0(local_48,local_50);
    if (iVar3 != 0) goto LAB_01adefbe;
  }
  FUN_00416cd0(&local_78,4,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
               *(undefined8 *)(param_1 + 0x220),L"Type");
  (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
            (*(longlong **)(param_1 + 0x250),&local_70,*(undefined8 *)(param_1 + 0x248),local_78,
             *(undefined8 *)(param_1 + 0x208));
  FUN_00414b50(param_1 + 0x200,local_70);
  uVar5 = FUN_01abcc00(*(undefined8 *)(param_1 + 0x200));
  *(undefined8 *)(param_1 + 0x1f8) = uVar5;
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x1f8),&PTR_FUN_01aae560);
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x1f8);
    FUN_01ab6ed0(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x290));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x70) = *(undefined8 *)(param_1 + 600);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x78),
                 *(undefined4 *)(PTR_DAT_02003c00 + (longlong)*(int *)(param_1 + 0x1ec) * 4));
    *(int *)(param_1 + 0x1ec) = (*(int *)(param_1 + 0x1ec) + 1) % 0xb;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x80) = *(undefined8 *)(param_1 + 0x218);
    FUN_01cc8360(*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x88) = *(undefined8 *)(param_1 + 0x298);
    FUN_00416cd0(&local_98,4,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
                 *(undefined8 *)(param_1 + 0x220),L"Writer");
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                      (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),local_98,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x1d8) + 0x90) = uVar4;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x98) = *(undefined8 *)(param_1 + 0x1e0);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x58))
                      (*(longlong **)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0xb8) = uVar5;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x60))
                      (*(longlong **)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0xc0) = uVar5;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x70);
    uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0xe8) = uVar5;
    *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0xf0) = param_2;
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x1e0),&PTR_FUN_01cb46a8);
    if (cVar2 != '\0') {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x48) == 0) {
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x38) + 0x10);
        iVar7 = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x38),iVar7);
            FUN_01cc0ae0(uVar5,&local_a0);
            FUN_00416cd0(*(longlong *)(param_1 + 0x1d8) + 0xe0,3,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0xe0),local_a0,
                         &DAT_01adf914);
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        FUN_00416ba0(*(longlong *)(param_1 + 0x1d8) + 0xe0,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x48),&DAT_01adf914);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x1d8) + 0xd8) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x50);
    }
    FUN_00416cd0(&local_a8,3,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
                 *(undefined8 *)(param_1 + 0x220));
    FUN_01ab9280(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x248),local_a8,
                 *(undefined8 *)(param_1 + 0x250));
    FUN_01ab6de0(*(undefined8 *)(param_1 + 0x1d8),&local_b0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x80);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_b0,*(undefined8 *)(param_1 + 0x1d8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x70);
    lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    FUN_004ae7e0(*(undefined8 *)(lVar6 + 0xf8),*(undefined8 *)(param_1 + 0x1d8));
    FUN_004ae7e0(*(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_1 + 0x1d8));
  }
  else {
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1f8);
    FUN_01ab28d0(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x290));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x78) = *(undefined8 *)(param_1 + 600);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x60),
                 *(undefined4 *)(PTR_DAT_02003c00 + (longlong)*(int *)(param_1 + 0x1ec) * 4));
    *(int *)(param_1 + 0x1ec) = (*(int *)(param_1 + 0x1ec) + 1) % 0xb;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 200) = *(undefined8 *)(param_1 + 0x218);
    FUN_01cc8360(*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xd0) = *(undefined8 *)(param_1 + 0x298);
    FUN_00416cd0(&local_80,4,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
                 *(undefined8 *)(param_1 + 0x220),L"Writer");
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                      (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),local_80,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0xd8) = uVar4;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xe0) = *(undefined8 *)(param_1 + 0x1e0);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x58))
                      (*(longlong **)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x80) = uVar5;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x60))
                      (*(longlong **)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x88) = uVar5;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x68))
                      (*(longlong **)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x90) = uVar5;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x70))
                      (*(longlong **)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x98) = uVar5;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x70);
    uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    uVar5 = FUN_004113f0(uVar5,&DAT_01ccbf00);
    *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xf8) = uVar5;
    *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x100) = param_2;
    FUN_00416cd0(&local_88,3,*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x238),
                 *(undefined8 *)(param_1 + 0x220));
    FUN_01ab48e0(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x248),local_88,
                 *(undefined8 *)(param_1 + 0x250));
    FUN_01ab2940(*(undefined8 *)(param_1 + 0x1f0),&local_90);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x80);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_90,*(undefined8 *)(param_1 + 0x1f0));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 600) + 0x70);
    lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    FUN_004ae7e0(*(undefined8 *)(lVar6 + 0xf8),*(undefined8 *)(param_1 + 0x1f0));
    FUN_004ae7e0(*(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_1 + 0x1f0));
  }
  FUN_01adeb70(param_1,*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_2 + 0xf8));
code_r0x01adf8a5:
  FUN_00414560(&local_b0,0x13);
  return local_b1;
}

