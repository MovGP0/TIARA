/* Ghidra address: 017c6ab0 */
/* Ghidra symbol: FUN_017c6ab0 */


undefined1
FUN_017c6ab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            int *param_5,undefined8 *param_6,char *param_7,char param_8,undefined8 param_9,
            longlong param_10,undefined4 param_11,int *param_12,char *param_13)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 local_5d;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_3a;
  undefined1 local_39;
  char *local_38;
  undefined1 local_29;
  
  local_50[0] = 0;
  local_58 = 0;
  local_5d = 0;
  *param_7 = '\0';
  bVar14 = false;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_6 = 0;
  cVar1 = FUN_01995420(param_9);
  if (cVar1 == '\0') goto LAB_017c7598;
  plVar9 = (longlong *)FUN_01995660(param_9,0,4);
LAB_017c7574:
  do {
    if ((plVar9 == (longlong *)0x0) || (bVar14)) goto LAB_017c7586;
    *param_12 = *param_12 + 1;
    *param_6 = plVar9;
    uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
    *param_1 = uVar4;
    uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,1);
    *param_2 = uVar4;
    iVar5 = (**(code **)(*plVar9 + 0x220))(plVar9,0);
    iVar6 = (**(code **)(*plVar9 + 0x220))(plVar9);
    *param_3 = 0;
    *param_4 = 0;
    if (uVar3 == 4) {
      *param_2 = 0;
      goto LAB_017c7094;
    }
    if (uVar3 == 0x3e) {
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,2);
      *param_1 = uVar4;
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,3);
      *param_2 = uVar4;
      iVar5 = (**(code **)(*plVar9 + 0x220))(plVar9,2);
      iVar6 = (**(code **)(*plVar9 + 0x220))(plVar9);
      if (iVar5 != iVar6) {
        *param_1 = 0;
        *param_2 = 0;
      }
      goto LAB_017c7094;
    }
    if (uVar3 == 0x66) {
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,1);
      *param_1 = uVar4;
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
      *param_2 = uVar4;
      iVar5 = (**(code **)(*plVar9 + 0x220))(plVar9);
      iVar6 = (**(code **)(*plVar9 + 0x220))(plVar9);
      if (iVar5 != iVar6) {
        *param_1 = 0;
        *param_2 = 0;
      }
      goto LAB_017c7094;
    }
    if (uVar3 == 0x3d) {
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,2);
      *param_3 = uVar4;
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,3);
      *param_4 = uVar4;
      iVar7 = (**(code **)(*plVar9 + 0x220))(plVar9,2);
      iVar8 = (**(code **)(*plVar9 + 0x220))(plVar9);
      if (iVar5 != iVar6) {
        *param_1 = 0;
        *param_2 = 0;
      }
      if (iVar7 != iVar8) {
        *param_3 = 0;
        *param_4 = 0;
      }
      goto LAB_017c7094;
    }
    if (uVar3 == 0x65) {
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,1);
      *param_1 = uVar4;
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
      *param_2 = uVar4;
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,2);
      *param_3 = uVar4;
      uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
      *param_4 = uVar4;
      iVar5 = (**(code **)(*plVar9 + 0x220))(plVar9,1);
      iVar6 = (**(code **)(*plVar9 + 0x220))(plVar9,0);
      iVar7 = (**(code **)(*plVar9 + 0x220))(plVar9);
      iVar8 = (**(code **)(*plVar9 + 0x220))(plVar9);
      if (iVar5 != iVar6) {
        *param_1 = 0;
        *param_2 = 0;
      }
      if (iVar7 != iVar8) {
        *param_3 = 0;
        *param_4 = 0;
      }
      goto LAB_017c7094;
    }
    if (uVar3 != 100) {
      if (uVar3 == 0xa4) {
        pcVar10 = (char *)FUN_01cfde70(plVar9,4,0,&local_39,&local_3a,&local_29);
        if (*pcVar10 == '\0') {
          uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,6);
          *param_1 = uVar4;
          uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,2);
          *param_2 = uVar4;
          uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,7);
          *param_3 = uVar4;
          uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,2);
          *param_4 = uVar4;
          iVar5 = (**(code **)(*plVar9 + 0x220))(plVar9,6);
          iVar6 = (**(code **)(*plVar9 + 0x220))(plVar9,2);
          iVar7 = (**(code **)(*plVar9 + 0x220))(plVar9,7);
          iVar8 = (**(code **)(*plVar9 + 0x220))(plVar9);
          if (iVar5 != iVar6) {
            *param_1 = 0;
            *param_2 = 0;
          }
          if (iVar7 != iVar8) {
            *param_3 = 0;
            *param_4 = 0;
          }
        }
        else {
          uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,10);
          *param_1 = uVar4;
          uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,0xb);
          *param_2 = uVar4;
          iVar5 = (**(code **)(*plVar9 + 0x220))(plVar9,10);
          iVar6 = (**(code **)(*plVar9 + 0x220))(plVar9);
          if (iVar5 != iVar6) {
            *param_1 = 0;
            *param_2 = 0;
          }
        }
      }
      goto LAB_017c7094;
    }
  } while (param_10 == 0);
  iVar5 = FUN_014b8310(param_10,param_11,plVar9);
  uVar13 = *(undefined8 *)(param_10 + -8 + (longlong)iVar5 * 8);
  uVar4 = FUN_01b05600(uVar13,5);
  *param_1 = uVar4;
  uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9,1);
  *param_2 = uVar4;
  uVar4 = FUN_01b05600(uVar13,8);
  *param_3 = uVar4;
  uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9);
  *param_4 = uVar4;
