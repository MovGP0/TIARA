/* Ghidra address: 014df1e0 */
/* Ghidra symbol: FUN_014df1e0 */


longlong *
FUN_014df1e0(longlong *param_1,undefined8 param_2,short *param_3,undefined8 param_4,byte param_5,
            ulonglong param_6,undefined8 param_7,byte *param_8,undefined1 param_9,
            undefined8 param_10)

{
  double dVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  char unaff_BL;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 unaff_XMM7_Qa;
  ushort local_1782;
  undefined *local_1780;
  undefined8 local_1778 [406];
  undefined8 local_ac8 [92];
  undefined1 local_7e8;
  undefined8 local_590 [135];
  longlong local_158;
  longlong local_150;
  byte local_148 [288];
  
  local_7e8 = 0;
  lVar9 = (ulonglong)*param_8 + 1;
  pbVar11 = local_148;
  for (; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pbVar11 = *param_8;
    param_8 = param_8 + 1;
    pbVar11 = pbVar11 + 1;
  }
  if (param_5 < 0x4b) {
    if (param_5 == 0x4a) {
      iVar4 = FUN_00414f50(local_148,&DAT_014dfad8,(ulonglong)local_148[0] + 1);
      if (iVar4 == 0) {
        local_1782 = 0x5d;
      }
      else {
        local_1782 = 0x5e;
      }
    }
    else if (param_5 == 0x42) {
      local_1782 = 0xb1;
    }
    else if (param_5 == 0x44) {
      local_1782 = 0x17;
    }
  }
  else if (param_5 == 0x4d) {
    iVar4 = FUN_00414f50(local_148,&DAT_014dfadc,(ulonglong)local_148[0] + 1);
    if (iVar4 == 0) {
      dVar1 = *(double *)PTR_DAT_02003860;
      cVar2 = FUN_014db910(&DAT_014dfae1,param_7,&local_158);
      if (cVar2 != '\0') {
        dVar1 = *(double *)(local_158 + 0x28);
      }
      if (dVar1 < 0.0) {
        local_1782 = 0x5b;
      }
      else {
        local_1782 = 0x59;
      }
    }
    else {
      dVar1 = *(double *)PTR_DAT_02003860;
      cVar2 = FUN_014db910(&DAT_014dfae1,param_7,&local_158);
      if (cVar2 != '\0') {
        dVar1 = *(double *)(local_158 + 0x28);
      }
      if (0.0 <= dVar1) {
        local_1782 = 0x5c;
      }
      else {
        local_1782 = 0x5a;
      }
    }
  }
  else if (param_5 == 0x51) {
    iVar4 = FUN_00414f50(local_148,&DAT_014dfaea,(ulonglong)local_148[0] + 1);
    if (iVar4 == 0) {
      local_1782 = 0x57;
    }
    else {
      local_1782 = 0x58;
    }
  }
  plVar6 = (longlong *)FUN_014db750(local_1782);
  uVar8 = 0;
  FUN_017bf050(plVar6,0,param_3);
  *(bool *)((longlong)plVar6 + 0x531) = *param_3 == 0x58;
  if ((ushort)(local_1782 - 0x58) < 8) {
    bVar13 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << ((byte)(local_1782 - 0x58) & 0x1f) &
             0x1eU) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
LAB_014df47b:
    uVar7 = FUN_01d01990(plVar6,4);
  }
  else {
    if ((ushort)(local_1782 - 0x50) < 0x10) {
      uVar5 = 1 << ((byte)(local_1782 - 0x50) & 0x1f);
      uVar7 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x180) != 0);
    }
    else {
      uVar7 = 0;
    }
    if (((char)uVar7 != '\0') && (uVar7 = param_6, *(int *)(param_6 + 0x10) == 4))
    goto LAB_014df47b;
  }
  if ((ushort)(local_1782 - 0x50) < 0x10) {
    bVar13 = ((int)CONCAT62((int6)(uVar7 >> 0x10),1) << ((byte)(local_1782 - 0x50) & 0x1f) & 0x180U)
             != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    uVar8 = FUN_01d347d0(param_6,2);
    FUN_014dbb80(plVar6,0,uVar8,param_10);
  }
  else {
    uVar8 = FUN_01d347d0(param_6,0);
    FUN_014dbb80(plVar6,0,uVar8,param_10);
  }
  uVar8 = FUN_01d347d0(param_6,1);
  FUN_014dbb80(plVar6,1,uVar8,param_10);
  if (local_1782 != 0x17) {
    if ((ushort)(local_1782 - 0x50) < 0x10) {
      bVar13 = (1 << ((byte)(local_1782 - 0x50) & 0x1f) & 0x180U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      uVar8 = FUN_01d347d0(param_6,0);
      FUN_014dbb80(plVar6,2,uVar8,param_10);
    }
    else {
      uVar8 = FUN_01d347d0(param_6,2);
      FUN_014dbb80(plVar6,2,uVar8,param_10);
    }
  }
  uVar3 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  lVar9 = FUN_00409570(uVar3);
  plVar6[0x18] = lVar9;
  FUN_01d38290(plVar6,1);
  if (param_5 == 0x44) {
    FUN_0172d840(plVar6,0,1,1);
  }
  if (param_5 == 0x4a) {
    FUN_0172d840(plVar6,0,1,1);
  }
  if (param_5 == 0x51) {
    FUN_0172d840(plVar6,0,1,1);
  }
  if (param_5 == 0x4d) {
    cVar2 = FUN_014db910(&DAT_014dfaf1,param_7,&local_158);
    if (cVar2 == '\0') {
      unaff_XMM7_Qa = 0x3ff0000000000000;
      FUN_0172d840(plVar6,0,1,1);
    }
    else {
      unaff_XMM7_Qa = *(undefined8 *)(local_158 + 0x28);
      lVar9 = FUN_0040c770(unaff_XMM7_Qa);
      if (lVar9 == 1) {
        FUN_0172d840(plVar6,0,1,1);
      }
      else if (lVar9 == 2) {
        FUN_0172d840(plVar6,0,2,1);
      }
      else if (lVar9 == 7) {
        cVar2 = FUN_014db910(&DAT_014dfaf7,param_7,&local_158);
        if (cVar2 != '\0') {
          dVar1 = *(double *)(local_158 + 0x28);
          cVar2 = FUN_00527300(dVar1 - 3.1,0x3f50624dd2f1a9fc);
          if (cVar2 == '\0') {
            cVar2 = FUN_00527300(dVar1 - 3.2,0x3f50624dd2f1a9fc);
            if (cVar2 == '\0') {
              unaff_BL = '\0';
            }
            else {
              unaff_BL = '\x01';
            }
          }
          else {
            unaff_BL = '\0';
          }
        }
        if (unaff_BL == '\0') {
          FUN_0172d840(plVar6,0,4,1);
        }
        else {
          FUN_0172d840(plVar6,0,5,1);
        }
      }
      else if (lVar9 == 8) {
        FUN_0172d840(plVar6,0,6,1);
      }
      else {
        FUN_0172d840(plVar6,0,3,1);
      }
    }
  }
  puVar10 = (undefined8 *)PTR_DAT_02002058;
  puVar12 = local_590;
  for (lVar9 = 0x87; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = (undefined8 *)PTR_DAT_02004d18;
  puVar12 = local_ac8;
  for (lVar9 = 0xa7; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = (undefined8 *)PTR_DAT_020059d0;
  puVar12 = local_1778;
  for (lVar9 = 0x196; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  (**(code **)(*plVar6 + 0x2d0))(plVar6,0,&local_150);
  uVar7 = (ulonglong)local_1782;
  if (uVar7 < 0x59) {
    if (uVar7 == 0x17) {
      local_1780 = PTR_DAT_02003bf0;
    }
    else if (uVar7 - 0x57 < 2) {
      local_1780 = PTR_DAT_02004cc8;
    }
  }
  else if (uVar7 - 0x59 < 4) {
    lVar9 = FUN_0040c770(unaff_XMM7_Qa);
    if (lVar9 == 1) {
      local_1780 = PTR_DAT_02001548;
    }
    else if (lVar9 == 2) {
      local_1780 = PTR_DAT_02001850;
    }
    else if (lVar9 == 7) {
      FUN_014de960(param_2,param_3,param_4,local_1782,param_7,param_9);
      if (unaff_BL == '\0') {
        local_1780 = PTR_DAT_02002058;
      }
      else {
        local_1780 = PTR_DAT_02004d18;
      }
    }
    else if (lVar9 == 8) {
      FUN_014dedc0(local_1782,param_7,param_9);
      local_1780 = PTR_DAT_020059d0;
    }
    else {
      local_1780 = PTR_DAT_020049e8;
    }
  }
  else if (uVar7 - 0x5d < 2) {
    local_1780 = *(undefined **)PTR_PTR_02004630;
  }
  else if (uVar7 - 0x5d == 0x54) {
    local_1780 = PTR_DAT_02002550;
  }
  FUN_00409a70(local_1780,*(undefined8 *)(*(longlong *)(local_150 + 0x26) + 9),
               *(undefined2 *)(*(longlong *)(local_150 + 0x26) + 0x23));
  puVar10 = local_590;
  puVar12 = (undefined8 *)PTR_DAT_02002058;
  for (lVar9 = 0x87; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = local_ac8;
  puVar12 = (undefined8 *)PTR_DAT_02004d18;
  for (lVar9 = 0xa7; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = local_1778;
  puVar12 = (undefined8 *)PTR_DAT_020059d0;
  for (lVar9 = 0x196; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_014de7f0(plVar6,param_7);
  if ((ushort)(local_1782 - 0x58) < 8) {
    bVar13 = ((int)CONCAT71((int7)((ulonglong)param_7 >> 8),1) << ((byte)(local_1782 - 0x58) & 0x1f)
             & 0x1eU) != 0;
  }
  else {
    bVar13 = false;
  }
  if (!bVar13) {
    if ((ushort)(local_1782 - 0x50) < 0x10) {
      uVar5 = 1 << ((byte)(local_1782 - 0x50) & 0x1f);
      uVar7 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x180) != 0);
    }
    else {
      uVar7 = 0;
    }
    if (((char)uVar7 == '\0') || (uVar7 = param_6, *(int *)(param_6 + 0x10) != 4))
    goto LAB_014dfa1c;
  }
  uVar8 = FUN_01d347d0(param_6,3);
  uVar7 = FUN_014dbb80(plVar6,3,uVar8,param_10);
LAB_014dfa1c:
  if ((ushort)(local_1782 - 0x50) < 0x10) {
    bVar13 = ((int)CONCAT62((int6)(uVar7 >> 0x10),1) << ((byte)(local_1782 - 0x50) & 0x1f) & 0x1f80U
             ) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    (**(code **)(*plVar6 + 0x2d0))(plVar6,1,&local_150);
    *(undefined2 *)(local_150 + 0x1f) = 0xffff;
    *(undefined2 *)(local_150 + 0x23) = 0xffff;
  }
  (**(code **)(*param_1 + 0x20))(param_1,plVar6);
  return plVar6;
}

