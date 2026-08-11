/* Ghidra address: 00f92880 */
/* Ghidra symbol: FUN_00f92880 */


void FUN_00f92880(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  undefined1 *local_30;
  
  local_30 = auStack_f8;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_38);
  cVar1 = FUN_00f60aa0(local_38);
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_40);
    cVar1 = FUN_00f60e10(local_40);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x704) = 0;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_48);
      FUN_00414ad0(param_1 + 0x6f8,local_48);
      goto LAB_00f92ae1;
    }
  }
  *(undefined1 *)(param_1 + 0x704) = 1;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_50);
  uVar2 = FUN_00f60f70(local_50);
  *(undefined4 *)(param_1 + 0x700) = uVar2;
  if ((*(int *)(param_1 + 0x700) < 0) || (0xff < *(int *)(param_1 + 0x700))) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_60);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_70,PTR_PTR_02004000);
    FUN_00b8e650(uVar3,&local_68,L"HDLStrings.Msg_FC_InvValue",local_70);
    local_d8 = local_68;
    FUN_00416cd0(&local_58,3,local_60,&DAT_00f92d7c);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
    FUN_004134c0(uVar3);
  }
LAB_00f92ae1:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_78);
  cVar1 = FUN_00f60aa0(local_78);
  if (cVar1 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_90);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_a0,PTR_PTR_02002020);
    FUN_00b8e650(uVar3,&local_98,L"HDLStrings.Msg_FC_InvIdentifier",local_a0);
    local_d8 = local_98;
    FUN_00416cd0(&local_88,3,local_90,&DAT_00f92d7c);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_88);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_80);
    FUN_00414ad0(param_1 + 0x6f0,local_80);
  }
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_60,6);
  return;
}

