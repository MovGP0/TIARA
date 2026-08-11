/* Ghidra address: 00c4dd10 */
/* Ghidra symbol: FUN_00c4dd10 */


void FUN_00c4dd10(void)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  code **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  code *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong *local_78;
  byte *local_70;
  longlong local_68;
  longlong *local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  
  local_80 = auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_00c4c4b0(&local_90);
  FUN_00441640(&local_88,local_90);
  FUN_0043e1a0(local_30,local_88);
  uVar2 = FUN_00c45e50(local_30[0]);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
  local_98 = local_98 & 0xffffffffffffff00;
  FUN_00442f70(&local_38,&PTR_DAT_00c4e160,&local_a0,0);
  local_1c = 0;
  local_70 = &DAT_01ea4370;
  local_78 = &DAT_02019c90;
  do {
    bVar1 = *local_70;
    if ((bVar1 == DAT_01ea4364) || (local_70[1] == DAT_01ea4364)) {
      local_51 = bVar1;
      if (bVar1 == DAT_01ea4364) {
        local_51 = local_70[1];
      }
      local_d0 = local_38;
      local_c8 = 0x11;
      local_b8 = 0;
      uVar4 = (uint)local_51;
      local_a8 = 0;
      local_c0._0_4_ = (uint)DAT_01ea4364;
      local_b0._0_4_ = uVar4;
      FUN_00442f70(&local_48,L"%s_%d_%d",&local_d0,2);
      local_d0 = local_38;
      local_c8 = 0x11;
      local_c0 = CONCAT44(local_c0._4_4_,uVar4);
      local_b8 = 0;
      local_b0 = CONCAT44(local_b0._4_4_,(uint)DAT_01ea4364);
      local_a8 = 0;
      FUN_00442f70(&local_50,L"%s_%d_%d",&local_d0,2);
      local_d0 = CONCAT44(local_d0._4_4_,local_1c);
      local_c8 = 0;
      local_c0 = local_48;
      local_b8 = 0x11;
      local_b0 = local_50;
      local_a8 = 0x11;
      FUN_00442f70(&local_d8,L"Create SMemcomm for connection %d (%s / %s)...",&local_d0,2);
      FUN_00c4c420(local_d8);
      local_98 = DAT_02019ca0;
      local_a0 = FUN_00c4daf0;
      local_f8 = (undefined *)local_50;
      local_f0 = &local_a0;
      lVar3 = FUN_00c47a50(&DAT_00c46f28,1,local_38,local_48);
      *local_78 = lVar3;
      if (*(longlong *)(lVar3 + 0x80) == 0) {
        local_f8 = &DAT_00c4e248;
        local_f0 = (code **)local_50;
        FUN_00416cd0(&local_e8,4,L"Create SMemcomm OK, ID : ",local_48);
        FUN_00c4c420(local_e8);
      }
      else {
        local_f8 = &DAT_00c4e248;
        local_f0 = (code **)local_50;
        FUN_00416cd0(&local_e0,4,L"Create SMemcomm FAILED, ID : ",local_48);
        FUN_00c4c420(local_e0);
        FUN_00c4c420(*(undefined8 *)(*local_78 + 0x80));
        local_60 = local_78;
        local_68 = *local_78;
        *local_78 = 0;
        FUN_00410f20(local_68);
      }
    }
    local_1c = local_1c + 1;
    local_78 = local_78 + 1;
    local_70 = local_70 + 2;
  } while (local_1c != 1);
  FUN_00414560(&local_e8,3);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_50,5);
  return;
}

