/* Ghidra address: 00d7fd80 */
/* Ghidra symbol: FUN_00d7fd80 */


void FUN_00d7fd80(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  uint local_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_48 = *param_3;
  local_40 = param_3[1];
  local_38 = param_3[2];
  local_30 = param_3[3];
  FUN_004179d0(&local_48,&DAT_00d623c8);
  local_6c = 0;
  if ((local_30 & 0x200) != 0) {
    local_6c = 0x20000;
    if ((char)local_30 == '\0') {
      local_30 = CONCAT71(local_30._1_7_,6);
    }
    if ((char)local_30 == '\x01') {
      local_30 = CONCAT71(local_30._1_7_,7);
    }
    if ((char)local_30 == '\x02') {
      local_30 = CONCAT71(local_30._1_7_,8);
    }
  }
  if ((char)local_30 == '\x04') {
    local_6c = local_6c | 1;
  }
  if ((local_30 & 0x400) != 0) {
    local_6c = local_6c | 0x800;
  }
  if ((local_30 & 0x800) != 0) {
    local_6c = local_6c | 0x10;
  }
  if ((local_30 & 0x1000) != 0) {
    local_6c = local_6c | 0x20;
  }
  if ((local_30 & 0x2000) != 0) {
    local_6c = local_6c | 0x8000;
  }
  if ((local_30 & 0x4000) != 0) {
    local_6c = local_6c | 0x40;
  }
  if ((local_30 & 0x8000) != 0) {
    local_6c = local_6c | 0x40000;
  }
  bVar6 = local_30._2_1_ == 1;
  if (local_30._2_1_ < 8 && (1 << (local_30._2_1_ & 0x1f) & 6U) != 0) {
    uVar5 = local_30 & 0xff;
    if (uVar5 < 5) {
      if (uVar5 == 4) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00423010(local_68,local_48 & 0xffffffff,local_48._4_4_,local_40._4_4_,
                     (undefined4)local_40);
        FUN_00d57750(param_2,local_38,local_68,local_6c | 0x400);
        iVar1 = FUN_004230c0(local_68);
        local_50 = CONCAT44(local_50._4_4_,(int)local_58 + iVar1);
        iVar1 = FUN_004230a0(local_68);
        local_50 = CONCAT44(local_58._4_4_ + iVar1,(undefined4)local_50);
        iVar1 = FUN_004230a0(&local_48);
        iVar2 = FUN_004230c0(local_68);
        iVar3 = FUN_004230c0(&local_48);
        iVar4 = FUN_004230a0(local_68);
        FUN_00423b50(&local_58,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff,
                     (longlong)(iVar3 - iVar4) / 2 & 0xffffffff);
        FUN_00423b10(&local_58,0,2);
        FUN_00d577c0(param_2,local_38,&local_58,local_6c,bVar6);
      }
      else if (uVar5 == 0) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00d577c0(param_2,local_38,&local_58,local_6c,bVar6);
      }
      else if (uVar5 == 1) {
        local_58 = local_48;
        local_50 = local_40;
      }
      else if (uVar5 == 2) {
        local_58 = local_48;
        local_50 = local_40;
      }
      else if (uVar5 == 3) {
        local_58 = local_48;
        local_50 = local_40;
      }
    }
    else if (uVar5 == 5) {
      local_58 = local_48;
      local_50 = local_40;
    }
    else if (uVar5 == 6) {
      local_58 = local_48;
      local_50 = local_40;
    }
    else if (uVar5 == 7) {
      local_58 = local_48;
      local_50 = local_40;
    }
    else if (uVar5 == 8) {
      local_58 = local_48;
      local_50 = local_40;
    }
  }
  else {
    uVar5 = local_30 & 0xff;
    if (uVar5 < 5) {
      if (uVar5 == 4) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
        iVar1 = FUN_004230a0(&local_48);
        iVar2 = FUN_004230a0(&local_58);
        iVar3 = FUN_004230c0(&local_48);
        iVar4 = FUN_004230c0(&local_58);
        FUN_00423b50(&local_58,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff,
                     (longlong)(iVar3 - iVar4) / 2 & 0xffffffff);
        FUN_00d57750(param_2,local_38,&local_58,local_6c);
      }
      else if (uVar5 == 0) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00d57750(param_2,local_38,&local_58,local_6c);
      }
      else if (uVar5 == 1) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
        iVar1 = FUN_004230c0(&local_48);
        iVar2 = FUN_004230c0(&local_58);
        FUN_00423b50(&local_58,0,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff);
        FUN_00d57750(param_2,local_38,&local_58,local_6c);
      }
      else if (uVar5 == 2) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
        iVar1 = FUN_004230c0(&local_48);
        iVar2 = FUN_004230c0(&local_58);
        FUN_00423b50(&local_58,0,iVar1 - iVar2);
        FUN_00d57750(param_2,local_38,&local_58,local_6c);
      }
      else if (uVar5 == 3) {
        local_58 = local_48;
        local_50 = local_40;
        FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
        iVar1 = FUN_004230a0(&local_48);
        iVar2 = FUN_004230a0(&local_58);
        FUN_00423b50(&local_58,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff,0);
        FUN_00d57750(param_2,local_38,&local_58,local_6c);
      }
    }
    else if (uVar5 == 5) {
      local_58 = local_48;
      local_50 = local_40;
      FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
      iVar1 = FUN_004230a0(&local_48);
      iVar2 = FUN_004230a0(&local_58);
      iVar3 = FUN_004230c0(&local_48);
      iVar4 = FUN_004230c0(&local_58);
      FUN_00423b50(&local_58,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff,iVar3 - iVar4);
      FUN_00d57750(param_2,local_38,&local_58,local_6c);
    }
    else if (uVar5 == 6) {
      local_58 = local_48;
      local_50 = local_40;
      FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
      iVar1 = FUN_004230a0(&local_48);
      iVar2 = FUN_004230a0(&local_58);
      FUN_00423b50(&local_58,iVar1 - iVar2,0);
      FUN_00d57750(param_2,local_38,&local_58,local_6c);
    }
    else if (uVar5 == 7) {
      local_58 = local_48;
      local_50 = local_40;
      FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
      iVar1 = FUN_004230a0(&local_48);
      iVar2 = FUN_004230a0(&local_58);
      iVar3 = FUN_004230c0(&local_48);
      iVar4 = FUN_004230c0(&local_58);
      FUN_00423b50(&local_58,iVar1 - iVar2,(longlong)(iVar3 - iVar4) / 2 & 0xffffffff);
      FUN_00d57750(param_2,local_38,&local_58,local_6c);
    }
    else if (uVar5 == 8) {
      local_58 = local_48;
      local_50 = local_40;
      FUN_00d57750(param_2,local_38,&local_58,local_6c | 0x400);
      iVar1 = FUN_004230a0(&local_48);
      iVar2 = FUN_004230a0(&local_58);
      iVar3 = FUN_004230c0(&local_48);
      iVar4 = FUN_004230c0(&local_58);
      FUN_00423b50(&local_58,iVar1 - iVar2,iVar3 - iVar4);
      FUN_00d57750(param_2,local_38,&local_58,local_6c);
    }
  }
  FUN_00417740(&local_48,&DAT_00d623c8);
  return;
}

