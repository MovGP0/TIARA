/* Ghidra address: 004106c0 */
/* Ghidra symbol: FUN_004106c0 */


ulonglong FUN_004106c0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined8 unaff_retaddr;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  int local_1c;
  
  bVar4 = (longlong)param_1 < 0;
  if (bVar4) {
    param_1 = -param_1;
  }
  if ((longlong)param_2 < 0) {
    param_2 = -param_2;
    bVar4 = !bVar4;
  }
  local_1c = 0;
  if (param_2 == 0) {
    FUN_00409880(7,unaff_retaddr);
    local_28 = 0x7ff0000000000000;
    if (bVar4) {
      local_28 = 0xfff0000000000000;
    }
    local_30 = local_28;
  }
  else if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    if ((param_1 & 0xffffffff00000000) == 0) {
      param_1 = param_1 << 0x20;
      local_1c = -0x20;
    }
    if ((param_1 & 0xffff000000000000) == 0) {
      param_1 = param_1 << 0x10;
      local_1c = local_1c + -0x10;
    }
    if ((param_1 & 0xff00000000000000) == 0) {
      param_1 = param_1 << 8;
      local_1c = local_1c + -8;
    }
    for (; (param_1 & 0x8000000000000000) == 0; param_1 = param_1 * 2) {
      local_1c = local_1c + -1;
    }
    if ((param_2 & 0xffffffff00000000) == 0) {
      param_2 = param_2 << 0x20;
      local_1c = local_1c + 0x20;
    }
    if ((param_2 & 0xffff000000000000) == 0) {
      param_2 = param_2 << 0x10;
      local_1c = local_1c + 0x10;
    }
    if ((param_2 & 0xff00000000000000) == 0) {
      param_2 = param_2 << 8;
      local_1c = local_1c + 8;
    }
    for (; (param_2 & 0x8000000000000000) == 0; param_2 = param_2 * 2) {
      local_1c = local_1c + 1;
    }
    if (param_1 == param_2) {
      local_28 = 0x8000000000000000;
      local_1c = local_1c + 1;
    }
    else {
      if (param_2 <= param_1) {
        param_1 = param_1 >> 1;
        local_1c = local_1c + 1;
      }
      param_2 = param_2 >> 1;
      lVar2 = param_1 - param_2;
      local_28 = 0;
      iVar3 = 0x40;
      do {
        local_28 = local_28 * 2;
        param_2 = param_2 >> 1;
        uVar1 = param_2;
        if (-1 < lVar2) {
          local_28 = local_28 + 1;
          uVar1 = -param_2;
        }
        lVar2 = lVar2 + uVar1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_28 == 0) {
      if (bVar4) {
        local_28 = 0x8000000000000000;
      }
    }
    else {
      for (; (local_28 & 0x8000000000000000) == 0; local_28 = local_28 << 1) {
        local_1c = local_1c + -1;
      }
      FUN_00410610(auStack_58);
      iVar3 = local_1c + 0x3fe;
      if (bVar4) {
        iVar3 = local_1c + 0xbfe;
      }
      local_1c = iVar3;
      local_28 = local_28 >> 0xb & 0xfffffffffffff | (longlong)local_1c << 0x34;
    }
    local_30 = local_28;
  }
  return local_30;
}

