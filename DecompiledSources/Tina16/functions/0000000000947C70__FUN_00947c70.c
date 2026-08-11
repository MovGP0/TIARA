/* Ghidra address: 00947c70 */
/* Ghidra symbol: FUN_00947c70 */


undefined8 FUN_00947c70(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  ulonglong local_90;
  undefined1 local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  ulonglong local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  short local_24;
  short local_22;
  longlong *local_20;
  
  local_60 = auStack_c8;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_38 = 0;
  FUN_00414520(param_1);
  local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_28 = 1;
  local_40 = 0;
  if (param_2 != (short *)0x0) {
    local_40 = *(uint *)(param_2 + -2) >> 1;
  }
  if ((local_40 != 0) && (*param_2 == DAT_01e32934)) {
    (**(code **)(*local_20 + 0x18))(local_20,DAT_01e32934);
    local_28 = local_28 + 1;
  }
  do {
    local_44 = 0;
    if (param_2 != (short *)0x0) {
      local_44 = *(uint *)(param_2 + -2) >> 1;
    }
    if ((int)local_44 < (int)local_28) {
      (**(code **)(*local_20 + 0x48))(local_20,param_1);
      FUN_00410f20(local_20);
      FUN_004145c0(&local_80,4);
      FUN_00414520(&local_38);
      return param_1;
    }
    local_22 = param_2[(longlong)(int)local_28 + -1];
    cVar2 = FUN_008f7640(local_22);
    if (cVar2 != '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,
                           L"WideString must not start with a UTF-16 low surrogate.");
      FUN_004134c0(uVar3);
    }
    cVar2 = FUN_008f7620(local_22);
    if (cVar2 != '\0') {
      local_48 = 0;
      if (param_2 != (short *)0x0) {
        local_48 = *(uint *)(param_2 + -2) >> 1;
      }
      if (local_28 == local_48) {
        uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,
                             L"WideString must not end with a UTF-16 high surrogate.");
        FUN_004134c0(uVar3);
      }
      local_28 = local_28 + 1;
      (**(code **)(*local_20 + 0x18))(local_20,local_22);
      local_22 = param_2[(longlong)(int)local_28 + -1];
      cVar2 = FUN_008f7640(local_22);
      if (cVar2 == '\0') {
        uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,
                             L"WideString contains an UTF-16 high surrogate without its corresponding low surrogate."
                            );
        FUN_004134c0(uVar3);
      }
    }
    sVar1 = local_22;
    cVar2 = FUN_008ff2d0(local_22);
    if (cVar2 == '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"WideString contains an invalid character.");
      FUN_004134c0(uVar3);
    }
    if (local_22 == 0x26) {
      local_30 = 0xffffffff;
      local_4c = local_28 + 1;
      local_50 = 0;
      if (param_2 != (short *)0x0) {
        local_50 = *(uint *)(param_2 + -2) >> 1;
      }
      local_2c = local_4c;
      if ((int)local_4c <= (int)local_50) {
        iVar4 = (local_50 - local_4c) + 1;
        do {
          local_24 = param_2[(longlong)(int)local_2c + -1];
          if (local_24 == 0x3b) {
            local_30 = local_2c;
            break;
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (local_30 == 0xffffffff) {
        uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"WideString contains an \'&\' without a \';\'.");
        FUN_004134c0(uVar3);
      }
      FUN_00416430(&local_38,param_2,local_28,(local_30 - local_28) + 1);
      cVar2 = FUN_008ffd10(local_38);
      if (cVar2 == '\0') {
        cVar2 = FUN_008ffae0(local_38);
        if (cVar2 == '\0') {
          local_90 = local_38;
          local_88 = 0xf;
          local_a8 = 0;
          uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,L"WideString contains an invalid reference %S.",
                               &local_90);
          FUN_004134c0(uVar3);
        }
        else {
          FUN_00948790(&local_80,local_38);
          (**(code **)(*local_20 + 0x28))(local_20,local_80);
        }
      }
      else {
        local_54 = 0;
        if (local_38 != 0) {
          local_54 = *(uint *)(local_38 - 4) >> 1;
        }
        FUN_00416430(&local_68,local_38,2,local_54 - 2);
        cVar2 = FUN_00900280(local_68);
        if (cVar2 == '\0') {
          (**(code **)(*local_20 + 0x28))(local_20,local_38);
        }
        else {
          local_58 = 0;
          if (local_38 != 0) {
            local_58 = *(uint *)(local_38 - 4) >> 1;
          }
          FUN_00416430(&local_78,local_38,2,local_58 - 2);
          FUN_00900340(&local_70,local_78);
          (**(code **)(*local_20 + 0x28))(local_20,local_70);
        }
      }
      local_28 = local_30;
    }
    else {
      (**(code **)(*local_20 + 0x18))(local_20,sVar1);
    }
    local_28 = local_28 + 1;
  } while( true );
}

