/* Ghidra address: 01658840 */
/* Ghidra symbol: FUN_01658840 */


/* WARNING: Removing unreachable block (ram,0x01658c94) */

double FUN_01658840(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined7 uVar11;
  ulonglong uVar9;
  int *piVar10;
  double *pdVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double unaff_XMM6_Qa;
  double dVar18;
  double dVar19;
  uint in_stack_fffffffffffffec0;
  uint uVar20;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_8c [100];
  
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(char *)((longlong)param_2 + 0x51) != '\0')) {
    dVar19 = *(double *)(param_2 + 0xe);
    if (*(char *)(param_1 + 0x2f) == '\0') {
      return dVar19;
    }
    FUN_01663700(*(undefined8 *)(param_1 + 0x20),param_2 + 0xe);
    return dVar19;
  }
  iVar1 = *param_2;
  uVar11 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar1 < 0xb) {
    if (iVar1 == 10) {
      dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
      return dVar19;
    }
    if (iVar1 < 4) {
      if (iVar1 == 3) {
        if ((char)param_2[0x2c] == '\0') {
          if (param_2[0x12] + -1 < 0) {
            FUN_01b05000(L"Internal error: function Evaluate",0);
          }
          if (*(longlong *)(param_1 + 0x80) == 0) {
            pdVar12 = (double *)0x0;
          }
          else {
            pdVar12 = (double *)(*(longlong *)(param_1 + 0x80) + (longlong)(param_2[0x12] + -1) * 8)
            ;
          }
        }
        else {
          pdVar12 = (double *)FUN_01628c50(param_2);
        }
        if (*(char *)(param_1 + 0x2f) != '\0') {
          FUN_01663600(*(undefined8 *)(param_1 + 0x20),param_2);
        }
        if (pdVar12 == (double *)0x0) {
          dVar19 = 0.0;
        }
        else {
          dVar19 = *pdVar12;
        }
        if (DAT_0210f86c != '\0') {
          return dVar19;
        }
        if (param_2[0x12] != *(int *)(param_1 + 0x88)) {
          return dVar19;
        }
        DAT_0210f86c = 1;
        return dVar19;
      }
      if (iVar1 == 1) {
        dVar19 = *(double *)(param_2 + 10);
        if (*(char *)(param_1 + 0x2f) == '\0') {
          return dVar19;
        }
        FUN_01663700(*(undefined8 *)(param_1 + 0x20),param_2 + 10);
        return dVar19;
      }
      if (iVar1 == 2) {
        pdVar12 = (double *)0x0;
        dVar19 = 0.0;
        iVar1 = param_2[0x12];
        if (iVar1 < 0xb) {
          if (iVar1 == 10) {
            cVar3 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x89);
            if ((cVar3 == '\x01') || (cVar3 == '\x02')) {
              dVar19 = 1.0;
            }
            else {
              dVar19 = 0.0;
            }
          }
          else if (iVar1 < 5) {
            if (iVar1 == 4) {
              if (*(longlong *)(param_1 + 0x68) == 0) {
                pdVar12 = (double *)0x0;
              }
              else if ((char)param_2[0x2c] == '\0') {
                dVar19 = *(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0);
              }
              else {
                dVar19 = *(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0) + 273.15;
              }
            }
            else if (iVar1 == 1) {
              pdVar12 = (double *)(*(longlong *)(param_1 + 0x68) + 0x430);
            }
            else {
              pdVar12 = (double *)0x0;
              if (iVar1 - 2U < 2) {
                pdVar12 = (double *)0x0;
              }
            }
          }
          else if (iVar1 == 5) {
            if (*(longlong *)(param_1 + 0x68) == 0) {
              pdVar12 = (double *)0x0;
            }
            else {
              pdVar12 = (double *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x110) + 0x128);
            }
          }
          else if (iVar1 == 6) {
            if (*(longlong *)(param_1 + 0x68) == 0) {
              pdVar12 = (double *)0x0;
            }
            else if (((char)param_2[0x2c] == '\0') || (param_2[0x21] != 1)) {
              dVar19 = ((*(double *)(*(longlong *)(param_1 + 0x68) + 0x6a0) + 273.15) *
                       1.3806226e-23) / 1.6021917e-19;
            }
            else {
              dVar19 = (*(double *)(param_2 + 10) * 1.3806226e-23) / 1.6021917e-19;
            }
          }
        }
        else if (iVar1 < 0xe) {
          if (iVar1 == 0xd) {
            if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\f') {
              dVar19 = 1.0;
            }
            else {
              dVar19 = 0.0;
            }
          }
          else if (iVar1 == 0xb) {
            if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\b') {
              dVar19 = 1.0;
            }
            else {
              dVar19 = 0.0;
            }
          }
          else if (iVar1 == 0xc) {
            if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x89) == '\x06') {
              dVar19 = 1.0;
            }
            else {
              dVar19 = 0.0;
            }
          }
        }
        else if (iVar1 == 0xe) {
          if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x88) & 0x20) == 0) {
            dVar19 = 0.0;
          }
          else {
            dVar19 = 1.0;
          }
        }
        else if (iVar1 - 0xfU < 2) {
          cVar3 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x89);
          if ((cVar3 == '\a') || (cVar3 == '\x05')) {
            dVar19 = 1.0;
          }
          else {
            dVar19 = 0.0;
          }
        }
        dVar18 = dVar19;
        if (dVar19 == 0.0) {
          if (pdVar12 == (double *)0x0) {
            dVar18 = 0.0;
          }
          else {
            dVar18 = *pdVar12;
          }
        }
        if (*(char *)(param_1 + 0x2f) == '\0') {
          return dVar18;
        }
        if (dVar19 == 0.0) {
          FUN_01663700(*(undefined8 *)(param_1 + 0x20),pdVar12);
          return dVar18;
        }
        FUN_01663ff0(*(undefined8 *)(param_1 + 0x20),dVar19);
        return dVar18;
      }
    }
    else {
      if (iVar1 - 4U < 5) {
        uVar7 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
        local_a0 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 4));
        local_a8 = uVar7;
        dVar19 = (double)(**(code **)(PTR_PTR_02004f28 + (longlong)*param_2 * 8 + -0x20))
                                   (&local_a8,1);
        if (*(char *)(param_1 + 0x2f) == '\0') {
          return dVar19;
        }
        FUN_01663780(*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(PTR_PTR_02004f28 + (longlong)*param_2 * 8 + -0x20),2,0,0,
                     in_stack_fffffffffffffec0 & 0xffffff00,1,0xffffffff);
        return dVar19;
      }
      if (iVar1 == 9) {
        uVar20 = param_2[0x13];
        if (uVar20 == 0xc) {
          dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          local_c0 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
          local_d0 = dVar19;
          local_c8 = uVar7;
          dVar19 = (double)FUN_016aab50(&local_d0,2,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,3,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x2b) {
          dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          local_c0 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
          local_d0 = dVar19;
          local_c8 = uVar7;
          dVar19 = (double)FUN_016aab50(&local_d0,2,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,3,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x28) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar14 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          uVar15 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 8));
          local_d8 = FUN_01658840(param_1,*(undefined8 *)
                                           (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 0x10)
                                 );
          local_f0 = uVar7;
          local_e8 = uVar14;
          local_e0 = uVar15;
          dVar19 = (double)FUN_016aab50(&local_f0,3,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,4,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x38) {
          dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          local_c0 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
          local_d0 = dVar19;
          local_c8 = uVar7;
          dVar19 = (double)FUN_016aab50(&local_d0,2,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,3,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x10) {
          DAT_0210f86c = 0;
          uVar7 = FUN_01658840(param_1,*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 8));
          DAT_0210f86c = 0;
          uVar14 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10)
                                         + 8));
          DAT_0210f86c = 0;
          uVar15 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10)
                                         + 0x10));
          dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
          uVar16 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          uVar17 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
          cVar3 = FUN_01d44bc0(*(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xed6));
          if (cVar3 != '\0') {
            in_stack_fffffffffffffec0 = *(uint *)(param_1 + 0x88);
            local_120 = uVar7;
            local_118 = uVar14;
            local_110 = uVar15;
            local_108 = dVar19;
            local_100 = uVar16;
            local_f8 = uVar17;
            dVar19 = (double)FUN_016aac70(&local_120,5,
                                          *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),
                                          *(undefined8 *)(param_1 + 0x80),
                                          *(undefined1 *)(param_1 + 0x98),in_stack_fffffffffffffec0)
            ;
          }
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,6,
                       *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x3a) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 8));
          uVar14 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10)
                                         + 8));
          uVar15 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10)
                                         + 0x10));
          uVar16 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
          uVar17 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          local_f8 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
          uVar20 = *(uint *)(param_1 + 0x88);
          local_120 = uVar7;
          local_118 = uVar14;
          local_110 = uVar15;
          local_108 = (double)uVar16;
          local_100 = uVar17;
          dVar19 = (double)FUN_016aac70(&local_120,5,
                                        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),
                                        *(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98),uVar20);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,6,
                       *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),0,uVar20 & 0xffffff00,
                       *(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x3b) {
          FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 8)
                      );
          FUN_01658840(param_1,*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 0x10) + 8));
          FUN_01658840(param_1,*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 0x10) + 0x10))
          ;
          local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar20 = *(uint *)(param_1 + 0x88);
          dVar19 = (double)FUN_016aac70(&local_128,0,*(undefined8 *)(param_2 + 4),
                                        *(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98),uVar20);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,1,*(undefined8 *)(param_2 + 4),0
                       ,uVar20 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x39) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 8));
          uVar14 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10)
                                         + 8));
          FUN_01658840(param_1,*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10) + 0x10))
          ;
          uVar15 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
          uVar16 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10));
          uVar20 = *(uint *)(param_1 + 0x88);
          local_f0 = uVar7;
          local_e8 = uVar14;
          local_e0 = uVar15;
          local_d8 = uVar16;
          dVar19 = (double)FUN_016aac70(&local_f0,3,
                                        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),
                                        *(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98),uVar20);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,4,
                       *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),0,uVar20 & 0xffffff00,
                       *(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x1a) {
          lVar6 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x10);
          if (lVar6 == 0) {
            lVar6 = FUN_01656de0(*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          }
          if (lVar6 == 0) {
            dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
            return dVar19;
          }
          FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          bVar4 = FUN_0040c770();
          if (*(char *)(param_1 + 0x2f) != '\0') {
            FUN_016639f0(*(undefined8 *)(param_1 + 0x20),1,*(undefined1 *)(param_1 + 0xa0));
            FUN_01663e30(*(undefined8 *)(param_1 + 0x20),1,local_8c);
          }
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 4) + 8));
          if (*(char *)(param_1 + 0x2f) != '\0') {
            FUN_01663e30(*(undefined8 *)(param_1 + 0x20),2,local_8c);
          }
          local_c0 = FUN_01658840(param_1,lVar6);
          if (*(char *)(param_1 + 0x2f) != '\0') {
            FUN_01663e30(*(undefined8 *)(param_1 + 0x20),3,local_8c);
          }
          local_d0 = (double)bVar4;
          local_c8 = uVar7;
          dVar19 = (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                     (&local_d0,2);
          return dVar19;
        }
        if (uVar20 - 0x30 < 8) {
          uVar8 = (int)CONCAT71(uVar11,1) << ((byte)(uVar20 - 0x30) & 0x1f);
          bVar13 = (uVar8 & 3) != 0;
          piVar10 = (int *)(ulonglong)uVar8;
        }
        else {
          bVar13 = false;
          piVar10 = param_2;
        }
        if (bVar13) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 8));
          uVar14 = FUN_01658840(param_1,*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(param_2 + 2) + 0x10) + 0x10));
          uVar15 = FUN_01658840(param_1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8));
          local_d8 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 4));
          uVar20 = *(uint *)(param_1 + 0x88);
          local_f0 = uVar7;
          local_e8 = uVar14;
          local_e0 = uVar15;
          dVar19 = (double)FUN_016aac70(&local_f0,3,
                                        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),
                                        *(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98),uVar20);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,4,
                       *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10),0,uVar20 & 0xffffff00,
                       *(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x32) {
          local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          dVar19 = (double)FUN_016aab50(&local_128,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,1,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x33) {
          dVar19 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          cVar3 = FUN_01d44bc0(*(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xed6));
          if (cVar3 != '\0') {
            in_stack_fffffffffffffec0 = *(uint *)(param_1 + 0x88);
            local_128 = dVar19;
            dVar19 = (double)FUN_016aac70(&local_128,0,*(undefined8 *)(param_2 + 4),
                                          *(undefined8 *)(param_1 + 0x80),
                                          *(undefined1 *)(param_1 + 0x98),in_stack_fffffffffffffec0)
            ;
          }
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,1,*(undefined8 *)(param_2 + 4),0
                       ,in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 - 0x38 < 8) {
          uVar8 = (int)CONCAT71((int7)((ulonglong)piVar10 >> 8),1) << ((byte)(uVar20 - 0x38) & 0x1f)
          ;
          piVar10 = (int *)(ulonglong)uVar8;
          bVar13 = (uVar8 & 0x70) != 0;
        }
        else {
          bVar13 = false;
        }
        if (bVar13) {
          dVar19 = (double)FUN_016aab50(&DAT_0165a380,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,0,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 < 0x40) {
          piVar10 = (int *)(1L << ((byte)uVar20 & 0x3f));
          bVar13 = ((ulonglong)piVar10 & 0x2004000800c0) != 0;
        }
        else {
          bVar13 = false;
        }
        if (bVar13) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          local_a0 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 4));
          local_a8 = uVar7;
          dVar19 = (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                     (&local_a8,1);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8),2,0,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,1,0xffffffff);
          return dVar19;
        }
        if (uVar20 - 0x18 < 8) {
          bVar13 = ((int)CONCAT71((int7)((ulonglong)piVar10 >> 8),1) <<
                    ((byte)(uVar20 - 0x18) & 0x1f) & 3U) != 0;
        }
        else {
          bVar13 = false;
        }
        if (bVar13) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          local_a0 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 4));
          local_a8 = uVar7;
          dVar19 = (double)FUN_016aab50(&local_a8,1,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,2,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x34) {
          local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          dVar19 = (double)FUN_016aab50(&local_128,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,1,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x35) {
          local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          dVar19 = (double)FUN_016aab50(&local_128,0,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,1,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x36) {
          local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar20 = *(uint *)(param_1 + 0x88);
          dVar19 = (double)FUN_016aac70(&local_128,0,*(undefined8 *)(param_2 + 4),
                                        *(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98),uVar20);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,1,*(undefined8 *)(param_2 + 4),0
                       ,uVar20 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x37) {
          local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          uVar20 = *(uint *)(param_1 + 0x88);
          dVar19 = (double)FUN_016aac70(&local_128,0,*(undefined8 *)(param_2 + 4),
                                        *(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98),uVar20);
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aac70,1,*(undefined8 *)(param_2 + 4),0
                       ,uVar20 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x88));
          return dVar19;
        }
        if (uVar20 == 0x21) {
          uVar7 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
          local_a0 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 4));
          local_a8 = uVar7;
          dVar19 = (double)FUN_016aab50(&local_a8,1,param_2,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined1 *)(param_1 + 0x98));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01663780(*(undefined8 *)(param_1 + 0x20),FUN_016aab50,1,param_2,0,
                       in_stack_fffffffffffffec0 & 0xffffff00,*(undefined8 *)(param_1 + 0x80),
                       0xffffffff);
          return dVar19;
        }
        if (uVar20 == 0x27) {
          FUN_01b05000(L"FNCT_CROSS: error",0);
          return unaff_XMM6_Qa;
        }
        if (uVar20 == 0x29) {
          dVar19 = (double)FUN_01656f30(param_2,*(undefined8 *)(param_1 + 0x68));
          if (*(char *)(param_1 + 0x2f) == '\0') {
            return dVar19;
          }
          FUN_01b05000(L"FNCT_GETNATURE fn is not implemented in precomp mode, turn off ModelCompilationEnabled in Tina.ini"
                       ,0);
          return dVar19;
        }
        local_128 = (double)FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
        dVar19 = (double)(**(code **)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8))
                                   (&local_128,0);
        if (*(char *)(param_1 + 0x2f) == '\0') {
          return dVar19;
        }
        FUN_01663780(*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(PTR_PTR_02003958 + (longlong)param_2[0x13] * 8 + -8),1,0,0,
                     in_stack_fffffffffffffec0 & 0xffffff00,1,0xffffffff);
        return dVar19;
      }
    }
  }
  else {
    if (iVar1 == 0xb) {
      uVar7 = *(undefined8 *)(param_2 + 2);
      uVar14 = FUN_01658840(param_1,uVar7);
      if (**(int **)(param_2 + 2) - 8U < 0x10) {
        bVar13 = ((int)CONCAT62((int6)((ulonglong)uVar7 >> 0x10),1) <<
                  ((byte)(**(int **)(param_2 + 2) - 8U) & 0x1f) & 0x1ff8U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        local_b0[0] = FUN_01656ea0(uVar14,*(undefined1 *)(param_1 + 0xa0));
      }
      else {
        local_b0[0] = FUN_01656f00(uVar14,*(undefined1 *)(param_1 + 0xa0));
      }
      uVar5 = (**(code **)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58))(local_b0,0);
      dVar19 = (double)FUN_01656e20(uVar5,*(undefined1 *)(param_1 + 0xa0));
      if (*(char *)(param_1 + 0x2f) == '\0') {
        return dVar19;
      }
      FUN_016639f0(*(undefined8 *)(param_1 + 0x20),1,*(undefined1 *)(param_1 + 0xa0));
      FUN_01663780(*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58),1,0,1,
                   *(undefined1 *)(param_1 + 0xa0),1,0xffffffff);
      return dVar19;
    }
    if (iVar1 - 0xcU < 3) {
      uVar14 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
      uVar7 = *(undefined8 *)(param_2 + 4);
      uVar15 = FUN_01658840(param_1,uVar7);
      if (**(int **)(param_2 + 2) - 8U < 0x10) {
        bVar13 = ((int)CONCAT62((int6)((ulonglong)uVar7 >> 0x10),1) <<
                  ((byte)(**(int **)(param_2 + 2) - 8U) & 0x1f) & 0x1ff8U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        uVar9 = (ulonglong)*(byte *)(param_1 + 0xa0);
        uVar2 = FUN_01656ea0(uVar14,uVar9);
      }
      else {
        uVar9 = (ulonglong)*(byte *)(param_1 + 0xa0);
        uVar2 = FUN_01656f00(uVar14,uVar9);
      }
      if (**(int **)(param_2 + 4) - 8U < 0x10) {
        bVar13 = ((int)CONCAT62((int6)(uVar9 >> 0x10),1) <<
                  ((byte)(**(int **)(param_2 + 4) - 8U) & 0x1f) & 0x1ff8U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        local_b7 = FUN_01656ea0(uVar15,*(undefined1 *)(param_1 + 0xa0));
      }
      else {
        local_b7 = FUN_01656f00(uVar15,*(undefined1 *)(param_1 + 0xa0));
      }
      local_b8 = uVar2;
      uVar5 = (**(code **)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58))(&local_b8,1);
      dVar19 = (double)FUN_01656e20(uVar5,*(undefined1 *)(param_1 + 0xa0));
      if (*(char *)(param_1 + 0x2f) == '\0') {
        return dVar19;
      }
      FUN_016639f0(*(undefined8 *)(param_1 + 0x20),2,*(undefined1 *)(param_1 + 0xa0));
      FUN_01663780(*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(PTR_PTR_020057a0 + (longlong)*param_2 * 8 + -0x58),2,0,1,
                   *(undefined1 *)(param_1 + 0xa0),1,0xffffffff);
      return dVar19;
    }
    if (iVar1 - 0xfU < 6) {
      uVar7 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 2));
      local_a0 = FUN_01658840(param_1,*(undefined8 *)(param_2 + 4));
      local_a8 = uVar7;
      uVar5 = (**(code **)(PTR_PTR_02002d50 + (longlong)*param_2 * 8 + -0x78))(&local_a8,1);
      dVar19 = (double)FUN_01656e20(uVar5,*(undefined1 *)(param_1 + 0xa0));
      if (*(char *)(param_1 + 0x2f) == '\0') {
        return dVar19;
      }
      FUN_01663780(*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(PTR_PTR_02002d50 + (longlong)*param_2 * 8 + -0x78),2,0,1,
                   *(undefined1 *)(param_1 + 0xa0),1,0xffffffff);
      return dVar19;
    }
    if (iVar1 == 0x15) {
      pdVar12 = (double *)(param_2 + 10);
      if (pdVar12 == (double *)0x0) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = *pdVar12;
      }
      if (*(char *)(param_1 + 0x2f) == '\0') {
        return dVar19;
      }
      FUN_01663700(*(undefined8 *)(param_1 + 0x20),pdVar12);
      return dVar19;
    }
  }
  uVar7 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71(uVar11,1),L"EvaluateExInt: unknown case");
  FUN_004134c0(uVar7);
  return unaff_XMM6_Qa;
}

