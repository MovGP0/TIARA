/* Ghidra address: 009eca40 */
/* Ghidra symbol: FUN_009eca40 */


void FUN_009eca40(longlong *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_39;
  undefined8 local_38;
  char local_29;
  
  local_50 = auStack_d8;
  FUN_0060a750(param_1);
  local_38 = 0;
  local_29 = '\0';
  lVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  if (lVar5 != 0) {
    uVar6 = FUN_005ffa40(param_2);
    uVar7 = (**(code **)(*param_1 + 0x50))(param_1);
    local_38 = thunk_FUN_0418f5de(uVar6,uVar7,0xffffffff);
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_03a5de49(uVar6);
    local_29 = '\x01';
  }
  uVar6 = FUN_005ffa40(param_2);
  iVar2 = thunk_FUN_03e5bd07(uVar6,0xc);
  uVar6 = FUN_005ffa40(param_2);
  local_48 = thunk_FUN_03e5bd07(uVar6,0xe);
  local_48 = iVar2 * local_48;
  if (local_48 < 9) {
    uVar6 = FUN_00609f90(param_1);
    if ((byte)uVar6 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      local_39 = '\x01';
      goto LAB_009ecb6f;
    }
  }
  local_39 = '\0';
LAB_009ecb6f:
  if (local_39 == '\0') {
    cVar1 = FUN_00609f50(param_1);
    if (cVar1 == '\0') {
      uVar6 = FUN_005ffa40(param_2);
      thunk_FUN_041e8c78(uVar6,3);
    }
  }
  else {
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_04131f42(uVar6,&local_44);
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_041e8c78(uVar6,4);
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_03b0b419(uVar6,local_44,local_40,&local_44);
  }
  if ((char)param_1[0xf] == '\0') {
    uVar6 = FUN_005ffa40(param_2);
    local_54 = *param_3;
    iVar2 = param_3[1];
    uVar7 = FUN_00609e10(param_1);
    uVar7 = FUN_005ffa40(uVar7);
    uVar3 = FUN_004230a0(param_3);
    local_90 = FUN_004230c0(param_3);
    local_b8 = param_3[3] - iVar2;
    local_a8 = 0;
    local_a0 = 0;
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0x90));
    local_b0 = uVar7;
    local_98 = uVar3;
    thunk_FUN_03c1ffbb(uVar6,local_54,iVar2,param_3[2] - local_54);
  }
  else {
    uVar6 = FUN_005ffa40(param_2);
    local_5c = *param_3;
    local_58 = param_3[1];
    uVar7 = FUN_00609e10(param_1);
    uVar7 = FUN_005ffa40(uVar7);
    uVar3 = FUN_004230a0(param_3);
    uVar4 = FUN_004230c0(param_3);
    uVar8 = FUN_00609e10(param_1[0xe]);
    local_88 = FUN_005ffa40(uVar8);
    local_b8 = param_3[3] - local_58;
    local_a8 = 0;
    local_a0 = 0;
    local_80 = 0;
    local_78 = 0;
    local_b0 = uVar7;
    local_98 = uVar3;
    local_90 = uVar4;
    FUN_009ebee0(uVar6,local_5c,local_58,param_3[2] - local_5c);
  }
  if (local_29 != '\0') {
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_0418f5de(uVar6,local_38,0xffffffff);
  }
  return;
}

