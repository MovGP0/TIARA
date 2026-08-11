/* Ghidra address: 01b1ee80 */
/* Ghidra symbol: FUN_01b1ee80 */


void FUN_01b1ee80(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0 [2];
  undefined1 local_d8;
  uint local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8 [2];
  undefined1 local_a0;
  uint local_98;
  undefined1 local_90;
  uint local_88;
  undefined1 local_80;
  uint local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined1 local_3c [4];
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_128;
  local_f8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_68 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414b50(&local_28,local_res8[0]);
  FUN_00414e00(&local_28);
  uVar2 = FUN_00416740(local_28);
  local_2c = thunk_FUN_03d5a978(uVar2,&local_30);
  if (local_2c != 0) {
    local_20 = FUN_004095c0(local_2c);
    uVar2 = FUN_00416740(local_28);
    iVar1 = thunk_FUN_0412830f(uVar2,local_30,local_2c,local_20);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_03c93605(local_20,&DAT_01b1f2d8,&local_38,local_3c);
      if (iVar1 != 0) {
        local_44 = *(uint *)(local_38 + 8);
        local_48 = *(uint *)(local_38 + 0xc);
        local_a8[0] = local_44 >> 0x10;
        local_a0 = 0;
        local_98 = (uint)*(ushort *)(local_38 + 8);
        local_90 = 0;
        local_88 = local_48 >> 0x10;
        local_80 = 0;
        local_78 = (uint)*(ushort *)(local_38 + 0xc);
        local_70 = 0;
        FUN_00442f70(&local_68,L"%d.%d.%d.%d",local_a8,3);
        FUN_01b1ee10(auStack_128,&local_b0);
        FUN_00416880(&local_b8,local_b0);
        local_108 = local_b8;
        FUN_00416cd0(PTR_DAT_02004728,3,local_68,&DAT_01b1f30c);
        local_4c = *(uint *)(local_38 + 8);
        local_e0[0] = local_4c >> 0x10;
        local_d8 = 0;
        local_d0 = (uint)*(ushort *)(local_38 + 8);
        local_c8 = 0;
        FUN_00442f70(&local_c0,L"%d.%d",local_e0,1);
        FUN_01b1ee10(auStack_128,&local_e8);
        FUN_00416880(&local_f0,local_e8);
        local_108 = local_f0;
        FUN_00416cd0(PTR_DAT_020043d0,3,local_c0,&DAT_01b1f30c);
      }
    }
    FUN_004095f0(local_20);
  }
  if (*(longlong *)PTR_DAT_02004728 == 0) {
    FUN_00414ad0(PTR_DAT_02004728,L"15.0.0.0 SF");
    local_40 = FUN_004170c0(&LAB_01b1f358,*(undefined8 *)PTR_DAT_02004728,1);
    FUN_00416dc0(PTR_DAT_020043d0,*(undefined8 *)PTR_DAT_02004728,1,local_40 + -1);
    iVar3 = local_40 + 1;
    iVar1 = FUN_004170c0(&LAB_01b1f358,*(undefined8 *)PTR_DAT_02004728,iVar3);
    FUN_00416dc0(&local_f8,*(undefined8 *)PTR_DAT_02004728,iVar3,(iVar1 - local_40) + -1);
    FUN_00416ad0(PTR_DAT_020043d0,local_f8);
  }
  FUN_00414560(&local_f8,2);
  FUN_004144d0(&local_e8);
  FUN_00414560(&local_c0,2);
  FUN_004144d0(&local_b0);
  FUN_00414480(&local_68);
  FUN_00414480(&local_28);
  FUN_00414480(local_res8);
  return;
}

