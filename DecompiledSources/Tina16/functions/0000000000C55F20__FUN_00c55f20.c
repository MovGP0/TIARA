/* Ghidra address: 00c55f20 */
/* Ghidra symbol: FUN_00c55f20 */


void FUN_00c55f20(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_26 [7];
  undefined1 local_1f [3];
  undefined4 local_1c;
  
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_40 = 0;
  local_180 = param_1;
  uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
  uVar7 = thunk_FUN_03b994b9(uVar9,1);
  if (*(char *)(local_180 + 0x4f4) != '\0') {
    if ((*(int *)(local_180 + 0x4ec) == *(int *)(local_180 + 0x4f0)) &&
       (*(char *)(local_180 + 0x4f5) != '\0')) {
      FUN_0041ddd0(&local_40,PTR_PTR_02005548);
      FUN_00416910(local_140,local_40,0xff);
      FUN_00415020(local_1f,local_140,2);
    }
    else {
      FUN_0041ddd0(&local_148,PTR_PTR_02004710);
      FUN_00416910(local_140,local_148,0xff);
      FUN_00415020(local_1f,local_140,2);
    }
    iVar8 = *(int *)(local_180 + 0x4ec);
    if (7 < iVar8) {
      iVar8 = iVar8 + 4;
    }
    local_1c = *(undefined4 *)(local_180 + 0x498 + (longlong)iVar8 * 4);
    uVar5 = FUN_00c55f10(auStack_1b8,0x7f < (byte)local_1c,0,0xff);
    uVar2 = local_1c;
    local_1c = CONCAT31(local_1c._1_3_,uVar5);
    uVar3 = local_1c;
    local_1c._1_1_ = SUB41(uVar2,1);
    bVar11 = 0x7f < local_1c._1_1_;
    local_1c = uVar3;
    uVar5 = FUN_00c55f10(auStack_1b8,bVar11,0,0xff);
    uVar2 = local_1c;
    local_1c._0_2_ = CONCAT11(uVar5,(byte)local_1c);
    uVar4 = local_1c;
    local_1c._2_1_ = SUB41(uVar2,2);
    bVar11 = 0x7f < local_1c._2_1_;
    local_1c = uVar4;
    bVar6 = FUN_00c55f10(auStack_1b8,bVar11,0,0xff);
    uVar4 = local_1c;
    local_1c._0_3_ = CONCAT12(bVar6,(undefined2)local_1c);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(local_180 + 0x490) + 0x70),
                 uVar4 & 0xffff | (uint)bVar6 << 0x10);
    iVar8 = *(int *)(local_180 + 0x4ec);
    iVar1 = *(int *)(local_180 + 0x504);
    local_38 = (iVar8 % iVar1) * *(int *)(local_180 + 0x4fc);
    local_30 = local_38 + *(int *)(local_180 + 0x4fc);
    local_34 = (iVar8 / iVar1) * *(int *)(local_180 + 0x500);
    local_2c = local_34 + *(int *)(local_180 + 0x500);
    uVar9 = FUN_005ffa40(*(undefined8 *)(local_180 + 0x490),
                         (longlong)iVar8 % (longlong)iVar1 & 0xffffffff);
    FUN_004154b0(&local_150,local_1f,0);
    uVar10 = FUN_004425e0(local_26,local_150);
    FUN_004167a0(&local_158,uVar10);
    local_198 = 0x125;
    FUN_00429440(uVar9,local_158,0xffffffff,&local_38);
  }
  if (*(char *)(local_180 + 0x4f5) != '\0') {
    if ((*(int *)(local_180 + 0x4ec) == *(int *)(local_180 + 0x4f0)) &&
       (*(char *)(local_180 + 0x4f4) != '\0')) {
      FUN_0041ddd0(&local_160,PTR_PTR_02005548);
      FUN_00416910(local_140,local_160,0xff);
      FUN_00415020(local_1f,local_140,2);
    }
    else {
      FUN_0041ddd0(&local_168,PTR_PTR_02005650);
      FUN_00416910(local_140,local_168,0xff);
      FUN_00415020(local_1f,local_140,2);
    }
    iVar8 = *(int *)(local_180 + 0x4f0);
    if (7 < iVar8) {
      iVar8 = iVar8 + 4;
    }
    local_1c = *(undefined4 *)(local_180 + 0x498 + (longlong)iVar8 * 4);
    uVar5 = FUN_00c55f10(auStack_1b8,0x7f < (byte)local_1c,0,0xff);
    uVar2 = local_1c;
    local_1c = CONCAT31(local_1c._1_3_,uVar5);
    uVar3 = local_1c;
    local_1c._1_1_ = SUB41(uVar2,1);
    bVar11 = 0x7f < local_1c._1_1_;
    local_1c = uVar3;
    uVar5 = FUN_00c55f10(auStack_1b8,bVar11,0,0xff);
    uVar2 = local_1c;
    local_1c._0_2_ = CONCAT11(uVar5,(byte)local_1c);
    uVar4 = local_1c;
    local_1c._2_1_ = SUB41(uVar2,2);
    bVar11 = 0x7f < local_1c._2_1_;
    local_1c = uVar4;
    bVar6 = FUN_00c55f10(auStack_1b8,bVar11,0,0xff);
    uVar4 = local_1c;
    local_1c._0_3_ = CONCAT12(bVar6,(undefined2)local_1c);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(local_180 + 0x490) + 0x70),
                 uVar4 & 0xffff | (uint)bVar6 << 0x10);
    iVar8 = *(int *)(local_180 + 0x4f0);
    iVar1 = *(int *)(local_180 + 0x504);
    local_38 = (iVar8 % iVar1) * *(int *)(local_180 + 0x4fc);
    local_30 = local_38 + *(int *)(local_180 + 0x4fc);
    local_34 = (iVar8 / iVar1) * *(int *)(local_180 + 0x500);
    local_2c = local_34 + *(int *)(local_180 + 0x500);
    uVar9 = FUN_005ffa40(*(undefined8 *)(local_180 + 0x490),
                         (longlong)iVar8 % (longlong)iVar1 & 0xffffffff);
    FUN_004154b0(&local_170,local_1f,0);
    uVar10 = FUN_004425e0(local_26,local_170);
    FUN_004167a0(&local_178,uVar10);
    local_198 = 0x125;
    FUN_00429440(uVar9,local_178,0xffffffff,&local_38);
  }
  uVar9 = FUN_005ffa40(*(undefined8 *)(local_180 + 0x490));
  thunk_FUN_03b994b9(uVar9,uVar7);
  FUN_00414480(&local_178);
  FUN_004144d0(&local_170);
  FUN_00414560(&local_168,3);
  FUN_004144d0(&local_150);
  FUN_00414480(&local_148);
  FUN_00414480(&local_40);
  return;
}

