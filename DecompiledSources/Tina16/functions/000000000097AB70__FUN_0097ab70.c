/* Ghidra address: 0097ab70 */
/* Ghidra symbol: FUN_0097ab70 */


void FUN_0097ab70(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined *local_30;
  
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_2 + 0x80;
  }
  local_c8 = param_1;
  local_c0 = param_2;
  FUN_009781e0(param_1,*(undefined8 *)(param_2 + 0x38),lVar5,*(undefined8 *)(param_2 + 0xa8));
  local_40 = L"          ";
  local_38 = *(undefined8 *)(local_c0 + 0x88);
  local_30 = &DAT_0097b270;
  if (local_c0 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = local_c0 + 0x80;
  }
  local_d8 = 2;
  local_d0 = 0;
  (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_40);
  iVar2 = (**(code **)(**(longlong **)(local_c0 + 0xa0) + 0x38))(*(longlong **)(local_c0 + 0xa0));
  if (iVar2 < 1) {
    FUN_0097a930(auStack_f8,&local_68,*(undefined1 *)(local_c0 + 0x90));
    local_60 = local_68;
    local_58 = &DAT_0097b270;
    if (local_c0 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_c0 + 0x80;
    }
    local_d8 = 1;
    local_d0 = 0;
    (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_60);
  }
  else {
    local_48 = L"(";
    if (local_c0 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_c0 + 0x80;
    }
    local_d8 = 0;
    local_d0 = 0;
    (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_48);
    iVar2 = (**(code **)(**(longlong **)(local_c0 + 0xa0) + 0x38))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_40 = L" ";
        (**(code **)(**(longlong **)(local_c0 + 0xa0) + 0x28))
                  (*(longlong **)(local_c0 + 0xa0),&local_50,iVar4);
        local_38 = local_50;
        local_30 = &DAT_0097b270;
        if (local_c0 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = local_c0 + 0x80;
        }
        local_d8 = 2;
        local_d0 = 0;
        (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_40);
        iVar3 = (**(code **)(**(longlong **)(local_c0 + 0xa0) + 0x38))
                          (*(longlong **)(local_c0 + 0xa0));
        if (iVar4 < iVar3 + -1) {
          local_48 = L"|";
          if (local_c0 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = local_c0 + 0x80;
          }
          local_d8 = 0;
          local_d0 = 0;
          (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_48)
          ;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_48 = L") ";
    if (local_c0 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_c0 + 0x80;
    }
    local_d8 = 0;
    local_d0 = 0;
    (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_48);
  }
  cVar1 = *(char *)(local_c0 + 0x91);
  if (cVar1 == '\x01') {
    local_48 = L" #FIXED";
    if (local_c0 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_c0 + 0x80;
    }
    local_d8 = 0;
    local_d0 = 0;
    (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_48);
  }
  else if (cVar1 == '\x02') {
    local_48 = L" #IMPLIED";
    if (local_c0 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_c0 + 0x80;
    }
    local_d8 = 0;
    local_d0 = 0;
    (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_48);
  }
  else if (cVar1 == '\x03') {
    local_48 = L" #REQUIRED";
    if (local_c0 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_c0 + 0x80;
    }
    local_d8 = 0;
    local_d0 = 0;
    (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_48);
  }
  if (*(byte *)(local_c0 + 0x91) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)local_c0 >> 8),1) <<
             (*(byte *)(local_c0 + 0x91) & 0x1f) & 3U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_00415e60(&local_70,DAT_01e32a80);
    iVar2 = FUN_00417170(local_70,*(undefined8 *)(local_c0 + 0x98),1);
    if (iVar2 < 1) {
      local_98 = &DAT_0097b270;
      FUN_00415e60(&local_b0,DAT_01e32a80);
      local_90 = local_b0;
      local_88 = *(undefined8 *)(local_c0 + 0x98);
      FUN_00415e60(&local_b8,DAT_01e32a80);
      local_80 = local_b8;
      local_78 = &DAT_0097b2dc;
      if (local_c0 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = local_c0 + 0x80;
      }
      local_d8 = 4;
      local_d0 = 0;
      (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_98);
    }
    else {
      local_98 = &DAT_0097b270;
      FUN_00415e60(&local_a0,DAT_01e32a82);
      local_90 = local_a0;
      local_88 = *(undefined8 *)(local_c0 + 0x98);
      FUN_00415e60(&local_a8,DAT_01e32a82);
      local_80 = local_a8;
      local_78 = &DAT_0097b2dc;
      if (local_c0 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = local_c0 + 0x80;
      }
      local_d8 = 4;
      local_d0 = 0;
      (**(code **)(*local_c8 + 0xb8))(local_c8,*(undefined8 *)(local_c0 + 0x38),lVar5,&local_98);
    }
  }
  FUN_004145c0(&local_b8,4);
  FUN_004145c0(&local_70,2);
  FUN_00414520(&local_50);
  return;
}

