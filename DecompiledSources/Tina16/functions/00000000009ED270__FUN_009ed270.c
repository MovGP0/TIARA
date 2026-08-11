/* Ghidra address: 009ed270 */
/* Ghidra symbol: FUN_009ed270 */


void FUN_009ed270(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  char *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined2 *local_20;
  
  local_80 = auStack_a8;
  DAT_0201335c = DAT_0201335c + -1;
  if (DAT_0201335c != -1) {
    return;
  }
  DAT_02013368 = thunk_FUN_040ef593(0);
  cVar1 = thunk_FUN_03e5bd07(DAT_02013368,0xc);
  cVar2 = thunk_FUN_03e5bd07(DAT_02013368,0xe);
  if ((byte)(cVar1 * cVar2) < 5) {
    DAT_0201334e = 4;
  }
  else if ((byte)(cVar1 * cVar2) < 9) {
    DAT_0201334e = 8;
  }
  else {
    DAT_0201334e = 0x18;
  }
  DAT_02013350 = 0;
  if (DAT_0201334e == 8) {
    local_38 = (undefined2 *)FUN_004095c0(0x408);
    *local_38 = 0x300;
    local_38[1] = 0x100;
    local_20 = local_38;
    thunk_FUN_041f459c(DAT_02013368,0,0x100,local_38 + 2);
    local_30 = 10;
    local_24 = 0;
    local_60 = &DAT_01e44270;
    do {
      local_28 = 0;
      local_68 = &DAT_01e44270;
      do {
        local_2c = 0;
        local_70 = &DAT_01e44270;
        do {
          if (((local_24 != 5) || (local_28 != 5)) || (local_2c != 5)) {
            local_40 = local_38 + (longlong)local_30 * 2 + 2;
            *(undefined1 *)(local_40 + 1) = *local_60;
            *(undefined1 *)((longlong)local_40 + 1) = *local_68;
            *(undefined1 *)local_40 = *local_70;
            *(undefined1 *)((longlong)local_40 + 3) = 0;
            local_30 = local_30 + 1;
          }
          local_2c = local_2c + 1;
          local_70 = local_70 + 4;
        } while (local_2c != 6);
        local_28 = local_28 + 1;
        local_68 = local_68 + 4;
      } while (local_28 != 6);
      local_24 = local_24 + 1;
      local_60 = local_60 + 4;
    } while (local_24 != 6);
    local_24 = 1;
    do {
      if (0x1f < local_24 || (1 << ((byte)local_24 & 0x1f) & 0x208080U) == 0) {
        local_48 = (char *)(local_38 + (longlong)local_30 * 2 + 2);
        cVar1 = (byte)local_24 * '\x05' + -0x7e;
        local_48[2] = cVar1;
        local_48[1] = cVar1;
        *local_48 = cVar1;
        local_48[3] = '\0';
        local_30 = local_30 + 1;
      }
      local_24 = local_24 + 1;
    } while (local_24 != 0x19);
    local_30 = 0xf5;
    local_50 = local_38 + 0x1ec;
    *(undefined1 *)(local_38 + 0x1ed) = 0xfe;
    *(undefined1 *)((longlong)local_38 + 0x3d9) = 0xff;
    *(undefined1 *)local_50 = 0xff;
    *(undefined1 *)((longlong)local_38 + 0x3db) = 0;
    local_58 = local_20;
    DAT_02013350 = thunk_FUN_04123694(local_20);
    FUN_004095f0(local_20);
  }
  if (DAT_0201334e < 9) {
    DAT_02013358 = 0x2000000;
  }
  else {
    DAT_02013358 = 0;
  }
  uVar5 = DAT_02013368;
  thunk_FUN_041a9b5c(0,DAT_02013368);
  iVar3 = FUN_0044f060();
  if (iVar3 == 1) {
    uVar4 = FUN_0044f0a0();
    if (uVar4 < 0x10) {
      bVar6 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << ((byte)uVar4 & 0x1f) & 0x3ffU)
              != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      DAT_0201334c = 1;
      goto LAB_009ed58f;
    }
  }
  DAT_0201334c = 0;
LAB_009ed58f:
  iVar3 = FUN_0044f060();
  DAT_0201334d = iVar3 == 1;
  return;
}

