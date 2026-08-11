/* Ghidra address: 01b73c00 */
/* Ghidra symbol: FUN_01b73c00 */


void FUN_01b73c00(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
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
  undefined8 local_30 [2];
  
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  puVar7 = (undefined8 *)PTR_DAT_02003ad0;
  puVar8 = (undefined8 *)(param_1 + 0x854);
  for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
  puVar7 = (undefined8 *)PTR_DAT_02005048;
  puVar8 = (undefined8 *)(param_1 + 0x8c0);
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_b8 = L"TINA.INI";
  FUN_00416cd0(&local_40,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01b7415c);
  uVar4 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_40);
  *(undefined8 *)(param_1 + 0x940) = uVar4;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar6 = 0;
  FUN_0043f750(&local_48,0);
  FUN_00416ba0(&local_38,&DAT_01b7418c,local_48);
  FUN_00416ba0(&local_60,local_38,L"_Name");
  local_b8 = L"-";
  (**(code **)(**(longlong **)(param_1 + 0x940) + 0x10))
            (*(longlong **)(param_1 + 0x940),&local_58,L"Schematic Editor Color Sets",local_60);
  FUN_00415dd0(&local_68,local_58,0);
  FUN_00b0d000(&local_50,local_68,0xfde9);
  FUN_004168b0(local_30,local_50);
  while( true ) {
    iVar3 = FUN_00416db0(local_30[0],&DAT_01b741fc);
    if (iVar3 == 0) break;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
    uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
    FUN_01b73970(auStack_d8,uVar2,local_38);
    iVar6 = iVar6 + 1;
    FUN_0043f750(&local_70,iVar6);
    FUN_00416ba0(&local_38,&DAT_01b7418c,local_70);
    FUN_00416ba0(&local_88,local_38,L"_Name");
    local_b8 = L"-";
    (**(code **)(**(longlong **)(param_1 + 0x940) + 0x10))
              (*(longlong **)(param_1 + 0x940),&local_80,L"Schematic Editor Color Sets",local_88);
    FUN_00415dd0(&local_90,local_80,0);
    FUN_00b0d000(&local_78,local_90,0xfde9);
    FUN_004168b0(local_30,local_78);
  }
  FUN_00848a70(*(undefined8 *)(param_1 + 0x700),0x2b);
  iVar6 = 0;
  puVar7 = (undefined8 *)PTR_DAT_02003ac0;
  do {
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),0,iVar6,*puVar7);
    FUN_0084e470(*(undefined8 *)(param_1 + 0x700),1,iVar6,(longlong)(iVar6 + 1000));
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 != 0x1b);
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 0x1b;
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_a0,0x850);
    local_b8 = L" ";
    FUN_00416cd0(&local_98,3,&DAT_01b7420c,local_a0);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),0,iVar3,local_98);
    FUN_0084e470(*(undefined8 *)(param_1 + 0x700),0,iVar3,(longlong)(iVar6 + 2000));
    FUN_0084e470(*(undefined8 *)(param_1 + 0x700),1,iVar3,(longlong)(iVar6 + 3000));
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x10);
  *(undefined8 *)(param_1 + 0x748) = 0;
  FUN_01b74210(param_1,0);
  FUN_0064cf60(param_1,0x426);
  FUN_00414560(&local_a0,2);
  FUN_004144d0(&local_90);
  FUN_00414560(&local_88,2);
  FUN_00414520(&local_78);
  FUN_00414480(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414520(&local_50);
  FUN_00414560(&local_48,4);
  return;
}

