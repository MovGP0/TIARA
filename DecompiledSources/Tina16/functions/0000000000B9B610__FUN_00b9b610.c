/* Ghidra address: 00b9b610 */
/* Ghidra symbol: FUN_00b9b610 */


void FUN_00b9b610(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_50;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_50 = auStack_88;
  local_18 = 0;
  local_10 = 0;
  local_28 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x1c) < local_28) {
    local_28 = (longlong)*(int *)(param_1 + 0x1c);
  }
  puVar1 = auStack_88;
  if (local_28 != 0) {
    FUN_00419260(&local_18,&DAT_00406578,1,local_28 + 5);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x20),local_18,local_28);
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x50),&PTR_FUN_0043c260);
    if (cVar2 == '\0') {
      local_1c = 0;
    }
    else {
      if ((*(byte *)(local_18 + -1 + local_28) & 0x80) == 0) {
        local_1c = 0;
      }
      else if ((((local_28 < 2) || ((*(byte *)(local_18 + -1 + local_28) & 0xe0) != 0xc0)) &&
               ((local_28 < 3 || ((*(byte *)(local_18 + -2 + local_28) & 0xf0) != 0xe0)))) &&
              ((((local_28 < 4 || ((*(byte *)(local_18 + -3 + local_28) & 0xf8) != 0xf0)) &&
                ((local_28 < 5 || ((*(byte *)(local_18 + -4 + local_28) & 0xfc) != 0xf8)))) &&
               ((local_28 < 6 || ((*(byte *)(local_18 + -5 + local_28) & 0xfe) != 0xfc)))))) {
        if (((((local_28 < 2) || ((*(byte *)(local_18 + -1 + local_28) & 0xf0) != 0xe0)) &&
             ((local_28 < 3 || ((*(byte *)(local_18 + -2 + local_28) & 0xf8) != 0xf0)))) &&
            ((local_28 < 4 || ((*(byte *)(local_18 + -3 + local_28) & 0xfc) != 0xf8)))) &&
           ((local_28 < 5 || ((*(byte *)(local_18 + -4 + local_28) & 0xfe) != 0xfc)))) {
          if (((local_28 < 2) || ((*(byte *)(local_18 + -1 + local_28) & 0xf8) != 0xf0)) &&
             (((local_28 < 3 || ((*(byte *)(local_18 + -2 + local_28) & 0xfc) != 0xf8)) &&
              ((local_28 < 4 || ((*(byte *)(local_18 + -3 + local_28) & 0xfe) != 0xfc)))))) {
            if (((local_28 < 2) || ((*(byte *)(local_18 + -1 + local_28) & 0xfc) != 0xf8)) &&
               ((local_28 < 3 || ((*(byte *)(local_18 + -2 + local_28) & 0xfe) != 0xfc)))) {
              if ((local_28 < 2) || ((*(byte *)(local_18 + -1 + local_28) & 0xfe) != 0xfc)) {
                local_1c = 0;
              }
              else {
                local_1c = 5;
              }
            }
            else {
              local_1c = 4;
            }
          }
          else {
            local_1c = 3;
          }
        }
        else {
          local_1c = 2;
        }
      }
      else {
        local_1c = 1;
      }
      if (local_1c != 0) {
        FUN_004b84c0(*(undefined8 *)(param_1 + 0x20),local_18 + local_28,local_1c);
      }
    }
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + local_28 + local_1c;
    FUN_00419260(&local_18,&DAT_00406578,1,local_28 + local_1c);
    FUN_00414480(&local_10);
    local_30 = *(undefined8 *)(param_1 + 0x50);
    local_38 = local_18;
    if (local_18 != 0) {
      local_38 = *(longlong *)(local_18 + -8);
    }
    local_68 = (undefined4)local_38;
    FUN_0045aba0(local_30,&local_10,local_18,0);
    FUN_00414ad0(param_1 + 8,local_10);
    FUN_00414480(&local_10);
    local_40 = *(longlong *)(param_1 + 8);
    local_44 = 0;
    if (local_40 != 0) {
      local_44 = *(undefined4 *)(local_40 + -4);
    }
    *(undefined4 *)(param_1 + 0x14) = local_44;
    *(undefined4 *)(param_1 + 0x18) = local_44;
    *(undefined4 *)(param_1 + 0x10) = 1;
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00419430(&local_18,&DAT_00406578);
  FUN_00414480(&local_10);
  return;
}

