/* Ghidra address: 018bbd40 */
/* Ghidra symbol: FUN_018bbd40 */


void FUN_018bbd40(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_50;
  longlong local_40;
  int local_34;
  undefined8 local_30;
  
  local_60 = auStack_138;
  local_d8 = 0;
  local_d0 = 0;
  local_68 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar2 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"previewpages");
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  local_30 = FUN_01810fa0(&DAT_018103d8,1,0);
  local_40 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"report");
  FUN_018039a0(local_40);
  local_40 = FUN_01803a30(local_40);
  FUN_00410ae0(**(undefined8 **)(param_1 + 0x20),local_40 + 0x20);
  FUN_00468820(&local_80,*(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x180));
  FUN_018036e0(&local_68,&local_80);
  FUN_00468820(&local_a0,
               *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x220) + 0x13));
  FUN_018036e0(&local_88,&local_a0);
  FUN_00468530(&local_c0,
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x220) + 0x14),
               0xfffffffffffffffc);
  FUN_018036e0(&local_a8,&local_c0);
  FUN_01802f80(&local_c8,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x240) + 0x38));
  local_118 = L"\" PreviewOptions.OutlineVisible=\"";
  local_110 = local_88;
  local_108 = L"\" PreviewOptions.OutlineWidth=\"";
  local_100 = local_a8;
  local_f8 = L"\" ReportOptions.Name=\"";
  local_f0 = local_c8;
  local_e8 = &DAT_018bc410;
  FUN_00416cd0(local_40 + 0x30,9,L"DotMatrixReport=\"",local_68);
  local_40 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"sourcepages");
  FUN_018039a0(local_40);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  local_34 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x88),local_34);
      uVar3 = FUN_01803a30(local_40);
      FUN_018140f0(local_30,uVar2,1,uVar3);
      local_34 = local_34 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(local_30);
  local_40 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"dictionary");
  FUN_018039a0(local_40);
  iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x58) + 8) + 0x28))();
  local_34 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_50 = FUN_01803a30(local_40);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_d0,local_34);
      FUN_00414ad0(local_50 + 0x20,local_d0);
      FUN_018b79b0(*(undefined8 *)(param_1 + 0x58),&local_d8,*(undefined8 *)(local_50 + 0x20));
      local_118 = L"\"";
      FUN_00416cd0(local_50 + 0x30,3,L"name=\"",local_d8);
      local_34 = local_34 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_018887e0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28)
              );
  local_40 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"postprocessing");
  FUN_018039a0(local_40);
  FUN_0197fd10(*(undefined8 *)(param_1 + 0x48),local_40);
  FUN_00414560(&local_d8,3);
  FUN_00460ba0(&local_c0);
  FUN_00414480(&local_a8);
  FUN_00460ba0(&local_a0);
  FUN_00414480(&local_88);
  FUN_00460ba0(&local_80);
  FUN_00414480(&local_68);
  return;
}

