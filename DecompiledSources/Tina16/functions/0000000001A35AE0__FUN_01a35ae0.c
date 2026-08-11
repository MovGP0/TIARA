/* Ghidra address: 01a35ae0 */
/* Ghidra symbol: FUN_01a35ae0 */


undefined8 FUN_01a35ae0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_res10;
  undefined1 local_res18;
  undefined1 auStack_a48 [32];
  undefined8 local_a28 [22];
  undefined8 local_977;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_e8 = 0;
  local_f0 = 0;
  puVar4 = local_a28;
  for (lVar2 = 0x127; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_e0 = auStack_a48;
  FUN_00414610(param_2);
  FUN_00417580(local_a8,&DAT_01a30988);
  local_c8 = FUN_00f309b0(&LAB_00f23b78,1);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_60);
  FUN_00414480(&local_80);
  local_b0 = FUN_00f33100(&LAB_00f256b8,1);
  local_b8 = FUN_00f33100(&LAB_00f256b8,1);
  local_34 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_40 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_2c);
      uVar1 = FUN_01a33010(local_40,local_34);
      FUN_00f33710(local_b0,uVar1);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_40 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),local_2c);
      uVar1 = FUN_01a33010(local_40,0);
      FUN_00f33710(local_b8,uVar1);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_c0 = FUN_01a32b20(*(undefined8 *)(param_1 + 0x38),1);
  local_30 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
  uVar1 = FUN_00f2f8e0(&LAB_00f22f08,1,local_30);
  FUN_00f30e70(local_c8,&DAT_01a35fb0,uVar1);
  FUN_00f30e70(local_c8,L"nodes",local_c0);
  FUN_00f30e70(local_c8,L"gens",*(undefined8 *)(param_1 + 0x80));
  FUN_00f30e70(local_c8,L"meters",local_b8);
  FUN_00f30e70(local_c8,L"edges",local_b0);
  FUN_00f30e70(local_c8,L"dctables",*(undefined8 *)(param_1 + 0x88));
  FUN_00f30e70(local_c8,L"dctable_final",*(undefined8 *)(param_1 + 0x98));
  FUN_01a35ab0(param_1,local_a28);
  FUN_00441920(&local_f0,local_977);
  FUN_0043e1a0(&local_e8,local_f0);
  uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_e8);
  FUN_00f30e70(local_c8,L"circ_name",uVar1);
  uVar1 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x48));
  FUN_00f30e70(local_c8,L"meters_without_labels",uVar1);
  local_28 = local_c8;
  FUN_00410f20(local_20);
  FUN_00417740(local_a28,&DAT_01d0d0b8);
  FUN_00414560(&local_f0,2);
  FUN_00417740(local_a8,&DAT_01a30988);
  FUN_00414560(&local_80,8);
  FUN_00414480(&local_res10);
  return local_28;
}

