/* Ghidra address: 00d427c0 */
/* Ghidra symbol: FUN_00d427c0 */


void FUN_00d427c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar13;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [28];
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [16];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [2];
  int local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [20];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_b8 = 0;
  local_b0 = 0;
  uVar8 = FUN_005ffa40(param_2);
  FUN_00787be0(param_1[3],&local_44);
  cVar2 = FUN_00d41a60(param_1);
  uVar4 = FUN_00788c10(param_1);
  FUN_005fdab0(param_2[0x10],uVar4);
  lVar1 = *param_2;
  (**(code **)(lVar1 + 0xa8))(param_2,&local_44);
  cVar3 = FUN_00787c60(param_1[3]);
  uVar12 = (undefined7)((ulonglong)lVar1 >> 8);
  if (cVar3 == '\0') {
    uVar11 = CONCAT71(uVar12,0xb);
  }
  else {
    uVar11 = CONCAT71(uVar12,8);
  }
  uVar12 = (undefined7)((ulonglong)uVar11 >> 8);
  if ((char)param_1[0xe] == '\0') {
    if ((char)param_1[0xc] != '\0') {
      uVar11 = CONCAT71(uVar12,9);
    }
  }
  else {
    uVar11 = CONCAT71(uVar12,10);
  }
  uVar4 = (undefined4)uVar11;
  if (cVar2 == '\x01') {
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),(char)uVar11 + '\x04');
  }
  local_8c = (**(code **)(*param_1 + 0x50))(param_1,0x47);
  uVar5 = (**(code **)(*param_1 + 0x50))(param_1,0x48);
  local_88 = uVar5;
  plVar9 = (longlong *)FUN_00781840();
  (**(code **)(*plVar9 + 200))(plVar9,local_34,uVar4);
  uVar11 = CONCAT44(uVar13,uVar5);
  FUN_004238d0(local_64,0,0,local_8c,uVar11);
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_00d37120(local_a8,local_64,&local_44);
  uVar10 = FUN_00787d50(param_1[3]);
  if ((uVar10 & 0x20) == 0x20) {
    iVar6 = FUN_004230a0(local_64);
    local_64[0] = (local_3c - iVar6) + -2;
    local_5c = local_3c;
    FUN_004238d0(&local_54,local_44 + 1,local_40,local_64[0],CONCAT44(uVar4,local_38));
  }
  else {
    FUN_00429ca0(local_64,1,0);
    FUN_004238d0(&local_54,local_5c + 2,local_40,local_3c,CONCAT44(uVar4,local_38));
  }
  uVar11 = FUN_00781840();
  uVar10 = 0;
  FUN_00778dc0(uVar11,uVar8,local_34,local_64,0,0);
  local_54 = local_54 + 1;
  local_4c = local_4c + -1;
  cVar2 = FUN_00788bc0(param_1);
  if (cVar2 != '\0') {
    uVar10 = uVar10 & 0xffffffff00000000;
    FUN_004238d0(local_84,0,0,0,uVar10);
    uVar4 = (undefined4)(uVar10 >> 0x20);
    FUN_00787f40(param_1[3],&local_b0);
    uVar11 = FUN_00416740(local_b0);
    thunk_FUN_041a24be(uVar8,uVar11,0xffffffff,local_84,CONCAT44(uVar4,0x400));
    local_74 = local_54;
    local_70 = local_50;
    local_6c = local_4c;
    local_68 = local_48;
    iVar6 = FUN_004230a0(local_84);
    _local_6c = CONCAT44(local_68,local_74 + iVar6 + 2);
    local_74 = local_74 + -2;
    iVar6 = FUN_004230c0(&local_74);
    iVar7 = FUN_004230c0(local_84);
    iVar6 = ((local_70 + iVar6 / 2) - iVar7 / 2) + -2;
    if (iVar6 < local_50) {
      iVar6 = local_50;
    }
    _local_74 = CONCAT44(iVar6,local_74);
    iVar6 = FUN_004230c0(local_84,(longlong)iVar7 % 2 & 0xffffffff);
    iVar6 = local_70 + iVar6 + 4;
    if (local_48 < iVar6) {
      iVar6 = local_48;
    }
    _local_6c = CONCAT44(iVar6,local_6c);
    (**(code **)(*param_2 + 0x98))(param_2,&local_74);
  }
  FUN_00787f40(param_1[3],&local_b8);
  (**(code **)(*param_1 + 0x98))(param_1,uVar8,local_b8,local_34,&local_54);
  FUN_00414560(&local_b8,2);
  return;
}

