/* Ghidra address: 016f3d00 */
/* Ghidra symbol: FUN_016f3d00 */


/* WARNING: Removing unreachable block (ram,0x016f432c) */

void FUN_016f3d00(longlong *param_1,char param_2)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined7 uVar12;
  undefined8 uVar11;
  int iVar13;
  char cVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  double dVar22;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  char local_df;
  char local_dd;
  byte local_db;
  double local_d8;
  double local_d0;
  double local_c8;
  char local_b9 [145];
  
  uVar15 = FUN_00b92140(0);
  iVar13 = 1;
  param_1[0x5f] = 1;
  bVar4 = true;
  local_b9[0] = '\0';
  bVar5 = false;
  bVar7 = false;
  bVar6 = true;
  local_dd = *PTR_DAT_02003fd8;
  param_1[0x6b] = 0;
  param_1[0x8f] = 0x3ff0000000000000;
  local_db = 0;
  *PTR_DAT_02004578 = 1;
  dVar22 = (double)param_1[0x8a];
  *(undefined8 *)PTR_DAT_02003468 = 0;
  bVar3 = false;
  dVar16 = (double)FUN_00b90620(param_1[0x86],param_1[0x8a]);
  lVar1 = param_1[0x86];
  dVar2 = (double)param_1[0x8a];
  dVar17 = 10.0;
  dVar20 = 1.01;
  DAT_01f969d8 = (double)param_1[0xe0] / 100.0 + 1.0;
  if (param_2 == '\x06') {
    if (1e-30 < (double)param_1[0x112] * 1e-14) {
      param_1[0x8b] = 0x49e5e531a0a1c873;
      param_1[0x8c] = param_1[0x8b];
    }
  }
  else {
    param_1[0x8b] = 0x49e5e531a0a1c873;
    param_1[0x8c] = 0x47d2ced32a16a1b1;
  }
  DAT_01f969e4 = 0;
  if (((*(char *)((longlong)param_1 + 0x885) == '\x02') && (param_2 == '\x06')) &&
     (*(char *)((longlong)param_1 + 0x326) == '\0')) {
    local_db = 0x10;
  }
  uVar8 = FUN_0040c770(param_1[0xfa]);
  *(undefined1 *)((longlong)param_1 + 0x32a) = uVar8;
  cVar14 = *(char *)((longlong)param_1 + 0x32a);
  param_1[0x81] = param_1[0xf7];
  param_1[0x82] = param_1[0xf8];
  param_1[0x83] = (longlong)((double)param_1[0xf9] / 100.0);
  if ((*(char *)((longlong)param_1 + 0x326) == '\0') && (param_2 != '\x06')) {
    lVar21 = FUN_0040c840(param_1[0xdd]);
    local_df = lVar21 == 0;
    if (*(char *)((longlong)param_1 + 0x32a) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x32a) = 1;
      cVar14 = '\0';
      param_1[0x81] = (longlong)((double)param_1[0xf7] * 1000.0);
      param_1[0x82] = (longlong)((double)param_1[0xf8] * 1000.0);
      param_1[0x83] = (longlong)(((double)param_1[0xf9] * 1000.0) / 100.0);
    }
    *(undefined1 *)((longlong)param_1 + 0x329) = 1;
    bVar5 = true;
    unaff_XMM6_Qa = 0.0;
    bVar3 = 100.0 <= (double)param_1[0xe2];
    unaff_XMM7_Qa = (double)param_1[0xe2] / 100.0;
    if ((bool)local_df) {
      local_d8 = (double)param_1[0xde];
      local_d0 = (double)param_1[0xde];
    }
    else {
      if (bVar3) {
        dVar22 = 0.101;
      }
      else {
        param_1[0x8f] = (longlong)unaff_XMM7_Qa;
      }
      local_d8 = (double)param_1[0xde];
      local_d0 = (double)param_1[0xde] * 1000.0;
    }
    FUN_016f6940(param_1,param_2);
    FUN_01b07850(param_1,param_1[0x23],param_1[0x28]);
  }
  else {
    if ((param_2 == '\x06') && (*(char *)((longlong)param_1 + 0x326) != '\0')) {
      local_d0 = (double)param_1[0x92];
    }
    else {
      local_d0 = (double)param_1[0xde];
    }
    local_d8 = local_d0;
    *(undefined1 *)((longlong)param_1 + 0x329) = 1;
    cVar14 = '\x01';
  }
  while (((*(char *)((longlong)param_1 + 0x49c) == '\0' && ((double)param_1[0x5f] <= local_d0)) &&
         (bVar4))) {
    uVar12 = (undefined7)((ulonglong)param_1 >> 8);
    if (bVar3) {
      bVar4 = dVar2 < dVar22;
      uVar11 = FUN_01af25b0(param_1[0x1e2],0,&DAT_016f4f3a,2);
      uVar10 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),3);
      local_c8 = dVar22;
    }
    else {
      bVar4 = (double)param_1[0x8f] <= 1.0 && (double)param_1[0x8f] != 1.0;
      local_c8 = (double)param_1[0x8f] * 100.0;
      uVar10 = (undefined4)CONCAT71(uVar12,4);
    }
    FUN_01af25d0(param_1[0x1e2],3,uVar10,&local_c8);
    if ((*PTR_DAT_02003fd8 != '\0') && (local_dd == '\0')) {
      *PTR_DAT_02004578 = 0;
    }
    FUN_01b07850(param_1,param_1[0x23],param_1[0x29]);
    if (cVar14 != '\0') {
      param_1[0x81] = param_1[0xf7];
      param_1[0x82] = param_1[0xf8];
      param_1[0x83] = (longlong)((double)param_1[0xf9] / 100.0);
    }
    do {
      FUN_01af25d0(param_1[0x1e2],1,1,param_1 + 0x5f);
      FUN_01b07850(param_1,param_1[0x25],param_1[0x26]);
      FUN_01b07850(param_1,param_1[0x23],param_1[0x25]);
      FUN_017c51f0(param_1[0x37],param_1[0x32],*(undefined4 *)((longlong)param_1 + 0x31c));
      if (param_2 == '\x06') {
        if (*(char *)((longlong)param_1 + 0x326) == '\0') {
          if (iVar13 == 1) {
            FUN_01b08890(param_1,local_db | 0x40);
            FUN_017d9ab0(param_1[0x1b],0);
          }
          else if ((*(byte *)(param_1 + 0x11) & 0x40) != 0) {
            FUN_01b08890(param_1,local_db | 8);
            FUN_017d9ab0(param_1[0x1b],0);
          }
        }
        else if (iVar13 == 1) {
          FUN_01b08890(param_1,local_db | 0x80);
        }
        else {
          FUN_01b08890(param_1,local_db | 8);
        }
      }
      else if (*(char *)((longlong)param_1 + 0x326) == '\0') {
        if (bVar5) {
          if (iVar13 == 1) {
            FUN_01b08890(param_1,local_db | 3);
            FUN_017d9ab0(param_1[0x1b],0);
          }
          else if ((*(byte *)(param_1 + 0x11) & 2) == 0) {
            if (((*(byte *)(param_1 + 0x11) & 4) != 0) && (local_b9[0] != '\0')) {
              FUN_01b08890(param_1,local_db | 8);
            }
          }
          else {
            FUN_01b08890(param_1,local_db | 4);
            FUN_017d9ab0(param_1[0x1b],0);
          }
        }
        else {
          if (iVar13 == 1) {
            FUN_017d9d10(param_1[0x1b],1);
          }
          FUN_01b08890(param_1,local_db | 8);
        }
      }
      FUN_016f8e60(param_1);
      *(undefined1 *)((longlong)param_1 + 0x331) = 0;
      param_1[0x6b] = 0x3ff0000000000000;
      FUN_01b08850();
      FUN_016f6430(param_1,param_2,0);
      FUN_016f3620(param_1,0,param_2);
      if ((*(char *)((longlong)param_1 + 0x331) == '\0') && (1 < iVar13)) {
        uVar10 = (undefined4)CONCAT71(uVar12,1);
      }
      else {
        uVar10 = 0;
      }
      local_b9[0] = (char)uVar10;
      if (*(char *)((longlong)param_1 + 0x329) == '\0') {
        if (local_b9[0] != '\0') {
          FUN_016f0740(param_1,param_2,local_b9,param_1 + 0x6b);
        }
      }
      else if (DAT_01f969e4 < iVar13) {
        cVar9 = FUN_016f0eb0(param_1,param_2,uVar10,local_b9,param_1 + 0x6b);
        if ((cVar9 == '\0') && (*(char *)((longlong)param_1 + 0x331) == '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x331) = uVar8;
      }
      else {
        local_b9[0] = '\0';
      }
      FUN_01af25d0(param_1[0x1e2],2,2,param_1 + 0x6b);
      iVar13 = iVar13 + 1;
      param_1[0x5f] = param_1[0x5f] + 1;
      if ((*PTR_DAT_020052b8 == '\0') && ((param_2 != '\x06' || (100 < iVar13)))) {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
    } while (((*(char *)((longlong)param_1 + 0x49c) == '\0') &&
             ((((local_b9[0] == '\0' || (*(char *)((longlong)param_1 + 0x331) != '\0')) ||
               ((*(byte *)(param_1 + 0x11) & 8) == 0)) || (iVar13 < 3)))) &&
            (((double)iVar13 <= local_d8 && ((double)param_1[0x5f] <= local_d0))));
    if ((*(char *)((longlong)param_1 + 0x326) == '\0') && (param_2 != '\x06')) {
      *(bool *)((longlong)param_1 + 0x324) = local_d8 < (double)iVar13;
      if ((double)iVar13 <= local_d8) {
        dVar18 = dVar22;
        if (local_df == '\0') {
          if (bVar5) {
            if (!bVar3) {
              unaff_XMM7_Qa = (double)param_1[0xe1] / 100.0;
              dVar22 = dVar2;
            }
            local_d8 = (double)param_1[0xdf];
            if (local_d8 == 40.0) {
              local_d8 = 200.0;
            }
            bVar5 = false;
          }
          if (bVar3) {
            dVar18 = (double)FUN_0040c760(DAT_01f969d8);
            if ((dVar18 * dVar16 <= dVar22) ||
               (dVar19 = (double)FUN_0040c760(1.0 / DAT_01f969d8), dVar18 = dVar2,
               dVar22 <= dVar19 * dVar16)) {
              if ((double)iVar13 <= local_d8 / 4.0) {
                dVar20 = (double)FUN_0040c760(dVar17);
                dVar17 = dVar17 * dVar20;
                if (10.0 < dVar17) {
                  dVar17 = 10.0;
                }
              }
              if ((local_d8 * 3.0) / 4.0 < (double)iVar13) {
                dVar17 = (double)FUN_0040c760(dVar17);
              }
              dVar20 = dVar22;
              if (dVar17 * dVar16 <= dVar22) {
                dVar18 = dVar22 / dVar17;
              }
              else {
                dVar17 = dVar22 / dVar16;
                dVar18 = dVar16;
              }
            }
          }
          else {
            dVar18 = dVar22;
            if (bVar7) {
              unaff_XMM7_Qa = unaff_XMM7_Qa * 2.0;
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
          }
        }
        dVar22 = dVar18;
        if ((!bVar3) &&
           (unaff_XMM6_Qa = (double)param_1[0x8f], dVar22 = dVar2,
           1.0 < unaff_XMM6_Qa + unaff_XMM7_Qa)) {
          unaff_XMM7_Qa = 1.0 - unaff_XMM6_Qa;
        }
        FUN_01b07850(param_1,param_1[0x23],param_1[0x28]);
        FUN_017c51f0(param_1[0x37],param_1[0x38],*(undefined4 *)((longlong)param_1 + 0x31c));
        FUN_017c51f0(param_1[0x37],param_1[0x32],*(undefined4 *)((longlong)param_1 + 0x31c));
        *(int *)(param_1 + 0x93) = (int)param_1[0x93] + 1;
      }
      else {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          local_d8 = (double)param_1[0xde];
          local_d0 = (double)param_1[0xde] * 1000.0;
          (**(code **)(*param_1 + 0x20))(param_1);
          FUN_016f54d0(param_1,0);
          FUN_016f6940(param_1);
        }
        else if (local_df == '\0') {
          if (((bVar5) || ((!bVar3 && (unaff_XMM7_Qa < (double)param_1[0xe0] / 100.0)))) ||
             ((bVar3 && (dVar17 <= DAT_01f969d8)))) {
            if (bVar6) {
              bVar6 = false;
              bVar5 = true;
              local_d8 = (double)param_1[0xde];
              if (bVar3) {
                dVar17 = 10.0;
                DAT_01f969e1 = '\0';
                DAT_01f969e0 = '\x01';
                dVar20 = 1.01;
                dVar22 = 0.101;
              }
              else {
                unaff_XMM7_Qa = 0.0;
                unaff_XMM6_Qa = 0.0;
                dVar22 = dVar2;
              }
              (**(code **)(*param_1 + 0x20))(param_1);
              FUN_016f54d0(param_1,0);
              FUN_016f6940(param_1);
            }
            else if (bVar3) {
              lVar21 = FUN_0040c840(local_d0);
              param_1[0x5f] = lVar21 + 1;
            }
            else {
              bVar3 = true;
              DAT_01f969e1 = '\x01';
              DAT_01f969e0 = '\0';
              dVar20 = 1.01;
              dVar22 = 1.01 / dVar17;
              local_d8 = (double)param_1[0xde];
              local_d0 = (double)param_1[0xde] * 1000.0;
              bVar6 = true;
              bVar5 = true;
              (**(code **)(*param_1 + 0x20))(param_1);
              FUN_016f54d0(param_1,0);
              FUN_016f6940(param_1);
            }
          }
          else {
            if (bVar3) {
              if (dVar17 <= DAT_01f969d8) {
                lVar21 = FUN_0040c840(local_d0);
                param_1[0x5f] = lVar21 + 1;
              }
              else {
                FUN_0040c760(dVar17);
                dVar17 = (double)FUN_0040c760();
                dVar22 = dVar20 / dVar17;
              }
            }
            else if (unaff_XMM7_Qa == 0.0) {
              lVar21 = FUN_0040c840(local_d0);
              param_1[0x5f] = lVar21 + 1;
            }
            else {
              unaff_XMM7_Qa = unaff_XMM7_Qa / 8.0;
            }
            FUN_01b07850(param_1,param_1[0x28],param_1[0x23]);
            FUN_017c51f0(param_1[0x38],param_1[0x37],*(undefined4 *)((longlong)param_1 + 0x31c));
            FUN_017c51f0(param_1[0x32],param_1[0x37],*(undefined4 *)((longlong)param_1 + 0x31c));
          }
          bVar7 = false;
        }
        else {
          local_df = '\0';
          if (bVar3) {
            dVar22 = 1.01;
          }
          else {
            param_1[0x8f] = (longlong)unaff_XMM7_Qa;
          }
          local_d8 = (double)param_1[0xde];
          local_d0 = (double)param_1[0xde] * 1000.0;
          (**(code **)(*param_1 + 0x20))(param_1);
          FUN_016f54d0(param_1,0);
          FUN_016f6940(param_1);
        }
        bVar4 = true;
      }
      if ((local_df != '\0') || (bVar3)) {
        param_1[0x8f] = 0x3ff0000000000000;
      }
      else {
        param_1[0x8f] = (longlong)(unaff_XMM6_Qa + unaff_XMM7_Qa);
        dVar22 = dVar2;
      }
      iVar13 = 1;
      local_b9[0] = '\0';
    }
    if ((((local_df != '\0') || ((!bVar3 && (1.0 <= (double)param_1[0x8f])))) ||
        ((bVar3 && (dVar22 <= dVar16)))) && (local_dd != '\0')) {
      bVar4 = true;
      bVar5 = false;
      local_dd = '\0';
    }
    if (bVar3) {
      if (DAT_01f969e1 != '\0') {
        lVar21 = FUN_00b90620(lVar1,dVar22);
        param_1[0x86] = lVar21;
        if (DAT_01f969e2 != '\0') {
          if ((double)param_1[0x86] <= dVar16 * 10.0) {
            *(undefined8 *)PTR_DAT_02003468 = 0;
          }
          else {
            *(double *)PTR_DAT_02003468 = (double)param_1[0x86] * *(double *)PTR_DAT_02002288;
          }
        }
      }
      if (DAT_01f969e0 != '\0') {
        param_1[0x8a] = (longlong)dVar22;
      }
    }
  }
  param_1[0x86] = lVar1;
  param_1[0x8a] = (longlong)dVar2;
  *(undefined8 *)PTR_DAT_02003468 = 0;
  *(bool *)((longlong)param_1 + 0x324) = local_d0 < (double)param_1[0x5f];
  *PTR_DAT_02004578 = 0;
  dVar22 = (double)FUN_00b92140(uVar15);
  *(double *)PTR_DAT_02004668 = dVar22 + *(double *)PTR_DAT_02004668;
  return;
}

