/* Ghidra address: 00d03810 */
/* Ghidra symbol: FUN_00d03810 */


void FUN_00d03810(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  longlong *local_60;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  char local_39;
  longlong local_38;
  int local_2c;
  longlong local_20;
  
  local_70 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  cVar2 = FUN_00d02d90(auStack_b8);
  if (cVar2 == '\0') goto LAB_00d03c7b;
  local_54 = 0;
  local_2c = 0;
  if (*(longlong *)(param_3 + 0x118) != 0) {
    cVar2 = FUN_00d00530(param_3);
    if (cVar2 == '\0') {
      uVar4 = FUN_00d05df0(param_1);
      cVar2 = FUN_00d00600(uVar4);
      if ((cVar2 != '\0') && ((*(ushort *)(param_1 + 0x205) & 0x200) == 0)) {
        local_54 = 2;
      }
    }
    else if ((*(ushort *)(param_1 + 0x205) & 0x10) == 0) {
      local_54 = 1;
    }
  }
  if (local_54 == 0) {
LAB_00d03900:
    local_39 = '\0';
  }
  else {
    cVar2 = FUN_004113d0(*(undefined8 *)(param_3 + 0x118),&PTR_FUN_0047c7b0);
    if (cVar2 != '\0') goto LAB_00d03900;
    local_39 = '\x01';
  }
  local_48 = *(undefined8 *)(param_3 + 0x118);
  if (local_39 == '\0') {
    local_50 = 0;
  }
  else {
    local_50 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    *(undefined8 *)(param_3 + 0x118) = local_50;
  }
  local_60 = *(longlong **)(param_1 + 0x1d8);
  if (*(longlong *)(param_3 + 0x118) == 0) {
    local_20 = 0;
  }
  else {
    if (local_60 != (longlong *)0x0) {
      cVar2 = (**(code **)(*local_60 + 0x90))(local_60);
      if (cVar2 != '\0') {
        local_80 = L"deflate";
        local_78 = L"gzip";
        local_2c = FUN_00874bb0(*(undefined8 *)(param_3 + 0x38),&local_80,1,0);
        local_2c = local_2c + 1;
      }
    }
    if (local_2c < 1) {
      local_20 = *(longlong *)(param_3 + 0x118);
    }
    else {
      local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    }
  }
  FUN_0043e1a0(&local_88,*(undefined8 *)(param_3 + 0xb8));
  iVar3 = (**(code **)PTR_PTR_020018b0)(L"chunked",local_88);
  if (iVar3 < 1) {
    if (*(char *)(param_3 + 0xb0) == '\0') {
      cVar2 = FUN_008b0130(*(undefined8 *)(param_3 + 0x70),L"multipart");
      if (cVar2 == '\0') {
        if (local_20 == 0) {
          FUN_00caf660(*(undefined8 *)(param_1 + 0x100));
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x100) + 0x1a0))
                    (*(longlong **)(param_1 + 0x100),local_20,0xffffffffffffffff,1);
        }
      }
      else {
        FUN_00d03420(auStack_b8);
      }
    }
    else {
      local_98 = *(longlong *)(param_3 + 0x48);
      if (0 < local_98) {
        if (local_20 == 0) {
          FUN_00caf540(*(undefined8 *)(param_1 + 0x100),local_98);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x100) + 0x1a0))
                    (*(longlong **)(param_1 + 0x100),local_20,local_98,0);
        }
      }
    }
  }
  else {
    FUN_00d03100(auStack_b8);
  }
  if (0 < local_2c) {
    FUN_004b6dc0(local_20,0);
    if (local_2c == 1) {
      (**(code **)(*local_60 + 0xb8))(local_60,local_20,*(undefined8 *)(param_3 + 0x118));
    }
    else if (local_2c == 2) {
      (**(code **)(*local_60 + 0xd0))(local_60,local_20,*(undefined8 *)(param_3 + 0x118));
    }
  }
  lVar1 = local_20;
  if (0 < local_2c) {
    local_38 = local_20;
    local_20 = 0;
    FUN_00410f20(lVar1);
  }
  if (local_54 == 1) {
    FUN_00d06230(param_3);
  }
  else if (local_54 == 2) {
    FUN_00d024e0(&local_90,*(undefined8 *)(param_3 + 0x118));
    FUN_00414ad0(param_3 + 0x20,local_90);
  }
  if (local_39 != '\0') {
    FUN_004b8ba0(local_48,*(undefined8 *)(param_3 + 0x118),0);
    FUN_00410f20(local_50);
    *(undefined8 *)(param_3 + 0x118) = local_48;
  }
LAB_00d03c7b:
  FUN_00414560(&local_90,2);
  return;
}

