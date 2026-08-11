/* Ghidra address: 007e2880 */
/* Ghidra symbol: FUN_007e2880 */


void FUN_007e2880(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_70;
  undefined8 local_60;
  undefined8 local_58;
  byte local_49;
  longlong local_48;
  char local_39;
  longlong local_38;
  undefined4 local_2c;
  int local_28 [2];
  int local_20;
  
  local_60 = 0;
  local_58 = 0;
  pcVar4 = (code *)FUN_00411550(param_1,0xfff1);
  uVar5 = (*pcVar4)(param_1);
  cVar2 = FUN_004113d0(uVar5,&PTR_FUN_007db330);
  if (cVar2 == '\0') {
    local_39 = '\0';
  }
  else {
    local_39 = '\x01';
    FUN_007e1f60(auStack_98);
  }
  local_38 = FUN_007e1f10(param_1);
  local_48 = FUN_007e3880(param_1);
  local_2c = FUN_007e53b0(param_1);
  cVar2 = FUN_0044f0c0(6,0);
  if (cVar2 != '\0') {
    plVar6 = (longlong *)FUN_007810f0();
    lVar7 = (**(code **)(*plVar6 + 0xa8))(plVar6,10);
    if (lVar7 != 0) {
      FUN_007e1fc0(auStack_98);
      goto LAB_007e2b8a;
    }
  }
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),&LAB_007e2c18);
  if (iVar3 == 0) {
    *param_4 = 5;
    *param_3 = -2;
    bVar1 = false;
  }
  else if ((local_38 == 0) || ((0x7fffffff < *(uint *)(param_1 + 0x88) && (local_39 != '\0')))) {
    plVar6 = *(longlong **)(param_1 + 0xa0);
    if (plVar6 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
      if (cVar2 == '\0') {
        *param_3 = 0x10;
        if (local_39 == '\0') {
          *param_4 = 0x10;
        }
        bVar1 = true;
        goto LAB_007e2a37;
      }
    }
    *param_3 = -7;
    bVar1 = false;
  }
  else {
    *param_3 = *(int *)(local_38 + 0x94);
    if (local_39 == '\0') {
      *param_4 = *(int *)(local_38 + 0x90);
    }
    bVar1 = true;
  }
LAB_007e2a37:
  if ((bVar1) && (local_39 == '\0')) {
    *param_3 = *param_3 + 0xf;
  }
  if (local_39 == '\0') {
    *param_4 = *param_4 + 3;
  }
  local_78 = (int *)((ulonglong)local_78._4_4_ << 0x20);
  FUN_004238d0(local_28,0,0,0);
  if (local_48 == 0) {
    cVar2 = FUN_004113d0(0,&PTR_FUN_007dba80);
    if (cVar2 == '\0') {
      local_49 = 0;
    }
    else {
      local_49 = *(byte *)(local_48 + 0xd0);
    }
  }
  else {
    local_49 = 0;
  }
  if (*(short *)(param_1 + 0xc0) == 0) {
    FUN_00414b50(&local_58,*(undefined8 *)(param_1 + 0x78));
  }
  else {
    FUN_007dc700(&local_60,*(short *)(param_1 + 0xc0));
    FUN_00416ba0(&local_58,*(undefined8 *)(param_1 + 0x78),local_60);
  }
  local_78 = (int *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_70 = (uint)(*(ushort *)(&DAT_01e131fa + (ulonglong)local_49 * 2) | 0x560);
  FUN_007de160(param_1,param_2,local_58,local_28);
  *param_3 = *param_3 + (local_20 - local_28[0]) + 7;
  iVar3 = thunk_FUN_03f3ed25(*param_4,local_2c,0x60);
  *param_4 = iVar3;
  iVar3 = thunk_FUN_03f3ed25(*param_3,local_2c,0x60);
  *param_3 = iVar3;
LAB_007e2b8a:
  if (*(longlong *)(param_1 + 0x140) != 0) {
    local_78 = param_4;
    (**(code **)(param_1 + 0x140))(*(undefined8 *)(param_1 + 0x148),param_1,param_2,param_3);
  }
  FUN_00414560(&local_60,2);
  return;
}