LAB_017c7094:
  local_38 = (char *)FUN_01cfd6a0(plVar9);
  uVar11 = (ulonglong)uVar3;
  if (100 < uVar11) {
    if (uVar11 < 0xa5) {
      if ((uVar11 == 0xa4) || (uVar11 - 0x65 < 2)) {
LAB_017c73ee:
        if (uVar3 == 0xa4) {
          uVar13 = 0;
          pbVar12 = (byte *)FUN_01cfde70(plVar9,4,0,&local_39,&local_3a,&local_29);
          bVar2 = *pbVar12;
          if (bVar2 < 8) {
            bVar14 = ((int)CONCAT71((int7)((ulonglong)uVar13 >> 8),1) << (bVar2 & 0x1f) & 7U) != 0;
          }
          else {
            bVar14 = false;
          }
          if (bVar14) {
            local_5d = 1;
          }
          else if (bVar2 == 3) {
            local_5d = 4;
          }
          else {
            local_5d = 2;
          }
          bVar14 = true;
        }
        else {
          local_5d = 1;
          bVar14 = true;
        }
        goto LAB_017c754b;
      }
      if (uVar11 == 0x6a) {
LAB_017c737d:
        uVar3 = FUN_01cfd270(plVar9,0,0);
        uVar11 = (ulonglong)uVar3;
        FUN_00b909d0(&local_38);
        bVar2 = *local_38 + 1;
        if (bVar2 < 8) {
          bVar14 = ((int)CONCAT71((int7)(uVar11 >> 8),1) << (bVar2 & 0x1f) & 6U) != 0;
        }
        else {
          bVar14 = false;
        }
        if (bVar14) {
          local_5d = 1;
        }
        else if (bVar2 == 3) {
          local_5d = 4;
        }
        else {
          local_5d = 2;
        }
        bVar14 = true;
        goto LAB_017c754b;
      }
      if (uVar11 != 0x6b) {
        if (uVar11 != 0x77) goto LAB_017c754b;
        goto LAB_017c71dc;
      }
    }
    else {
      if (uVar11 == 0xc5) {
        cVar1 = *local_38;
        FUN_01cfd270(plVar9,0,0);
        FUN_00b909d0(&local_38);
        if ((cVar1 == '\0') && (*local_38 == '\0')) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        if (bVar14) {
          local_5d = 0xb;
        }
        goto LAB_017c754b;
      }
      if (((uVar11 != 200) && (uVar11 != 0xd2)) && (uVar11 != 0xdc)) goto LAB_017c754b;
    }
LAB_017c74a9:
    if (param_8 == '\b') {
      FUN_0043e1a0(local_50,plVar9[0x13]);
      FUN_0043e1a0(&local_58,L"LoopGainOut");
      cVar1 = FUN_005b8520(local_50[0]);
      if (cVar1 != '\0') {
        local_5d = 8;
        bVar14 = true;
      }
    }
    goto LAB_017c754b;
  }
  if (uVar11 == 100) {
    if (*param_13 == '\0') {
      local_5d = 5;
    }
    else {
      local_5d = 1;
    }
    bVar14 = true;
    *param_13 = '\x01';
    goto LAB_017c754b;
  }
  if (uVar11 < 0x21) {
    if (uVar11 - 4 < 3) {
LAB_017c71dc:
      cVar1 = *local_38;
      FUN_01cfd270(plVar9,0,0);
      FUN_00b909d0(&local_38);
      if ((cVar1 == '\x01') && (*local_38 == '\0')) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if (!bVar14) goto LAB_017c754b;
      uVar11 = (ulonglong)uVar3;
      if (uVar11 < 0x22) {
        if ((uVar11 == 0x21) || (uVar11 - 4 < 2)) {
LAB_017c727b:
          local_5d = 1;
          goto LAB_017c754b;
        }
        if (uVar11 - 4 != 2) goto LAB_017c754b;
      }
      else if (uVar11 != 0x22) {
        if (uVar11 != 0x77) goto LAB_017c754b;
        goto LAB_017c727b;
      }
      local_5d = 2;
      goto LAB_017c754b;
    }
    if (uVar11 == 7) {
      cVar1 = *local_38;
      FUN_01cfd270(plVar9,0,0);
      FUN_00b909d0(&local_38);
      if ((cVar1 == '\0') && (*local_38 == '\0')) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        local_5d = 3;
      }
      goto LAB_017c754b;
    }
    if (uVar11 != 8) {
      if (uVar11 != 9) goto LAB_017c754b;
      goto LAB_017c74a9;
    }
  }
  else {
    if (uVar11 < 0x3d) {
      if (1 < uVar11 - 0x21) {
        if (uVar11 - 0x21 == 0x1b) {
          FUN_01cfd270(plVar9,0,0);
          FUN_00b909d0(&local_38);
          if (*local_38 != '\0') {
            *param_7 = *local_38;
            local_5d = 1;
            bVar14 = true;
          }
        }
        goto LAB_017c754b;
      }
      goto LAB_017c71dc;
    }
    if (uVar11 - 0x3d < 2) goto LAB_017c73ee;
    if (uVar11 == 0x3f) goto LAB_017c737d;
    if (uVar11 != 0x62) goto LAB_017c754b;
  }
  FUN_01cfd270(plVar9,0,1);
  FUN_00b909d0(&local_38);
  bVar14 = *local_38 == '\0';
  if (bVar14) {
    local_5d = 4;
  }
LAB_017c754b:
  FUN_01995800(param_9,0,4);
  plVar9 = (longlong *)FUN_01995660(param_9);
  goto LAB_017c7574;
LAB_017c7586:
  *param_5 = *param_12;
LAB_017c7598:
  FUN_00414560(&local_58,2);
  return local_5d;
}

