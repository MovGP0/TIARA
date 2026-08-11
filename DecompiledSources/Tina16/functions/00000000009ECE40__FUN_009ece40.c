/* Ghidra address: 009ece40 */
/* Ghidra symbol: FUN_009ece40 */


void FUN_009ece40(longlong *param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined8 local_a0;
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  int local_68;
  int local_58;
  int local_54;
  undefined1 *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_39;
  undefined8 local_38;
  char local_29;
  
  local_50 = auStack_c8;
  FUN_0060a750(param_1);
  local_38 = 0;
  local_29 = '\0';
  lVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  if (lVar4 != 0) {
    uVar5 = FUN_005ffa40(param_2);
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
    local_38 = thunk_FUN_0418f5de(uVar5,uVar6,0xffffffff);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_03a5de49(uVar5);
    local_29 = '\x01';
  }
  uVar5 = FUN_005ffa40(param_2);
  iVar3 = thunk_FUN_03e5bd07(uVar5,0xc);
  uVar5 = FUN_005ffa40(param_2);
  local_48 = thunk_FUN_03e5bd07(uVar5,0xe);
  local_48 = iVar3 * local_48;
  if (local_48 < 9) {
    uVar5 = FUN_00609f90(param_1);
    if ((byte)uVar5 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x70U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      local_39 = '\x01';
      goto LAB_009ecf73;
    }
  }
  local_39 = '\0';
LAB_009ecf73:
  if (local_39 == '\0') {
    cVar2 = FUN_00609f50(param_1);
    if (cVar2 == '\0') {
      uVar5 = FUN_005ffa40(param_2);
      thunk_FUN_041e8c78(uVar5,3);
    }
  }
  else {
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_04131f42(uVar5,&local_44);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_041e8c78(uVar5,4);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_03b0b419(uVar5,local_44,local_40,&local_44);
  }
  if ((char)param_1[0xf] == '\0') {
    uVar5 = FUN_005ffa40(param_2);
    iVar3 = *param_3;
    iVar1 = param_3[1];
    uVar6 = FUN_00609e10(param_1);
    local_a0 = FUN_005ffa40(uVar6);
    local_98 = *param_4;
    local_90 = param_4[1];
    local_a8 = param_3[3] - iVar1;
    local_88 = param_4[2] - local_98;
    local_80 = param_4[3] - local_90;
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x90));
    thunk_FUN_03c1ffbb(uVar5,iVar3,iVar1,param_3[2] - iVar3);
  }
  else {
    uVar5 = FUN_005ffa40(param_2);
    local_58 = *param_3;
    local_54 = param_3[1];
    uVar6 = FUN_00609e10(param_1);
    uVar6 = FUN_005ffa40(uVar6);
    iVar3 = *param_4;
    iVar1 = param_4[1];
    uVar7 = FUN_00609e10(param_1[0xe]);
    local_78 = FUN_005ffa40(uVar7);
    local_a8 = param_3[3] - local_54;
    local_88 = param_4[2] - iVar3;
    local_80 = param_4[3] - iVar1;
    local_a0 = uVar6;
    local_98 = iVar3;
    local_90 = iVar1;
    local_70 = iVar3;
    local_68 = iVar1;
    FUN_009ebee0(uVar5,local_58,local_54,param_3[2] - local_58);
  }
  if (local_29 != '\0') {
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_0418f5de(uVar5,local_38,0xffffffff);
  }
  return;
}

