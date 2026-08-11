/* Ghidra address: 00525420 */
/* Ghidra symbol: FUN_00525420 */


uint FUN_00525420(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = param_2 + param_3 + 0xdeadbeef;
  local_1c = local_14;
  local_18 = local_14;
  if (((ulonglong)param_1 & 3) == 0) {
    for (; 0xc < param_2; param_2 = param_2 + -0xc) {
      local_1c = local_1c + param_1[2];
      uVar1 = (local_14 + *param_1) - local_1c ^ (local_1c * 0x10 | local_1c >> 0x1c);
      iVar2 = local_1c + local_18 + param_1[1];
      uVar3 = (local_18 + param_1[1]) - uVar1 ^ (uVar1 << 6 | uVar1 >> 0x1a);
      iVar4 = uVar1 + iVar2;
      uVar1 = iVar2 - uVar3 ^ (uVar3 << 8 | uVar3 >> 0x18);
      iVar2 = uVar3 + iVar4;
      local_14 = iVar4 - uVar1 ^ (uVar1 << 0x10 | uVar1 >> 0x10);
      iVar4 = uVar1 + iVar2;
      local_18 = iVar2 - local_14 ^ (local_14 << 0x13 | local_14 >> 0xd);
      local_14 = local_14 + iVar4;
      local_1c = iVar4 - local_18 ^ (local_18 << 4 | local_18 >> 0x1c);
      local_18 = local_18 + local_14;
      param_1 = param_1 + 3;
    }
    if (param_2 < 7) {
      if (param_2 == 6) {
        local_14 = local_14 + *param_1;
        local_18 = local_18 + (param_1[1] & 0xffff);
      }
      else if (param_2 < 4) {
        if (param_2 == 3) {
          local_14 = local_14 + (*param_1 & 0xffffff);
        }
        else {
          if (param_2 == 0) {
            return local_1c;
          }
          if (param_2 == 1) {
            local_14 = local_14 + (*param_1 & 0xff);
          }
          else if (param_2 == 2) {
            local_14 = local_14 + (*param_1 & 0xffff);
          }
        }
      }
      else if (param_2 == 4) {
        local_14 = local_14 + *param_1;
      }
      else if (param_2 == 5) {
        local_14 = local_14 + *param_1;
        local_18 = local_18 + (param_1[1] & 0xff);
      }
    }
    else if (param_2 < 0xb) {
      if (param_2 == 10) {
        local_14 = local_14 + *param_1;
        local_18 = local_18 + param_1[1];
        local_1c = local_1c + (param_1[2] & 0xffff);
      }
      else if (param_2 == 7) {
        local_14 = local_14 + *param_1;
        local_18 = local_18 + (param_1[1] & 0xffffff);
      }
      else if (param_2 == 8) {
        local_14 = local_14 + *param_1;
        local_18 = local_18 + param_1[1];
      }
      else if (param_2 == 9) {
        local_14 = local_14 + *param_1;
        local_18 = local_18 + param_1[1];
        local_1c = local_1c + (param_1[2] & 0xff);
      }
    }
    else if (param_2 == 0xb) {
      local_14 = local_14 + *param_1;
      local_18 = local_18 + param_1[1];
      local_1c = local_1c + (param_1[2] & 0xffffff);
    }
    else if (param_2 == 0xc) {
      local_14 = local_14 + *param_1;
      local_18 = local_18 + param_1[1];
      local_1c = local_1c + param_1[2];
    }
    goto LAB_005259a7;
  }
  for (; 0xc < param_2; param_2 = param_2 + -0xc) {
    iVar2 = local_18 +
            (uint)(byte)param_1[1] + (uint)*(byte *)((longlong)param_1 + 5) * 0x100 +
            (uint)*(byte *)((longlong)param_1 + 6) * 0x10000 +
            (uint)*(byte *)((longlong)param_1 + 7) * 0x1000000;
    local_1c = local_1c +
               (uint)(byte)param_1[2] + (uint)*(byte *)((longlong)param_1 + 9) * 0x100 +
               (uint)*(byte *)((longlong)param_1 + 10) * 0x10000 +
               (uint)*(byte *)((longlong)param_1 + 0xb) * 0x1000000;
    uVar1 = (local_14 +
            (uint)(byte)*param_1 + (uint)*(byte *)((longlong)param_1 + 1) * 0x100 +
            (uint)*(byte *)((longlong)param_1 + 2) * 0x10000 +
            (uint)*(byte *)((longlong)param_1 + 3) * 0x1000000) - local_1c ^
            (local_1c * 0x10 | local_1c >> 0x1c);
    iVar4 = local_1c + iVar2;
    uVar3 = iVar2 - uVar1 ^ (uVar1 << 6 | uVar1 >> 0x1a);
    iVar2 = uVar1 + iVar4;
    uVar1 = iVar4 - uVar3 ^ (uVar3 << 8 | uVar3 >> 0x18);
    iVar4 = uVar3 + iVar2;
    local_14 = iVar2 - uVar1 ^ (uVar1 << 0x10 | uVar1 >> 0x10);
    iVar2 = uVar1 + iVar4;
    local_18 = iVar4 - local_14 ^ (local_14 << 0x13 | local_14 >> 0xd);
    local_14 = local_14 + iVar2;
    local_1c = iVar2 - local_18 ^ (local_18 << 4 | local_18 >> 0x1c);
    local_18 = local_18 + local_14;
    param_1 = param_1 + 3;
  }
  if (param_2 < 7) {
    if (param_2 == 6) goto LAB_00525954;
    if (3 < param_2) {
      if (param_2 != 4) {
        if (param_2 != 5) {
LAB_005258fd:
          local_1c = local_1c + (uint)*(byte *)((longlong)param_1 + 0xb) * 0x1000000;
          goto LAB_0052590c;
        }
        goto LAB_00525963;
      }
      goto LAB_0052596f;
    }
    if (param_2 == 3) goto LAB_0052597e;
    if (param_2 == 0) {
      return local_1c;
    }
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_005258fd;
      goto LAB_0052598d;
    }
  }
  else {
    if (param_2 < 0xb) {
      if (param_2 == 10) goto LAB_0052591b;
      if (param_2 != 7) {
        if (param_2 != 8) {
          if (param_2 != 9) goto LAB_005258fd;
          goto LAB_0052592a;
        }
        goto LAB_00525936;
      }
    }
    else {
      if (param_2 != 0xb) goto LAB_005258fd;
LAB_0052590c:
      local_1c = local_1c + (uint)*(byte *)((longlong)param_1 + 10) * 0x10000;
LAB_0052591b:
      local_1c = local_1c + (uint)*(byte *)((longlong)param_1 + 9) * 0x100;
LAB_0052592a:
      local_1c = local_1c + (byte)param_1[2];
LAB_00525936:
      local_18 = local_18 + (uint)*(byte *)((longlong)param_1 + 7) * 0x1000000;
    }
    local_18 = local_18 + (uint)*(byte *)((longlong)param_1 + 6) * 0x10000;
LAB_00525954:
    local_18 = local_18 + (uint)*(byte *)((longlong)param_1 + 5) * 0x100;
LAB_00525963:
    local_18 = local_18 + (byte)param_1[1];
LAB_0052596f:
    local_14 = local_14 + (uint)*(byte *)((longlong)param_1 + 3) * 0x1000000;
LAB_0052597e:
    local_14 = local_14 + (uint)*(byte *)((longlong)param_1 + 2) * 0x10000;
LAB_0052598d:
    local_14 = local_14 + (uint)*(byte *)((longlong)param_1 + 1) * 0x100;
  }
  local_14 = local_14 + (byte)*param_1;
LAB_005259a7:
  uVar1 = (local_1c ^ local_18) - (local_18 << 0xe | local_18 >> 0x12);
  uVar3 = (local_14 ^ uVar1) - (uVar1 * 0x800 | uVar1 >> 0x15);
  uVar5 = (local_18 ^ uVar3) - (uVar3 * 0x2000000 | uVar3 >> 7);
  uVar1 = (uVar1 ^ uVar5) - (uVar5 * 0x10000 | uVar5 >> 0x10);
  uVar3 = (uVar3 ^ uVar1) - (uVar1 * 0x10 | uVar1 >> 0x1c);
  uVar3 = (uVar5 ^ uVar3) - (uVar3 * 0x4000 | uVar3 >> 0x12);
  return (uVar1 ^ uVar3) - (uVar3 * 0x1000000 | uVar3 >> 8);
}

