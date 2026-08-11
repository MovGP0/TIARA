/* Ghidra address: 00de0710 */
/* Ghidra symbol: FUN_00de0710 */


void FUN_00de0710(undefined8 param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  undefined2 local_30;
  undefined2 local_2e;
  uint local_2c;
  uint local_28;
  undefined1 local_23;
  ushort local_22;
  ushort *local_20;
  
  local_40 = auStack_78;
  local_20 = (ushort *)*param_3;
  if (-0x25a < param_2) {
    if (param_2 == -0x259) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffe9);
      (*pcVar1)(param_1);
      return;
    }
    if (param_2 != -600) {
      return;
    }
    local_40 = auStack_78;
    pcVar1 = (code *)FUN_00411550(param_1,0xffea);
    (*pcVar1)(param_1);
    return;
  }
  if (param_2 != -0x25a) {
    if (param_2 + 0x25fU < 3) {
      if (*(int *)(param_3 + 2) < 4) {
        return;
      }
      local_40 = auStack_78;
      local_28 = FUN_00462650(local_20 + 0x24);
      local_28 = local_28 & 7;
      local_2c = FUN_00462650(local_20 + 0x18);
      local_2c = local_2c & 7;
      local_23 = (&DAT_01ed785c)[(int)local_28];
      local_22 = *(ushort *)(&DAT_01ed783c + (longlong)(int)local_2c * 2) |
                 *(ushort *)(&DAT_01ed784c + (longlong)(int)local_28 * 2);
      local_28 = FUN_00462650(local_20 + 0xc);
      local_2c = FUN_00462650(local_20);
      if (param_2 == -0x25f) {
        pcVar1 = (code *)FUN_00411550(param_1,0xffd1);
        local_58 = local_2c;
        (*pcVar1)(param_1,local_23,local_22,local_28);
        return;
      }
      if (param_2 == -0x25e) {
        pcVar1 = (code *)FUN_00411550(param_1,0xffd2);
        (*pcVar1)(param_1,local_22,local_28,local_2c);
        return;
      }
      if (param_2 != -0x25d) {
        return;
      }
      pcVar1 = (code *)FUN_00411550(param_1,0xffd3);
      local_58 = local_2c;
      (*pcVar1)(param_1,local_23,local_22,local_28);
      return;
    }
    if (param_2 != -0x25c) {
      if (param_2 != -0x25b) {
        return;
      }
      if (*(int *)(param_3 + 2) < 1) {
        return;
      }
      local_40 = auStack_78;
      local_30 = FUN_00462650(local_20);
      pcVar1 = (code *)FUN_00411550(param_1,0xffb5);
      (*pcVar1)(param_1,&local_30);
      if ((*local_20 & 0x4000) == 0) {
        return;
      }
      **(undefined2 **)(local_20 + 4) = local_30;
      return;
    }
  }
  if (1 < *(int *)(param_3 + 2)) {
    local_40 = auStack_78;
    local_2e = FUN_00462650(local_20 + 0xc);
    local_28 = FUN_00462650(local_20);
    if (param_2 == -0x25c) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffb6);
      (*pcVar1)(param_1,&local_2e,*(undefined2 *)(&DAT_01ed783c + (longlong)(int)(local_28 & 7) * 2)
               );
    }
    else if (param_2 == -0x25a) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffb7);
      (*pcVar1)(param_1,&local_2e,*(undefined2 *)(&DAT_01ed783c + (longlong)(int)(local_28 & 7) * 2)
               );
    }
    if ((local_20[0xc] & 0x4000) != 0) {
      **(undefined2 **)(local_20 + 0x10) = local_2e;
    }
  }
  return;
}

