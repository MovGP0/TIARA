/* Ghidra address: 017c5f00 */
/* Ghidra symbol: FUN_017c5f00 */


undefined1
FUN_017c5f00(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined8 *param_4,char param_5,
            undefined1 *param_6,char param_7,longlong param_8)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int local_c0;
  undefined1 local_ba;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char *local_30;
  
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_ba = 0;
  bVar1 = false;
  *param_6 = 0;
  local_c0 = 0;
  *param_1 = 0;
  *param_2 = 0;
  *param_4 = 0;
  *param_3 = 1;
  cVar2 = FUN_01995420(param_8);
  if ((cVar2 == '\0') || (cVar2 = FUN_01995600(param_8,0,0), cVar2 == '\0')) {
LAB_017c69d0:
    FUN_00414560(&local_b8,0x11);
    return local_ba;
  }
  plVar5 = (longlong *)FUN_01995660(param_8,0,0);
LAB_017c69bb:
  while( true ) {
    if ((plVar5 == (longlong *)0x0) || (*PTR_DAT_02002ce0 != '\0')) goto LAB_017c69d0;
    local_c0 = local_c0 + 1;
    uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (!bVar1) {
      *param_4 = plVar5;
      uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5,0);
      *param_1 = uVar4;
      uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5);
      *param_2 = uVar4;
      if (uVar3 == 4) {
        *param_2 = 0;
      }
      else if (uVar3 == 0x66) {
        uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5);
        *param_1 = uVar4;
        uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5);
        *param_2 = uVar4;
      }
    }
    local_30 = (char *)FUN_01cfd6a0(plVar5);
    uVar6 = (ulonglong)uVar3;
    if (0x62 < uVar6) break;
    if (uVar6 == 0x62) {
LAB_017c67c0:
      FUN_01cfd270(plVar5,0,0);
      FUN_00b909d0(&local_30);
      if (*local_30 == '\0') {
        local_ba = 9;
        if (bVar1) {
          if (param_5 == '\0') {
            FUN_01b20020(&local_98,plVar5,&DAT_017c6a28);
            FUN_00416cd0(&local_90,3,local_38,&DAT_017c6a38,local_98);
            FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),
                         local_90);
          }
          else {
            *PTR_DAT_02002ce0 = 1;
          }
        }
        else {
          bVar1 = true;
          *param_3 = local_c0;
          FUN_01b20020(&local_38);
        }
      }
      goto LAB_017c6996;
    }
    if (0xe < uVar6) {
      if (uVar6 < 0x23) {
        if (uVar6 == 0x22) {
LAB_017c66f4:
          if (*local_30 == '\0') {
            local_ba = 8;
            if (bVar1) {
              if (param_5 == '\0') {
                FUN_01b20020(&local_88,plVar5,&DAT_017c6a28);
                FUN_00416cd0(&local_80,3,local_38,&DAT_017c6a38,local_88);
                FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),
                             local_80);
              }
              else {
                *PTR_DAT_02002ce0 = 1;
              }
            }
            else {
              bVar1 = true;
              *param_3 = local_c0;
              FUN_01b20020(&local_38);
            }
          }
        }
        else {
          if (uVar6 - 0xf < 2) goto LAB_017c63cc;
          if (uVar6 - 0xf == 0x12) goto LAB_017c6628;
        }
      }
      else {
        if (uVar6 == 0x3e) goto LAB_017c656f;
        if (uVar6 == 0x43) goto LAB_017c6258;
      }
      goto LAB_017c6996;
    }
    if (uVar6 < 9) {
      if (uVar6 == 8) goto LAB_017c67c0;
      if (uVar6 - 4 < 2) {
LAB_017c6628:
        if (*local_30 == '\0') {
          local_ba = 7;
          if (bVar1) {
            if (param_5 == '\0') {
              FUN_01b20020(&local_78,plVar5,&DAT_017c6a28);
              FUN_00416cd0(&local_70,3,local_38,&DAT_017c6a38,local_78);
              FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),
                           local_70);
            }
            else {
              *PTR_DAT_02002ce0 = 1;
            }
          }
          else {
            bVar1 = true;
            *param_3 = local_c0;
            FUN_01b20020(&local_38);
          }
        }
      }
      else if (uVar6 - 4 == 2) goto LAB_017c66f4;
      goto LAB_017c6996;
    }
    if (uVar6 == 9) goto LAB_017c68a8;
    if (1 < uVar6 - 0xd) goto LAB_017c6996;
