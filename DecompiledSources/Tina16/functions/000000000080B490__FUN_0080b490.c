/* Ghidra address: 0080b490 */
/* Ghidra symbol: FUN_0080b490 */


void FUN_0080b490(longlong param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  
  local_e0 = auStack_108;
  param_2[6] = 0;
  param_2[7] = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x10);
  local_2c = 0;
  puVar1 = auStack_108;
  if (-1 < iVar7 + -1) {
    do {
      local_e0 = puVar1;
      puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x160),local_2c);
      cVar2 = (*(code *)*puVar4)(puVar4[1],param_2);
      if (cVar2 != '\0') {
        return;
      }
      local_2c = local_2c + 1;
      iVar7 = iVar7 + -1;
      puVar1 = local_e0;
    } while (iVar7 != 0);
  }
  FUN_0080b170(param_1,param_2);
  iVar7 = *param_2;
  if (iVar7 < 0x113) {
    if (iVar7 == 0x112) {
      uVar3 = (uint)*(undefined8 *)(param_2 + 2) & 0xfff0;
      if (uVar3 == 0xf020) {
        FUN_0080bf50(param_1);
        return;
      }
      if (uVar3 == 0xf120) {
        FUN_0080c0e0(param_1);
        return;
      }
      FUN_0080b3d0(auStack_108);
      return;
    }
    if (iVar7 < 0x15) {
      if (iVar7 == 0x14) {
        *param_2 = 0x27;
        FUN_0080b3d0(auStack_108);
        return;
      }
      if (iVar7 < 0xb) {
        if (iVar7 == 10) {
          local_a0 = *(undefined8 *)param_2;
          local_98 = *(undefined8 *)(param_2 + 2);
          uStack_90 = *(undefined8 *)(param_2 + 4);
          uStack_88 = *(undefined8 *)(param_2 + 6);
          if ((int)local_98 != 0) {
            if (DAT_01e14008 == '\0') {
              FUN_0080ac80(param_1);
              if (*(longlong *)(param_1 + 0x168) != 0) {
                FUN_007f95c0(*(longlong *)(param_1 + 0x168));
                *(undefined8 *)(param_1 + 0x168) = 0;
              }
            }
            FUN_0080b3d0(auStack_108);
            return;
          }
          FUN_0080b3d0(auStack_108);
          if ((*(longlong *)(param_1 + 0x168) == 0) && (DAT_01e14008 == '\0')) {
            uVar5 = FUN_007f94c0(*(undefined8 *)(param_1 + 0x2d0));
            *(undefined8 *)(param_1 + 0x168) = uVar5;
          }
          FUN_0080abf0(param_1);
          return;
        }
        if (iVar7 == 0) {
          FUN_004d0700(0);
          return;
        }
        if (iVar7 == 5) {
          if (*(longlong *)(param_2 + 2) != 1) {
            return;
          }
          *(undefined1 *)(param_1 + 0x78) = 1;
          return;
        }
        if (iVar7 == 7) {
          thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x2d0),0xb01a,0,0);
          FUN_0080b3d0(auStack_108);
          return;
        }
      }
      else {
        if (iVar7 == 0xf) {
          iVar7 = FUN_007f9220(*(undefined8 *)(param_1 + 0x2d0));
          if (iVar7 != 0) {
            FUN_0080b420(auStack_108);
            return;
          }
          FUN_0080b3d0(auStack_108);
          return;
        }
        if (iVar7 == 0x10) {
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            return;
          }
          FUN_00805200(*(longlong *)(param_1 + 0xa8));
          return;
        }
        if (iVar7 == 0x11) {
          param_2[6] = 1;
          param_2[7] = 0;
          return;
        }
      }
    }
    else if (iVar7 < 0x1e) {
      if (iVar7 == 0x1d) {
        FUN_00809600(DAT_02012670);
        FUN_0080b3d0(auStack_108);
        return;
      }
      if (iVar7 == 0x16) {
        local_c0 = *(undefined8 *)param_2;
        local_b8 = *(undefined8 *)(param_2 + 2);
        uStack_b0 = *(undefined8 *)(param_2 + 4);
        local_a8 = 0;
        if ((*(longlong *)(param_1 + 0xa8) != 0) &&
           (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x4d2) == '\x01')) {
          FUN_0080e110(param_1,0x16,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        }
        if ((int)local_b8 == 0) {
          return;
        }
        FUN_0080d170(DAT_02012668);
        FUN_00413fb0();
        return;
      }
      if (iVar7 == 0x1a) {
        FUN_00664ed0(*(undefined8 *)PTR_DAT_020054d8,param_2[2]);
        FUN_0080b250(param_1,param_2);
        FUN_0080b3d0(auStack_108);
        return;
      }
      if (iVar7 == 0x1c) {
        FUN_0080b3d0(auStack_108);
        local_80 = *(undefined8 *)param_2;
        local_78 = *(undefined8 *)(param_2 + 2);
        uStack_70 = *(undefined8 *)(param_2 + 4);
        uStack_68 = *(undefined8 *)(param_2 + 6);
        *(bool *)(param_1 + 0x149) = (int)local_78 != 0;
        if ((int)local_78 != 0) {
          if ((*(char *)(param_1 + 0x193) != '\0') && (*(char *)(param_1 + 0x78) != '\0')) {
            *(undefined1 *)(param_1 + 0x78) = 0;
          }
          FUN_0080ac80(param_1);
          thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x2d0),0xb000,0,0);
          return;
        }
        FUN_0080abe0(param_1);
        thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x2d0),0xb001,0,0);
        return;
      }
    }
    else {
      if (iVar7 == 0x37) {
        uVar5 = FUN_0080bf20(param_1);
        *(undefined8 *)(param_2 + 6) = uVar5;
        return;
      }
      if (iVar7 == 0x53) {
LAB_0080bcf7:
        FUN_0080d760(param_1,(short)param_2[2],*(undefined8 *)(param_2 + 4));
        return;
      }
    }
  }
  else if (iVar7 < 0xb018) {
    if (iVar7 == 0xb017) {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        return;
      }
      local_d0 = *(undefined8 *)(param_1 + 0xa8);
      lVar6 = FUN_0065b870(local_d0);
      if (lVar6 == 0) {
        return;
      }
      uVar5 = FUN_0065b870(local_d0);
      iVar7 = thunk_FUN_03986dbd(uVar5);
      if (iVar7 == 0) {
        return;
      }
      uVar5 = FUN_0065b870(local_d0);
      iVar7 = thunk_FUN_0419e3da(uVar5);
      if (iVar7 == 0) {
        return;
      }
      DAT_01e13fb8 = 0;
      local_58 = thunk_FUN_041da4fa();
      uVar5 = FUN_0065b870(local_d0);
      thunk_FUN_03c244fb(uVar5);
      FUN_0064fca0(local_d0,0x112,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      thunk_FUN_03c244fb(local_58);
      DAT_01e13fb8 = 1;
      param_2[6] = 1;
      param_2[7] = 0;
      return;
    }
    if (iVar7 < 0xb001) {
      if (iVar7 == 0xb000) {
        if (*(longlong *)(param_1 + 0x270) != 0) {
          (**(code **)(param_1 + 0x270))(*(undefined8 *)(param_1 + 0x278),param_1);
        }
        if ((*(longlong *)(DAT_02012668 + 0xa8) != 0) && (*(char *)(DAT_02012668 + 0x193) != '\0'))
        {
          uVar5 = FUN_0065b870(*(longlong *)(DAT_02012668 + 0xa8));
          iVar7 = thunk_FUN_03986dbd(uVar5);
          if ((iVar7 == 0) &&
             (lVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8)),
             *(longlong *)(param_1 + 0x198) != lVar6)) {
            thunk_FUN_03c244fb(*(undefined8 *)(param_1 + 0x198));
          }
        }
        *(undefined8 *)(param_1 + 0x198) = 0;
        return;
      }
      if (iVar7 - 0x132U < 7) {
        uVar5 = thunk_FUN_041b2403(*(undefined8 *)(param_2 + 4),iVar7 + 0xbc00,
                                   *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar5;
        return;
      }
      if (iVar7 == 0x2b1) {
        FUN_00809c40(DAT_02012670);
        return;
      }
      if (iVar7 == 0x31a) {
        uVar5 = FUN_00781840();
        FUN_00778ba0(uVar5);
        local_50[0] = 0xb051;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        iVar7 = FUN_00808090();
        local_2c = 0;
        if (iVar7 + -1 < 0) {
          return;
        }
        do {
          uVar5 = FUN_00808070(DAT_02012670,local_2c);
          FUN_00654c30(uVar5,local_50);
          local_2c = local_2c + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return;
      }
    }
    else {
      if (iVar7 == 0xb001) {
        uVar5 = thunk_FUN_041620f3(*(undefined8 *)(param_1 + 0x2d0));
        *(undefined8 *)(param_1 + 0x198) = uVar5;
        if (*(longlong *)(param_1 + 0x260) == 0) {
          return;
        }
        (**(code **)(param_1 + 0x260))(*(undefined8 *)(param_1 + 0x268),param_1);
        return;
      }
      if (iVar7 == 0xb016) {
        cVar2 = FUN_0080c960(param_1,param_2);
        if (cVar2 == '\0') {
          return;
        }
        param_2[6] = 1;
        param_2[7] = 0;
        return;
      }
    }
  }
  else if (iVar7 < 0xb032) {
    if (iVar7 == 0xb031) {
      if (*(longlong *)(param_2 + 2) == 1) {
        *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0x170);
        return;
      }
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 4);
      return;
    }
    if (iVar7 == 0xb01a) {
      iVar7 = FUN_007f9220(*(undefined8 *)(param_1 + 0x2d0));
      if (iVar7 != 0) {
        return;
      }
      lVar6 = thunk_FUN_041da4fa();
      if (lVar6 != *(longlong *)(param_1 + 0x2d0)) {
        return;
      }
      local_60 = FUN_007f9690(0);
      if (local_60 == 0) {
        return;
      }
      thunk_FUN_03c244fb(local_60);
      return;
    }
    if (iVar7 == 0xb01f) goto LAB_0080bcf7;
    if (iVar7 == 0xb020) {
      if (*(longlong *)(param_2 + 2) == 0) {
        FUN_0080ccd0(param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
      FUN_0080cd50(param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  else {
    if (iVar7 - 0xb03fU < 2) {
      cVar2 = FUN_0080f500(param_1,iVar7,*(undefined8 *)(param_2 + 4));
      *(longlong *)(param_2 + 6) = (longlong)cVar2;
      return;
    }
    if (iVar7 == 0xb056) {
      FUN_0080e110(param_1,0xb056,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  FUN_0080b3d0(auStack_108);
  return;
}

