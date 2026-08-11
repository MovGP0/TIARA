/* Ghidra address: 01656f80 */
/* Ghidra symbol: FUN_01656f80 */


/* WARNING: Removing unreachable block (ram,0x0165749c) */

double FUN_01656f80(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  double *pdVar7;
  longlong lVar8;
  uint uVar9;
  undefined7 uVar12;
  ulonglong uVar10;
  int *piVar11;
  undefined8 unaff_RDI;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double unaff_XMM6_Qa;
  double dVar17;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_5c [52];
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    unaff_RDI = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x118);
  }
  if ((*(char *)((longlong)param_2 + 0x51) == '\0') || (*(longlong *)(param_1 + 0x28) == 0)) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x118) = 0;
    }
  }
  else {
    *(int **)(*(longlong *)(param_1 + 0x28) + 0x118) = param_2 + 0xe;
  }
  iVar2 = *param_2;
  uVar12 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar2 < 10) {
    if (iVar2 == 9) {
      uVar3 = param_2[0x13];
      if (uVar3 == 0xc) {
        dVar17 = (double)FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
        uVar14 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        local_90 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
        local_a0 = dVar17;
        local_98 = uVar14;
        unaff_XMM6_Qa =
             (double)FUN_016aab50(&local_a0,2,param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined1 *)(param_1 + 0x90));
        if (*(char *)(param_1 + 0x27) != '\0') {
          FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,3,param_2,0,0,
                       *(undefined8 *)(param_1 + 0x80),0xffffffff);
        }
      }
      else if (uVar3 == 0x2b) {
        dVar17 = (double)FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
        uVar14 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        local_90 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
        local_a0 = dVar17;
        local_98 = uVar14;
        unaff_XMM6_Qa =
             (double)FUN_016aab50(&local_a0,2,param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined1 *)(param_1 + 0x90));
        if (*(char *)(param_1 + 0x27) != '\0') {
          FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,3,param_2,0,0,
                       *(undefined8 *)(param_1 + 0x80),0xffffffff);
        }
      }
      else if (uVar3 == 0x28) {
        uVar14 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
        uVar15 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        uVar16 = FUN_01656f80(param_1,*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 8));
        local_a8 = FUN_01656f80(param_1,*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 0x10));
        local_c0 = uVar14;
        local_b8 = uVar15;
        local_b0 = uVar16;
        unaff_XMM6_Qa =
             (double)FUN_016aab50(&local_c0,3,param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined1 *)(param_1 + 0x90));
        if (*(char *)(param_1 + 0x27) != '\0') {
          FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,4,param_2,0,0,
                       *(undefined8 *)(param_1 + 0x80),0xffffffff);
        }
      }
      else if (uVar3 == 0x38) {
        dVar17 = (double)FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
        uVar14 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        local_90 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
        local_a0 = dVar17;
        local_98 = uVar14;
        unaff_XMM6_Qa =
             (double)FUN_016aab50(&local_a0,2,param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined1 *)(param_1 + 0x90));
        if (*(char *)(param_1 + 0x27) != '\0') {
          FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,3,param_2,0,0,
                       *(undefined8 *)(param_1 + 0x80),0xffffffff);
        }
      }
      else if (uVar3 == 0x1a) {
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x10);
        if (lVar8 == 0) {
          lVar8 = FUN_01656de0(*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        }
        if (lVar8 == 0) {
          unaff_XMM6_Qa =
               (double)FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
        }
        else if ((*(longlong *)(param_1 + 0x60) == 0) ||
                (*(char *)(*(longlong *)(param_1 + 0x60) + 0x122) == '\0')) {
          FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
          bVar5 = FUN_0040c770();
          if (*(char *)(param_1 + 0x27) != '\0') {
            FUN_016639f0(*(undefined8 *)(param_1 + 0x28),1,*(undefined1 *)(param_1 + 0x98));
            FUN_01663e30(*(undefined8 *)(param_1 + 0x28),1,local_5c);
          }
          uVar14 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          if (*(char *)(param_1 + 0x27) != '\0') {
            FUN_01663e30(*(undefined8 *)(param_1 + 0x28),2,local_5c);
          }
          local_90 = FUN_01656f80(param_1,lVar8);
          if (*(char *)(param_1 + 0x27) != '\0') {
            FUN_01663e30(*(undefined8 *)(param_1 + 0x28),3,local_5c);
          }
          local_a0 = (double)bVar5;
          local_98 = uVar14;
          unaff_XMM6_Qa =
               (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                 (&local_a0,2);
        }
        else {
          dVar17 = (double)FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
          uVar14 = FUN_01656f80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          local_90 = FUN_01656f80(param_1,lVar8);
          local_a0 = dVar17;
          local_98 = uVar14;
          unaff_XMM6_Qa =
               (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                 (&local_a0,2);
          if (*(char *)(param_1 + 0x27) != '\0') {
            FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8),3,0,0,
                         0,1,0xffffffff);
          }
        }
      }
      else if (uVar3 == 0x32) {
        local_c8 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
        unaff_XMM6_Qa =
             (double)FUN_016aab50(&local_c8,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined1 *)(param_1 + 0x90));
        if (*(char *)(param_1 + 0x27) != '\0') {
          FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,1,param_2,0,0,
                       *(undefined8 *)(param_1 + 0x80),0xffffffff);
        }
      }
      else {
        if (uVar3 - 0x38 < 8) {
          uVar9 = (int)CONCAT71(uVar12,1) << ((byte)(uVar3 - 0x38) & 0x1f);
          bVar13 = (uVar9 & 0x70) != 0;
          piVar11 = (int *)(ulonglong)uVar9;
        }
        else {
          bVar13 = false;
          piVar11 = param_2;
        }
        if (bVar13) {
          unaff_XMM6_Qa =
               (double)FUN_016aab50(&DAT_01658558,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                    *(undefined1 *)(param_1 + 0x90));
          if (*(char *)(param_1 + 0x27) != '\0') {
            FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,0,param_2,0,0,
                         *(undefined8 *)(param_1 + 0x80),0xffffffff);
          }
        }
        else {
          if (uVar3 < 0x40) {
            piVar11 = (int *)(1L << ((byte)uVar3 & 0x3f));
            bVar13 = ((ulonglong)piVar11 & 0x4000800c0) != 0;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) {
            uVar14 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
            local_70 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 4));
            local_78 = uVar14;
            unaff_XMM6_Qa =
                 (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                   (&local_78,1);
            if (*(char *)(param_1 + 0x27) != '\0') {
              FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8),2,0,
                           0,0,1,0xffffffff);
            }
          }
          else {
            if (uVar3 - 0x18 < 8) {
              bVar13 = ((int)CONCAT71((int7)((ulonglong)piVar11 >> 8),1) <<
                        ((byte)(uVar3 - 0x18) & 0x1f) & 3U) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              uVar14 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
              local_70 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 4));
              local_78 = uVar14;
              unaff_XMM6_Qa =
                   (double)FUN_016aab50(&local_78,1,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x90));
              if (*(char *)(param_1 + 0x27) != '\0') {
                FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,2,param_2,0,0,
                             *(undefined8 *)(param_1 + 0x80),0xffffffff);
              }
            }
            else if (uVar3 == 0x34) {
              local_c8 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
              unaff_XMM6_Qa =
                   (double)FUN_016aab50(&local_c8,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x90));
              if (*(char *)(param_1 + 0x27) != '\0') {
                FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,1,param_2,0,0,
                             *(undefined8 *)(param_1 + 0x80),0xffffffff);
              }
            }
            else if (uVar3 == 0x35) {
              local_c8 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
              unaff_XMM6_Qa =
                   (double)FUN_016aab50(&local_c8,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x90));
              if (*(char *)(param_1 + 0x27) != '\0') {
                FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,1,param_2,0,0,
                             *(undefined8 *)(param_1 + 0x80),0xffffffff);
              }
            }
            else if (uVar3 == 0x21) {
              uVar14 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
              local_70 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 4));
              local_78 = uVar14;
              unaff_XMM6_Qa =
                   (double)FUN_016aab50(&local_78,1,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x90));
              if (*(char *)(param_1 + 0x27) != '\0') {
                FUN_01663780(*(undefined8 *)(param_1 + 0x28),FUN_016aab50,1,param_2,0,0,
                             *(undefined8 *)(param_1 + 0x80),0xffffffff);
              }
            }
            else if (uVar3 == 0x27) {
              FUN_01b05000(L"FNCT_CROSS: error",0);
            }
            else if (uVar3 == 0x29) {
              unaff_XMM6_Qa = (double)FUN_01656f30(param_2,*(undefined8 *)(param_1 + 0x68));
              if (*(char *)(param_1 + 0x27) != '\0') {
                FUN_01b05000(L"FNCT_GETNATURE fn is not implemented in precomp mode, turn off ModelCompilationEnabled in Tina.ini"
                             ,0);
              }
            }
            else {
              local_c8 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
              unaff_XMM6_Qa =
                   (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                     (&local_c8,0);
              if (*(char *)(param_1 + 0x27) != '\0') {
                FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                             *(undefined8 *)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8),1,
                             0,0,0,1,0xffffffff);
              }
            }
          }
        }
      }
      goto LAB_0165848b;
    }
    if (iVar2 == 1) {
      unaff_XMM6_Qa = *(double *)(param_2 + 10);
      if (*(char *)(param_1 + 0x27) != '\0') {
        FUN_01663700(*(undefined8 *)(param_1 + 0x28),param_2 + 10);
      }
      goto LAB_0165848b;
    }
    if (iVar2 == 2) {
      pdVar7 = (double *)0x0;
      dVar17 = 0.0;
      iVar2 = param_2[0x12];
      if (iVar2 < 0xb) {
        if (iVar2 == 10) {
          if (*(longlong *)(param_1 + 0x68) == 0) {
            pdVar7 = (double *)0x0;
          }
          else {
            cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x89);
            if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
              dVar17 = 1.0;
            }
            else {
              dVar17 = 0.0;
            }
          }
        }
        else if (iVar2 < 5) {
          if (iVar2 == 4) {
            if (*(longlong *)(param_1 + 0x68) == 0) {
              pdVar7 = (double *)0x0;
            }
            else if ((char)param_2[0x2c] == '\0') {
              dVar17 = *(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0);
            }
            else {
              dVar17 = *(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0) + 273.15;
            }
          }
          else if (iVar2 == 1) {
            pdVar7 = (double *)(*(longlong *)(param_1 + 0x68) + 0x430);
          }
          else {
            pdVar7 = (double *)0x0;
            if (iVar2 - 2U < 2) {
              pdVar7 = (double *)0x0;
            }
          }
        }
        else if (iVar2 == 5) {
          if (*(longlong *)(param_1 + 0x68) == 0) {
            pdVar7 = (double *)0x0;
          }
          else {
            pdVar7 = (double *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x110) + 0x128);
          }
        }
        else if (iVar2 == 6) {
          if (*(longlong *)(param_1 + 0x68) == 0) {
            pdVar7 = (double *)0x0;
          }
          else if (((char)param_2[0x2c] == '\0') || (param_2[0x21] != 1)) {
            dVar17 = ((*(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0) + 273.15) * 1.3806226e-23)
                     / 1.6021917e-19;
          }
          else {
            dVar17 = (*(double *)(param_2 + 10) * 1.3806226e-23) / 1.6021917e-19;
          }
        }
      }
      else if (iVar2 < 0xe) {
        if (iVar2 == 0xd) {
          if (*(longlong *)(param_1 + 0x68) == 0) {
            pdVar7 = (double *)0x0;
          }
          else if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\f') {
            dVar17 = 1.0;
          }
          else {
            dVar17 = 0.0;
          }
        }
        else if (iVar2 == 0xb) {
          if (*(longlong *)(param_1 + 0x68) == 0) {
            pdVar7 = (double *)0x0;
          }
          else if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\b') {
            dVar17 = 1.0;
          }
          else {
            dVar17 = 0.0;
          }
        }
        else if (iVar2 == 0xc) {
          if (*(longlong *)(param_1 + 0x68) == 0) {
            pdVar7 = (double *)0x0;
          }
          else if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\x06') {
            dVar17 = 1.0;
          }
          else {
            dVar17 = 0.0;
          }
        }
      }
      else if (iVar2 == 0xe) {
        if (*(longlong *)(param_1 + 0x68) == 0) {
          pdVar7 = (double *)0x0;
        }
        else if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x88) & 0x20) == 0) {
          dVar17 = 0.0;
        }
        else {
          dVar17 = 1.0;
        }
      }
      else if (iVar2 - 0xfU < 2) {
        if (*(longlong *)(param_1 + 0x68) == 0) {
          pdVar7 = (double *)0x0;
        }
        else {
          cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x89);
          if ((cVar1 == '\a') || (cVar1 == '\x05')) {
            dVar17 = 1.0;
          }
          else {
            dVar17 = 0.0;
          }
        }
      }
      unaff_XMM6_Qa = dVar17;
      if (dVar17 == 0.0) {
        if (pdVar7 == (double *)0x0) {
          unaff_XMM6_Qa = 0.0;
        }
        else {
          unaff_XMM6_Qa = *pdVar7;
        }
      }
      if (*(char *)(param_1 + 0x27) != '\0') {
        if (dVar17 == 0.0) {
          FUN_01663700(*(undefined8 *)(param_1 + 0x28),pdVar7);
        }
        else {
          FUN_01663ff0(*(undefined8 *)(param_1 + 0x28),dVar17);
        }
      }
      goto LAB_0165848b;
    }
    if (iVar2 == 3) {
      if ((char)param_2[0x2c] == '\0') {
        if (param_2[0x12] + -1 < 0) {
          FUN_01b05000(L"Internal error: function Evaluate",0);
        }
        if (*(longlong *)(param_1 + 0x80) == 0) {
          pdVar7 = (double *)0x0;
        }
        else {
          pdVar7 = (double *)(*(longlong *)(param_1 + 0x80) + (longlong)(param_2[0x12] + -1) * 8);
        }
      }
      else {
        pdVar7 = (double *)FUN_01628c50(param_2);
      }
      if (*(char *)(param_1 + 0x27) != '\0') {
        FUN_01663600(*(undefined8 *)(param_1 + 0x28),param_2);
      }
      if (pdVar7 == (double *)0x0) {
        unaff_XMM6_Qa = 0.0;
      }
      else {
        unaff_XMM6_Qa = *pdVar7;
      }
      goto LAB_0165848b;
    }
    if (iVar2 - 4U < 5) {
      uVar14 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
      local_70 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 4));
      local_78 = uVar14;
      unaff_XMM6_Qa =
           (double)(**(code **)(PTR_PTR_02004f28 + (longlong)*param_2 * 8 + -0x20))(&local_78,1);
      if (*(char *)(param_1 + 0x27) != '\0') {
        FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(PTR_PTR_02004f28 + (longlong)*param_2 * 8 + -0x20),2,0,0,0,1,
                     0xffffffff);
      }
      goto LAB_0165848b;
    }
  }
  else {
    if (iVar2 == 10) {
      unaff_XMM6_Qa = (double)FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
      goto LAB_0165848b;
    }
    if (iVar2 == 0xb) {
      uVar14 = *(undefined8 *)(param_2 + 2);
      uVar15 = FUN_01656f80(param_1,uVar14);
      if (**(int **)(param_2 + 2) - 8U < 0x10) {
        bVar13 = ((int)CONCAT62((int6)((ulonglong)uVar14 >> 0x10),1) <<
                  ((byte)(**(int **)(param_2 + 2) - 8U) & 0x1f) & 0x1ff8U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        local_80[0] = FUN_01656ea0(uVar15,*(undefined1 *)(param_1 + 0x98));
      }
      else {
        local_80[0] = FUN_01656f00(uVar15,*(undefined1 *)(param_1 + 0x98));
      }
      uVar6 = (**(code **)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58))(local_80,0);
      unaff_XMM6_Qa = (double)FUN_01656e20(uVar6,*(undefined1 *)(param_1 + 0x98));
      if (*(char *)(param_1 + 0x27) != '\0') {
        FUN_016639f0(*(undefined8 *)(param_1 + 0x28),1,*(undefined1 *)(param_1 + 0x98));
        FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58),1,0,1,
                     *(undefined1 *)(param_1 + 0x98),1,0xffffffff);
      }
      goto LAB_0165848b;
    }
    if (iVar2 - 0xcU < 3) {
      uVar15 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
      uVar14 = *(undefined8 *)(param_2 + 4);
      uVar16 = FUN_01656f80(param_1,uVar14);
      if (**(int **)(param_2 + 2) - 8U < 0x10) {
        bVar13 = ((int)CONCAT62((int6)((ulonglong)uVar14 >> 0x10),1) <<
                  ((byte)(**(int **)(param_2 + 2) - 8U) & 0x1f) & 0x1ff8U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        uVar10 = (ulonglong)*(byte *)(param_1 + 0x98);
        uVar4 = FUN_01656ea0(uVar15,uVar10);
      }
      else {
        uVar10 = (ulonglong)*(byte *)(param_1 + 0x98);
        uVar4 = FUN_01656f00(uVar15,uVar10);
      }
      if (**(int **)(param_2 + 4) - 8U < 0x10) {
        bVar13 = ((int)CONCAT62((int6)(uVar10 >> 0x10),1) <<
                  ((byte)(**(int **)(param_2 + 4) - 8U) & 0x1f) & 0x1ff8U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        local_87 = FUN_01656ea0(uVar16,*(undefined1 *)(param_1 + 0x98));
      }
      else {
        local_87 = FUN_01656f00(uVar16,*(undefined1 *)(param_1 + 0x98));
      }
      local_88 = uVar4;
      uVar6 = (**(code **)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58))(&local_88,1);
      unaff_XMM6_Qa = (double)FUN_01656e20(uVar6,*(undefined1 *)(param_1 + 0x98));
      if (*(char *)(param_1 + 0x27) != '\0') {
        FUN_016639f0(*(undefined8 *)(param_1 + 0x28),2,*(undefined1 *)(param_1 + 0x98));
        FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58),2,0,1,
                     *(undefined1 *)(param_1 + 0x98),1,0xffffffff);
      }
      goto LAB_0165848b;
    }
    if (iVar2 - 0xfU < 6) {
      uVar14 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 2));
      local_70 = FUN_01656f80(param_1,*(undefined8 *)(param_2 + 4));
      local_78 = uVar14;
      uVar6 = (**(code **)(PTR_PTR_02002d50 + (longlong)*param_2 * 8 + -0x78))(&local_78,1);
      unaff_XMM6_Qa = (double)FUN_01656e20(uVar6,*(undefined1 *)(param_1 + 0x98));
      if (*(char *)(param_1 + 0x27) != '\0') {
        FUN_01663780(*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(PTR_PTR_02002d50 + (longlong)*param_2 * 8 + -0x78),2,0,1,
                     *(undefined1 *)(param_1 + 0x98),1,0xffffffff);
      }
      goto LAB_0165848b;
    }
  }
  uVar14 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71(uVar12,1),L"EvaluateInt: unknown case");
  FUN_004134c0(uVar14);
LAB_0165848b:
  *(double *)(param_2 + 0xe) = unaff_XMM6_Qa;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x118) = unaff_RDI;
  }
  return unaff_XMM6_Qa;
}

