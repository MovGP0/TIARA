/* Ghidra address: 009e8d10 */
/* Ghidra symbol: FUN_009e8d10 */


void FUN_009e8d10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_4c;
  longlong local_48;
  uint local_3c;
  undefined8 local_38;
  short *local_30;
  short *local_28;
  short *local_20;
  
  local_60 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  FUN_009e76c0(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  local_20 = (short *)FUN_00415f70(param_2);
  if (local_20 != (short *)0x0) {
    FUN_009e94f0(param_1,&local_68);
    iVar2 = FUN_0043e8e0(local_68,&DAT_009e8fd0);
    if (iVar2 == 0) {
      while (*local_20 != 0) {
        local_28 = local_20;
        while (cVar1 = FUN_00711c60(*local_20,&DAT_009e8fd6), cVar1 == '\0') {
          local_20 = local_20 + 1;
        }
        FUN_004147a0(&local_38,local_28,((longlong)local_20 - (longlong)local_28) / 2 & 0xffffffff);
        (**(code **)(*param_1 + 0x70))(param_1,local_38);
        if (*local_20 == 0xd) {
          local_20 = local_20 + 1;
        }
        if (*local_20 == 10) {
          local_20 = local_20 + 1;
        }
      }
    }
    else {
      FUN_009e94f0(param_1,&local_70);
      local_48 = local_70;
      local_4c = 0;
      if (local_70 != 0) {
        local_4c = *(uint *)(local_70 + -4) >> 1;
      }
      local_3c = local_4c;
      while (*local_20 != 0) {
        local_28 = local_20;
        FUN_009e94f0(param_1,&local_78);
        uVar3 = FUN_00415f70(local_78);
        local_30 = (short *)FUN_0044fe40(local_20,uVar3);
        for (; (*local_20 != 0 && (local_20 != local_30)); local_20 = local_20 + 1) {
        }
        FUN_004147a0(&local_38,local_28,((longlong)local_20 - (longlong)local_28) / 2 & 0xffffffff);
        (**(code **)(*param_1 + 0x70))(param_1,local_38);
        if (local_20 == local_30) {
          local_20 = local_20 + (int)local_3c;
        }
      }
    }
  }
  FUN_009e77f0(param_1);
  FUN_004145c0(&local_78,3);
  FUN_00414520(&local_38);
  return;
}

