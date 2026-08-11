/* Ghidra address: 00979f50 */
/* Ghidra symbol: FUN_00979f50 */


void FUN_00979f50(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 + 0x80;
  }
  FUN_00978130(param_1,0,lVar2);
  iVar1 = FUN_00416420(*(undefined8 *)(param_2 + 0x88),0);
  if (iVar1 == 0) {
    if ((int)param_1[0x1a] < 1) {
      local_40 = &DAT_0097a150;
      local_38 = *(undefined8 *)(param_2 + 0x90);
      local_30 = &DAT_0097a168;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_40,2,0);
    }
    else {
      local_40 = &DAT_0097a150;
      local_38 = *(undefined8 *)(param_2 + 0x90);
      local_30 = &DAT_0097a15c;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_2 + 0x80;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_40,2,0);
    }
  }
  else if ((int)param_1[0x1a] < 1) {
    local_68 = &DAT_0097a150;
    local_60 = *(undefined8 *)(param_2 + 0x90);
    local_58 = &LAB_0097a174;
    local_50 = *(undefined8 *)(param_2 + 0x88);
    local_48 = &DAT_0097a168;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_68,4,0);
  }
  else {
    local_68 = &DAT_0097a150;
    local_60 = *(undefined8 *)(param_2 + 0x90);
    local_58 = &LAB_0097a174;
    local_50 = *(undefined8 *)(param_2 + 0x88);
    local_48 = &DAT_0097a15c;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar2,&local_68,4,0);
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,0,param_2);
  return;
}

