/* Ghidra address: 009795e0 */
/* Ghidra symbol: FUN_009795e0 */


void FUN_009795e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  wchar_t *local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2 + 0x80;
  }
  FUN_00978130(param_1,4,lVar3);
  local_38 = L"<!DOCTYPE ";
  local_30 = *(undefined8 *)(param_2 + 0x90);
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_38,1,0);
  iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xc0),0);
  if (iVar1 == 0) {
    iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xb8),0);
    if (iVar1 != 0) {
      local_50 = (undefined **)0x979a0c;
      local_48 = *(undefined8 *)(param_2 + 0xb8);
      local_40 = L"\"";
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_50,2,0);
    }
  }
  else {
    iVar1 = FUN_00417170(DAT_01e32a78,*(undefined8 *)(param_2 + 0xc0),1);
    if (iVar1 == 0) {
      FUN_00414be0(local_20,DAT_01e32a78);
    }
    else {
      FUN_00414be0(local_20,DAT_01e32a70);
    }
    iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0xb8),0);
    if (iVar1 == 0) {
      local_70 = L" SYSTEM ";
      local_68 = local_20[0];
      local_60 = *(undefined8 *)(param_2 + 0xc0);
      local_58 = local_20[0];
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_70,3,0);
    }
    else {
      local_a0 = L" PUBLIC \"";
      local_98 = *(undefined8 *)(param_2 + 0xb8);
      local_90 = &DAT_00979a44;
      local_88 = local_20[0];
      local_80 = *(undefined8 *)(param_2 + 0xc0);
      local_78 = local_20[0];
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_a0,5,0);
    }
  }
  uVar2 = 0;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_2 + 0x88) + -4) >> 1;
  }
  if (uVar2 == 0) {
    local_a8 = &DAT_00979a50;
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_a8,0,0);
  }
  else {
    local_50 = &PTR_DAT_00979a5c;
    local_48 = *(undefined8 *)(param_2 + 0x88);
    local_40 = L"] >\n";
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_50,2,0);
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,4,param_2);
  FUN_00414520(local_20);
  return;
}

