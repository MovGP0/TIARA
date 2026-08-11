/* Ghidra address: 00805b00 */
/* Ghidra symbol: FUN_00805b00 */


int FUN_00805b00(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  int local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_28;
  undefined2 local_1e;
  int local_1c;
  
  local_70 = auStack_98;
  local_78 = 0;
  FUN_0064ac70();
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (((cVar1 == '\0') || ((*(byte *)(param_1 + 0xd5) & 8) != 0)) ||
       (*(char *)((longlong)param_1 + 0x4d6) == '\x01')) goto LAB_00805b74;
  }
  else {
LAB_00805b74:
    FUN_0041ddd0(&local_78,PTR_PTR_020033f0);
    uVar3 = FUN_0044d490(&PTR_FUN_00472870,1,local_78);
    FUN_004134c0(uVar3);
  }
  lVar4 = thunk_FUN_041d93e9();
  if (lVar4 != 0) {
    uVar3 = thunk_FUN_041d93e9();
    thunk_FUN_041b2403(uVar3,0x1f,0,0);
  }
  thunk_FUN_039ed528();
  FUN_0080ab60(DAT_02012668);
  local_50 = thunk_FUN_04128719();
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) | 8;
  if (((char)param_1[200] == '\0') && (*(char *)(DAT_02012668 + 400) != '\0')) {
    FUN_00655b90(param_1);
    FUN_0065b830(param_1);
    if (local_50 != 0) {
      iVar2 = thunk_FUN_041de4d6(local_50);
      if (iVar2 != 0) goto LAB_00805c41;
    }
    local_50 = thunk_FUN_04128719();
  }
LAB_00805c41:
  local_58 = FUN_007f9260();
  FUN_004aec30(*(undefined8 *)(DAT_02012670 + 0xf8),0,*(undefined8 *)(DAT_02012670 + 0xf0));
  *(longlong **)(DAT_02012670 + 0xf0) = param_1;
  local_1e = *(undefined2 *)(DAT_02012670 + 0x9c);
  FUN_008088b0(DAT_02012670,0);
  local_1c = *(int *)(DAT_02012670 + 0xa0);
  local_28 = FUN_007f94c0(0);
  FUN_008059a0(param_1);
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0xb000,0,0);
  *(undefined4 *)(param_1 + 0xa1) = 0;
  do {
    FUN_0080cca0(DAT_02012668);
    if (*(char *)(DAT_02012668 + 0x148) == '\0') {
      if ((int)param_1[0xa1] != 0) {
        FUN_00805370(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa1) = 2;
    }
    local_5c = (int)param_1[0xa1];
  } while (local_5c == 0);
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0xb001,0,0);
  lVar4 = thunk_FUN_04128719();
  lVar5 = FUN_0065b870(param_1);
  if (lVar4 != lVar5) {
    local_50 = 0;
  }
  FUN_00805990(param_1);
  if (*(int *)(DAT_02012670 + 0xa0) == local_1c) {
    FUN_008088b0(DAT_02012670,local_1e);
  }
  else {
    FUN_008088b0(DAT_02012670,0);
  }
  FUN_007f95c0(local_28);
  lVar4 = *(longlong *)(DAT_02012670 + 0xf8);
  if (*(int *)(lVar4 + 0x10) < 1) {
    *(undefined8 *)(DAT_02012670 + 0xf0) = 0;
  }
  else {
    local_38 = lVar4;
    uVar3 = FUN_004aeac0(lVar4,0);
    *(undefined8 *)(DAT_02012670 + 0xf0) = uVar3;
    local_40 = *(undefined8 *)(DAT_02012670 + 0xf8);
    local_48 = *(undefined8 *)(DAT_02012670 + 0xf0);
    FUN_004aee50(local_40,local_48,0);
  }
  if (local_50 != 0) {
    iVar2 = thunk_FUN_041de4d6(local_50);
    if (iVar2 == 0) {
      local_50 = FUN_007f9690(0);
    }
  }
  if (local_50 != 0) {
    thunk_FUN_04161dbd(local_50);
  }
  FUN_007f9270(local_58);
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xf7;
  FUN_0080aba0(DAT_02012668);
  FUN_00414480(&local_78);
  return local_5c;
}

