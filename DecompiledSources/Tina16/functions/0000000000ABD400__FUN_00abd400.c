/* Ghidra address: 00abd400 */
/* Ghidra symbol: FUN_00abd400 */


longlong FUN_00abd400(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6,char param_7)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  int local_8c;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  int local_24;
  undefined8 local_20;
  
  local_80 = auStack_c8;
  local_88 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  puVar4 = auStack_c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar4 = local_80;
  }
  local_80 = puVar4;
  local_a8 = param_5;
  local_a0 = param_6;
  FUN_00ac2090(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0xa8) = 4;
  *(undefined1 *)(local_res8 + 0x60) = 0;
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar5 = FUN_00742f60(&PTR_FUN_00a6c630,1,local_20);
  *(undefined8 *)(local_res8 + 0x1a0) = uVar5;
  FUN_0064cb30(uVar5,0xfffff060);
  (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x130))
            (*(longlong **)(local_res8 + 0x1a0),local_20);
  local_48 = *(longlong *)(local_res8 + 0x1a0);
  *(longlong *)(local_res8 + 0x1d0) = local_res8;
  FUN_0064cb90(local_48,0xfffff060);
  FUN_0064cc50(local_48,0x14);
  FUN_0064cbf0(local_48,0x1e);
  FUN_00743880(local_48,0);
  FUN_00743910(local_48,1);
  FUN_0064e030(local_48,0xffffff);
  *(undefined1 *)(local_48 + 0x4b0) = 1;
  FUN_0065bb80(local_48,0);
  FUN_0065bbd0(local_48,0);
  FUN_0064df70(local_48,0);
  (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x148))
            (*(longlong **)(local_res8 + 0x1a0),
             *(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  if ((*(char *)(local_res8 + 0xbc) == '\0') && (0 < *(int *)(local_res8 + 0xdc))) {
    FUN_0064cbf0(*(undefined8 *)(local_res8 + 0x1a0),*(undefined4 *)(local_res8 + 0xdc));
  }
  if ((*(char *)(local_res8 + 0xbd) == '\0') && (0 < *(int *)(local_res8 + 0xe0))) {
    FUN_0064cc50(*(undefined8 *)(local_res8 + 0x1a0),*(undefined4 *)(local_res8 + 0xe0));
  }
  local_8c = *(int *)(param_5 + 0x10) + -1;
  local_24 = 0;
  iVar3 = *(int *)(param_5 + 0x10);
  if (-1 < local_8c) {
    do {
      local_8c = iVar3;
      local_58 = FUN_004aeac0(param_5,local_24);
      bVar1 = *(byte *)(local_58 + 8);
      if (bVar1 < 0x34) {
        if (bVar1 == 0x33) {
          FUN_00414b50(&local_38,*(undefined8 *)(local_58 + 0x28));
          FUN_009ec440(&local_88,*(undefined8 *)(local_58 + 0x28));
          (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x50))
                    (*(longlong **)(local_res8 + 0x1a0),local_88);
        }
        else if (bVar1 == 4) {
          FUN_00ac2dc0(local_res8,*(undefined4 *)(local_58 + 0x30),*(undefined8 *)(local_58 + 0x28))
          ;
          FUN_00414ad0(local_res8 + 0xe8,*(undefined8 *)(local_res8 + 200));
        }
        else if (bVar1 == 8) {
          *(bool *)(local_res8 + 0xf0) = *(int *)(local_58 + 0x18) == 0;
          local_64 = *(int *)(local_58 + 0x18);
          local_68 = local_64;
          if (local_64 < 0) {
            local_68 = 0;
          }
          if (local_68 < 10) {
            local_6c = local_68;
          }
          else {
            local_6c = 10;
          }
          *(int *)(local_res8 + 0xf4) = local_6c;
        }
      }
      else if (bVar1 == 0x4e) {
        FUN_00414b50(&local_30,*(undefined8 *)(local_58 + 0x28));
      }
      else if (bVar1 == 0x57) {
        FUN_00414b50(&local_40,*(undefined8 *)(local_58 + 0x28));
      }
      local_24 = local_24 + 1;
      local_8c = local_8c + -1;
      iVar3 = local_8c;
    } while (local_8c != 0);
  }
  local_60 = *(longlong *)(local_res8 + 0x1a0);
  FUN_0064de00(local_60,0);
  if ((param_7 == '\0') && (*(longlong *)(*(longlong *)(local_res8 + 0x18) + 0x1e8) != 0)) {
    lVar2 = *(longlong *)(local_res8 + 0x18);
    local_a8 = local_30;
    local_a0 = *(undefined8 *)(local_res8 + 0x1a0);
    (**(code **)(lVar2 + 0x1e8))
              (*(undefined8 *)(lVar2 + 0x1f0),*(undefined8 *)(lVar2 + 0xb8),local_38,local_40);
  }
  *(undefined4 *)(local_res8 + 400) = *(undefined4 *)(local_60 + 0x98);
  *(undefined4 *)(local_res8 + 0x194) = *(undefined4 *)(local_60 + 0x9c);
  local_78 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x238);
  FUN_004ae7e0(local_78,local_res8);
  FUN_00414480(&local_88);
  FUN_00414560(&local_40,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

