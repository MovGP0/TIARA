/* Ghidra address: 01446c90 */
/* Ghidra symbol: FUN_01446c90 */


void FUN_01446c90(ulonglong param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  bool bVar6;
  undefined1 auStack_238 [32];
  undefined *local_218;
  undefined8 local_210;
  undefined *local_208;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined8 local_160;
  double local_158;
  char *local_150;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [5];
  undefined8 local_20 [2];
  ulonglong uVar5;
  
  local_1e8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190[0] = 0;
  local_108 = (undefined2 *)0x0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_130 = 0;
  local_20[0] = 0;
  local_160 = 0;
  local_58 = 0;
  local_48[0] = 0;
  local_50 = 0;
  local_1f0 = param_1;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar2 = **(short **)(param_1 + 0x68) - 0x40;
    if (uVar2 < 0x40) {
      bVar6 = (1L << ((byte)uVar2 & 0x3f) & 0x7fffffe17fffffeU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      iVar3 = 0;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + -4);
      }
      if (*(short *)(*(longlong *)(param_1 + 0x68) + -2 + (longlong)iVar3 * 2) != 0x3d) {
        FUN_00416ad0(param_1 + 0x68,L"(t)=");
      }
      FUN_019b6e50(local_20,*(undefined8 *)(local_1f0 + 0x68),local_1f0);
      FUN_019b6e50(local_48,*(undefined8 *)(local_1f0 + 0x68),local_1f0);
      FUN_019b6e50(&local_50,*(undefined8 *)(local_1f0 + 0x68),local_1f0);
      goto LAB_01447021;
    }
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    if (*PTR_DAT_02002480 == '\x01') {
      FUN_004169a0(local_190,&DAT_01f4b62c);
      FUN_019b6e50(local_20,local_190[0],local_1f0);
      FUN_004169a0(&local_198,&DAT_01f4b638);
      FUN_019b6e50(local_48,local_198,local_1f0);
      FUN_004169a0(&local_1a0,&DAT_01f4b638);
      FUN_019b6e50(&local_50,local_1a0,local_1f0);
      FUN_004169a0(local_1f0 + 0x68,&DAT_01f4b62c);
    }
    else {
      FUN_004169a0(&local_1a8,&DAT_01f4b632);
      FUN_019b6e50(local_20,local_1a8,local_1f0);
      FUN_004169a0(&local_1b0,&DAT_01f4b63e);
      FUN_019b6e50(local_48,local_1b0,local_1f0);
      FUN_004169a0(&local_1b8,&DAT_01f4b63e);
      FUN_019b6e50(&local_50,local_1b8,local_1f0);
      FUN_004169a0(local_1f0 + 0x68,&DAT_01f4b632);
    }
  }
  else {
    FUN_004169a0(&local_1c0,&DAT_01f4b644);
    FUN_019b6e50(local_20,local_1c0,local_1f0);
    FUN_004169a0(&local_1c8,&DAT_01f4b64a);
    FUN_019b6e50(local_48,local_1c8,local_1f0);
    FUN_004169a0(&local_1d0,&DAT_01f4b64a);
    FUN_019b6e50(&local_50,local_1d0,local_1f0);
    FUN_004169a0(local_1f0 + 0x68,&DAT_01f4b644);
  }
