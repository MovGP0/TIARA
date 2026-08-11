/* Ghidra address: 01cf1c20 */
/* Ghidra symbol: FUN_01cf1c20 */


int FUN_01cf1c20(longlong *param_1,longlong param_2,uint param_3,byte param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  undefined7 uVar8;
  uint uVar9;
  bool bVar10;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  ushort *local_30 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_8c = 0;
  uVar7 = (ulonglong)param_3;
  (**(code **)(*param_1 + 0x2d0))(param_1,uVar7,local_30);
  uVar8 = (undefined7)(uVar7 >> 8);
  iVar3 = local_8c;
  if (param_4 < 0xc) {
    if (param_4 == 0xb) {
      uVar5 = FUN_01d31f80(*(undefined8 *)(local_30[0] + 4));
      iVar3 = (int)uVar5 + 2;
      if ((byte)local_30[0][0x20] < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)local_30[0][0x20] & 0x1f)
                 & 3U) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        iVar3 = iVar3 + (uint)local_30[0][8] * 8 + 2;
      }
      else {
        iVar4 = FUN_00414ce0(*(undefined8 *)(local_30[0] + 0x10));
        iVar3 = iVar3 + iVar4 + 3;
        if ((byte)local_30[0][0x20] == 3) {
          iVar3 = iVar3 + (uint)local_30[0][0x24] * 8 + 2;
        }
      }
    }
    else if (param_4 < 7) {
      uVar6 = (undefined7)((ulonglong)param_2 >> 8);
      if (param_4 == 6) {
        local_8c = 8;
        if (*(byte *)(param_2 + 0x78) < 8) {
          bVar10 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          local_8c = FUN_00414ce0(*(undefined8 *)(local_30[0] + 4));
          local_8c = local_8c + 0xb;
        }
        iVar3 = local_8c + 5;
        if ((byte)local_30[0][0xc] == 2) {
          iVar3 = local_8c + 0x18;
        }
      }
      else if (param_4 < 4) {
        if (param_4 == 3) {
          local_8c = 8;
          if (*(byte *)(param_2 + 0x78) < 8) {
            bVar10 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
          }
          else {
            bVar10 = false;
          }
          iVar3 = local_8c;
          if (bVar10) {
            iVar3 = FUN_00414ce0(*(undefined8 *)(local_30[0] + 4));
            iVar3 = iVar3 + 0xb;
          }
        }
        else if (param_4 == 1) {
          FUN_004169a0(local_40,local_30[0]);
          iVar3 = FUN_01d31350(local_40[0]);
        }
        else if (param_4 == 2) {
          iVar3 = 2;
        }
      }
      else if (param_4 == 4) {
        FUN_004169a0(&local_50,local_30[0]);
        iVar3 = FUN_01d31350(local_50);
        FUN_004169a0(&local_58,(byte *)((longlong)local_30[0] + 0x15));
        iVar4 = FUN_01d31350(local_58);
        local_8c = iVar3 + iVar4 + 1;
        if ((byte)local_30[0][0x17] == 1) {
          local_8c = iVar3 + iVar4 + 3 + (uint)*(ushort *)(*(longlong *)(local_30[0] + 0x13) + 0x23)
          ;
        }
        iVar3 = local_8c + 1;
      }
      else if (param_4 == 5) {
        bVar1 = (byte)*local_30[0];
        if (bVar1 == 8) {
          iVar3 = FUN_01d31f80(*(undefined8 *)((longlong)local_30[0] + 9));
          iVar3 = iVar3 + 0x11;
        }
        else if (bVar1 == 9) {
          iVar3 = FUN_01d31f80(*(undefined8 *)((longlong)local_30[0] + 0x11));
          iVar3 = iVar3 + 5;
        }
        else if (bVar1 == 10) {
          if (*(byte *)(param_2 + 0x78) < 8) {
            bVar10 = ((int)CONCAT71(uVar6,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            FUN_00415eb0(&local_60,*(undefined8 *)(local_30[0] + 1));
            iVar4 = FUN_01d31290(local_60);
          }
          else {
            FUN_004167d0(&local_70,*(undefined8 *)(local_30[0] + 1));
            FUN_00441920(&local_68,local_70);
            iVar4 = FUN_01d31350(local_68);
          }
          iVar3 = iVar4 + 10;
          if (*(longlong *)(local_30[0] + 7) != 0) {
            iVar3 = FUN_01d326b0(*(undefined8 *)(local_30[0] + 7));
            iVar3 = iVar4 + 0xe + iVar3;
          }
        }
        else if (bVar1 == 0xb) {
          local_8c = 0x13;
          iVar3 = local_8c;
        }
        else {
          local_8c = (uint)(byte)PTR_DAT_02001408[(ulonglong)bVar1 - 1] * 8 + 1;
          if (*(byte *)(param_2 + 0x78) < 8) {
            bVar10 = ((int)CONCAT71((uint7)(uint3)((uint)local_8c >> 8),1) <<
                      (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
          }
          else {
            bVar10 = false;
          }
          iVar3 = local_8c;
          if (bVar10) {
            uVar9 = (uint)(byte)PTR_DAT_02001408[(ulonglong)bVar1 - 1];
            iVar4 = 0;
            if (-1 < (int)(uVar9 - 1)) {
              do {
                iVar3 = FUN_00414ce0(*(undefined8 *)
                                      (*(longlong *)((longlong)local_30[0] + 9) +
                                      (longlong)iVar4 * 8));
                local_8c = local_8c + iVar3 + 3;
                iVar4 = iVar4 + 1;
                uVar9 = uVar9 - 1;
                iVar3 = local_8c;
              } while (uVar9 != 0);
            }
          }
        }
      }
    }
    else if (param_4 == 7) {
      FUN_004169a0(&local_78,local_30[0]);
      iVar3 = FUN_01d31350(local_78);
      FUN_004169a0(&local_80,(byte *)((longlong)local_30[0] + 0x15));
      iVar4 = FUN_01d31350(local_80);
      local_8c = iVar3 + iVar4 + 1;
      if ((byte)local_30[0][0x17] == 1) {
        local_8c = iVar3 + iVar4 + 3 + (uint)*(ushort *)(*(longlong *)(local_30[0] + 0x13) + 0x23);
      }
      local_8c = local_8c + 1;
      if (*(byte *)((longlong)local_30[0] + 0x2f) != 0) {
        iVar3 = FUN_01d31f80(*(undefined8 *)(local_30[0] + 0x18));
        FUN_004169a0(&local_88,local_30[0] + 0x1c);
        iVar4 = FUN_01d31350(local_88);
        local_8c = local_8c + iVar3 + iVar4;
      }
      iVar3 = local_8c + 1;
      if ((*(longlong *)(local_30[0] + 0xa0) != 0) &&
         (iVar3 = local_8c + 2, (byte)local_30[0][0xa4] == 1)) {
        iVar3 = local_8c + 2 + (uint)*(ushort *)(*(longlong *)(local_30[0] + 0xa0) + 0x1a);
      }
    }
    else if (param_4 == 8) {
      local_8c = 1;
      iVar3 = local_8c;
    }
    else if (param_4 == 9) {
      FUN_004169a0(&local_48,local_30[0]);
      iVar3 = FUN_01d31350(local_48);
    }
    else if (param_4 == 10) {
      local_8c = 5;
      if ((byte)*local_30[0] == 1) {
        iVar3 = *(int *)(*(longlong *)(local_30[0] + 4) + 0x10) * 9 + 9;
      }
      else {
        iVar3 = local_8c;
        if ((byte)*local_30[0] == 2) {
          uVar2 = FUN_00ef4060(*(undefined8 *)(local_30[0] + 8));
          iVar3 = uVar2 + 5;
        }
      }
    }
  }
  else if (param_4 < 0x11) {
    if (param_4 == 0x10) {
      local_8c = 8;
      iVar3 = local_8c;
    }
    else if (param_4 == 0xc) {
      iVar3 = (uint)*local_30[0] * 2 + 4;
    }
    else if (param_4 == 0xd) {
      local_8c = 9;
      if (*(byte *)(param_2 + 0x78) < 8) {
        bVar10 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar10 = false;
      }
      iVar3 = local_8c;
      if (bVar10) {
        iVar3 = FUN_00414ce0(*(undefined8 *)(local_30[0] + 8));
        iVar3 = iVar3 + 0xc;
      }
    }
    else if (param_4 == 0xe) {
      iVar3 = *(int *)(*(longlong *)(local_30[0] + 4) + 0x10) * 4 +
              *(int *)(*(longlong *)(local_30[0] + 8) + 0x10) * 4 + 3;
    }
    else if (param_4 == 0xf) {
      iVar3 = *(int *)(*(longlong *)(local_30[0] + 8) + 0x10) * 0x18 + 0x12;
    }
  }
  else if (param_4 == 0x11) {
    iVar3 = FUN_01d31f80(*(undefined8 *)local_30[0]);
  }
  else if (param_4 == 0x12) {
    iVar3 = (uint)*local_30[0] * 2 + 0x31;
  }
  else if (param_4 == 0x13) {
    local_8c = 0xc;
    iVar3 = local_8c;
  }
  else if (param_4 == 0x14) {
    iVar3 = *(int *)local_30[0] * 4 + 0x45;
  }
  local_8c = iVar3;
  FUN_00414560(&local_88,5);
  FUN_00414520(&local_60);
  FUN_00414560(&local_58,4);
  return local_8c;
}