LAB_017c6258:
    *param_6 = 1;
    FUN_01cfd270(plVar5,0,1);
    FUN_00b909d0(&local_30);
    if (*local_30 != '\0') goto LAB_017c6996;
    if (param_7 == '\v') {
      FUN_01995800(param_8,0,0);
      plVar5 = (longlong *)FUN_01995660(param_8,0,0);
    }
    else {
      if ((!(bool)(bVar1 & param_5 == '\0')) || (param_7 != '\x01')) {
        if (uVar3 == 0xd) {
          local_ba = 6;
        }
        else {
          local_ba = 4;
        }
        if (bVar1) {
          if (param_5 == '\0') {
            FUN_01b20020(&local_48,plVar5,&DAT_017c6a28);
            FUN_00416cd0(&local_40,3,local_38,&DAT_017c6a38,local_48);
            FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),
                         local_40);
          }
          else {
            *PTR_DAT_02002ce0 = 1;
          }
        }
        else {
          bVar1 = true;
          *param_3 = local_c0;
          FUN_01b20020(&local_38,plVar5,&DAT_017c6a28);
        }
        goto LAB_017c6996;
      }
      FUN_01995800(param_8,0,0);
      plVar5 = (longlong *)FUN_01995660(param_8,0,0);
    }
  }
  if (uVar6 < 0xa6) {
    if (uVar6 != 0x66) {
      if (uVar6 == 0x6b) goto LAB_017c68a8;
      if (uVar6 == 0x77) goto LAB_017c6628;
      if (uVar6 != 0xa4) goto LAB_017c6996;
    }
LAB_017c656f:
    local_ba = 3;
    if (bVar1) {
      if (param_5 == '\0') {
        FUN_01b20020(&local_68,plVar5,&DAT_017c6a28);
        FUN_00416cd0(&local_60,3,local_38,&DAT_017c6a38,local_68);
        FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),local_60);
      }
      else {
        *PTR_DAT_02002ce0 = 1;
      }
    }
    else {
      bVar1 = true;
      *param_3 = local_c0;
      FUN_01b20020(&local_38,plVar5,&DAT_017c6a28);
    }
  }
  else {
    if (uVar6 < 0xd3) {
      if (uVar6 != 0xd2) {
        if (uVar6 - 0xa6 < 2) goto LAB_017c63cc;
        if (uVar6 - 0xa6 != 0x22) goto LAB_017c6996;
      }
    }
    else {
      if (uVar6 - 0xd9 < 2) {
LAB_017c63cc:
        *param_6 = 1;
        if ((uVar3 == 0xa6) || (uVar3 == 0xa7)) {
          FUN_01cfd270(plVar5,0,1);
          FUN_00b909d0(&local_30);
        }
        else {
          FUN_01cfd270(plVar5,0,2);
          FUN_00b909d0(&local_30);
        }
        if (*local_30 == '\0') {
          if (param_7 == '\v') {
            FUN_01995800(param_8,0,0);
            plVar5 = (longlong *)FUN_01995660(param_8,0,0);
          }
          else {
            if ((!(bool)(bVar1 & param_5 == '\0')) || (param_7 != '\x01')) {
              if (uVar3 == 0xf) {
                local_ba = 5;
              }
              else {
                local_ba = 3;
              }
              if (bVar1) {
                if (param_5 == '\0') {
                  FUN_01b20020(&local_58,plVar5,&DAT_017c6a28);
                  FUN_00416cd0(&local_50,3,local_38,&DAT_017c6a38,local_58);
                  FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),
                               local_50);
                }
                else {
                  *PTR_DAT_02002ce0 = 1;
                }
              }
              else {
                bVar1 = true;
                *param_3 = local_c0;
                FUN_01b20020(&local_38,plVar5,&DAT_017c6a28);
              }
              goto LAB_017c6996;
            }
            FUN_01995800(param_8,0,0);
            plVar5 = (longlong *)FUN_01995660(param_8,0,0);
          }
          goto LAB_017c69bb;
        }
        goto LAB_017c6996;
      }
      if (uVar6 - 0xd9 != 3) goto LAB_017c6996;
    }
LAB_017c68a8:
    *param_6 = 1;
    if (param_7 == '\b') {
      FUN_0043e1a0(&local_a0,plVar5[0x13]);
      FUN_0043e1a0(&local_a8,L"LoopGainIn");
      cVar2 = FUN_005b8520(local_a0);
      if (cVar2 != '\0') {
        local_ba = 7;
        if (bVar1) {
          if (param_5 == '\0') {
            FUN_01b20020(&local_b8,plVar5,&DAT_017c6a28);
            FUN_00416cd0(&local_b0,3,local_38,&DAT_017c6a38,local_b8);
            FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(*(longlong *)(param_8 + 0x210) + 0x110),
                         local_b0);
          }
          else {
            *PTR_DAT_02002ce0 = 1;
          }
        }
        else {
          bVar1 = true;
          *param_3 = local_c0;
          FUN_01b20020(&local_38,plVar5,&DAT_017c6a28);
        }
      }
    }
  }
LAB_017c6996:
  FUN_01995800(param_8);
  plVar5 = (longlong *)FUN_01995660(param_8);
  goto LAB_017c69bb;
}