LAB_01447021:
  FUN_019b6e50(&local_160,PTR_u_Additional_DC_level__01f4b650,local_1f0);
  FUN_01444a40(&local_120,&local_130,local_1f0);
  if (local_120 == 0.0) {
    FUN_00ef4260(0xb,local_1f0);
  }
  DAT_0210e4e0 = 0;
  local_158 = 0.0;
  local_100 = 0;
  if (*(longlong *)(local_1f0 + 8) == 0) {
    FUN_00ef4260(8,local_1f0);
  }
  else {
    local_150 = *(char **)(local_1f0 + 8);
    while ((local_150 != (char *)0x0 && (*(char *)(local_1f0 + 0x92) == '\0'))) {
      if ((byte)(*local_150 - 0xdU) < 4) {
        local_168 = *(undefined2 **)(local_150 + 0xa8);
        FUN_004169a0(&local_108,local_168 + 1);
        local_128 = *(undefined8 *)(local_168 + 0x24);
        iVar3 = 0;
        if (local_108 != (undefined2 *)0x0) {
          iVar3 = *(int *)(local_108 + -2);
        }
        if (1 < iVar3) {
          iVar3 = 0;
          if (local_108 != (undefined2 *)0x0) {
            iVar3 = *(int *)(local_108 + -2);
          }
          FUN_00416780(&local_1d8,*local_108);
          FUN_00416dc0(&local_1e0,local_108,2,iVar3 + -1);
          local_218 = &DAT_014474fc;
          local_210 = local_1e0;
          local_208 = &DAT_0144750c;
          FUN_00416cd0(&local_108,5,&DAT_014474e8,local_1d8);
        }
        *(char *)(local_1f0 + 0x50) = local_150[4];
        *(char *)(local_1f0 + 0x52) = local_150[8];
        if ((byte)(*local_150 - 8U) < 8) {
          bVar6 = ((int)CONCAT71((int7)((ulonglong)local_150 >> 8),1) << (*local_150 - 8U & 0x1f) &
                  0xa0U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          *(undefined1 *)(local_1f0 + 0x54) = 0;
        }
        else {
          *(undefined1 *)(local_1f0 + 0x54) = 1;
        }
        *(undefined2 *)(local_1f0 + 0x90) = *local_168;
        uVar5 = local_1f0;
        FUN_01446be0(auStack_238,local_1f0);
        if ((byte)(*local_150 - 8U) < 8) {
          bVar6 = ((int)CONCAT71((int7)((ulonglong)local_150 >> 8),1) << (*local_150 - 8U & 0x1f) &
                  0x60U) != 0;
        }
        else {
          bVar6 = false;
        }
        if ((bVar6) && (local_110 != 0.0)) {
LAB_014472b2:
          uVar5 = local_1f0;
          FUN_01446800(auStack_238,local_1f0);
        }
        else {
          if ((byte)(*local_150 - 8U) < 0x10) {
            uVar4 = (int)CONCAT62((int6)(uVar5 >> 0x10),1) << (*local_150 - 8U & 0x1f);
            uVar5 = (ulonglong)uVar4;
            bVar6 = (uVar4 & 0x180) != 0;
          }
          else {
            bVar6 = false;
          }
          if ((bVar6) && (local_118 != 0.0)) goto LAB_014472b2;
        }
        if ((byte)(*local_150 - 8U) < 0x10) {
          bVar6 = ((int)CONCAT62((int6)(uVar5 >> 0x10),1) << (*local_150 - 8U & 0x1f) & 0x180U) != 0
          ;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          bVar1 = *(byte *)(local_168 + 0x1c);
          if (((char)bVar1 < '\0') || (7 < bVar1)) {
            bVar6 = false;
          }
          else {
            bVar6 = ((int)CONCAT71((int7)((ulonglong)local_168 >> 8),1) << (bVar1 & 0x1f) & 0x90U)
                    != 0;
          }
          if (bVar6) {
            FUN_01445bc0(auStack_238,local_1f0);
          }
          else {
            FUN_00ef4260(0xb,local_1f0);
          }
        }
        if (*(char *)(local_1f0 + 0x92) != '\0') {
          FUN_00ef81f0(local_1f0 + 0x30);
          FUN_00ef81f0(local_1f0 + 0x38);
        }
      }
      local_150 = *(char **)(local_150 + 0xb0);
    }
    FUN_01444a00();
    if (local_158 != 0.0) {
      FUN_00efab30(&local_1e8,local_158,*(undefined2 *)(local_1f0 + 0xe98));
      FUN_019b6e50(&local_160,local_1e8,local_1f0);
    }
    FUN_01446970(auStack_238,local_1f0);
    FUN_019b6320(local_20);
    FUN_019b6320(&local_160);
    FUN_019b6320(&local_58);
    FUN_019b6320(local_48);
    FUN_019b6320(&local_50);
  }
  FUN_00414560(&local_1e8,0xc);
  FUN_00414560(&local_180,3);
  FUN_00414480(&local_130);
  FUN_00414480(&local_108);
  return;
}

