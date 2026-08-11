/* Ghidra address: 013c70b0 */
/* Ghidra symbol: FUN_013c70b0 */


char FUN_013c70b0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char local_61;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_41;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_d8;
  local_a8 = 0;
  local_70 = 0;
  local_20[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  *(undefined1 *)(param_1 + 0x30a) = *(undefined1 *)(param_2 + 0x13);
  local_28 = 0;
  FUN_00414ad0(param_1 + 0x310,*(undefined8 *)(param_2 + 8));
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x11);
  *(bool *)(param_1 + 0x309) = *(char *)(param_2 + 0x10) == '\0';
  local_40 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  if (*(char *)(param_1 + 0x30a) == '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x28))(*(longlong **)(param_2 + 0x18));
    if (0 < iVar2) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x18))
                (*(longlong **)(param_2 + 0x18),&local_70,0);
    }
    local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_50 + 0x10))(local_50,*(undefined8 *)(param_2 + 0x18));
    *(longlong **)(param_1 + 0x318) = local_50;
    if (*(char *)(param_2 + 0x11) != '\0') {
      local_58 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_58 + 0x10))(local_58,*(undefined8 *)(param_2 + 0x20));
      *(longlong **)(param_1 + 800) = local_58;
    }
    uVar1 = FUN_00f832d0(*(undefined8 *)PTR_DAT_02003c70);
    local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
    thunk_FUN_03d2fc6e(1000,uVar1,FUN_013c5bb0,0);
    local_61 = FUN_013c55f0(param_1,1);
    *PTR_DAT_02005b50 = 0;
    local_41 = local_61;
    if (local_28 != 0) {
      FUN_00410f20(local_28);
    }
    FUN_00410f20(local_40);
    FUN_00410f20(local_30);
  }
  else {
    local_b8 = 0;
    local_28 = FUN_013b9a60(&DAT_013b8648,1,0,0);
    local_31 = FUN_013c6c40(auStack_d8);
    FUN_013c6bc0(auStack_d8);
    local_8c = (uint)(*PTR_DAT_02005258 != '\0');
    local_b0 = 0;
    local_b8._0_1_ = *(undefined1 *)(param_2 + 0x28);
    FUN_013c5e90(local_30,local_40,local_8c,*(undefined8 *)(local_28 + 0xe8));
    local_60 = *(longlong **)(param_2 + 0x18);
    (**(code **)(*local_60 + 0x38))(local_60,&local_78);
    local_b8 = CONCAT71(local_b8._1_7_,1);
    FUN_00450070(&local_a8,local_78,L"mycurve1",*(undefined8 *)(param_2 + 8));
    FUN_00414b50(&local_78,local_a8);
    FUN_013b9dc0(local_28);
    local_b8 = 0;
    FUN_013bc030(local_28,&local_80,local_78,1);
    local_61 = FUN_013c6d00(auStack_d8,local_80,&local_88);
    local_41 = local_61;
    if (local_61 != '\0') {
      FUN_013c4120(local_88);
    }
    FUN_013c74a0(0,local_a0);
  }
  FUN_00414480(&local_a8);
  FUN_00414560(&local_88,4);
  FUN_00414480(local_20);
  return local_41;
}

