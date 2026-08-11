/* Ghidra address: 006f3cc0 */
/* Ghidra symbol: FUN_006f3cc0 */


longlong FUN_006f3cc0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  int local_78;
  longlong local_68;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  
  local_88 = 0;
  puVar3 = &local_80;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 2;
  }
  local_98 = param_1;
  if ((local_80 & 4) == 0) {
    if ((char)param_1[0xa2] == '\0') {
      local_90 = FUN_006efcb0(param_1[0x9c],local_7c);
    }
    else if (local_7c < 0) {
      local_90 = 0;
    }
    else if (local_78 == 0) {
      uVar1 = FUN_006f3c70(auStack_b8,local_80);
      lVar2 = local_98[0xb2];
      *(int *)(lVar2 + 0x20) = local_7c;
      *(longlong *)(lVar2 + 0x40) = local_58;
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x90))(*(longlong **)(lVar2 + 0x10));
      if (((uVar1 & 1) == 0) || (local_68 == 0)) {
        FUN_00414480(&local_88);
      }
      else {
        FUN_00442b00(&local_88,local_68);
      }
      FUN_00414ad0(local_98[0xb2] + 0x30,local_88);
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(local_98[0xb2] + 0x18) = local_5c;
      }
      if ((uVar1 & 0x10) != 0) {
        *(undefined4 *)(local_98[0xb2] + 0x1c) = local_50;
      }
      (**(code **)(*local_98 + 0x300))(local_98,local_98[0xb2],uVar1);
      local_90 = local_98[0xb2];
    }
    else {
      local_90 = param_1[0xb2];
    }
  }
  else {
    local_90 = local_58;
  }
  FUN_00414480(&local_88);
  return local_90;
}

