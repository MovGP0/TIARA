/* Ghidra address: 01cdac70 */
/* Ghidra symbol: FUN_01cdac70 */


void FUN_01cdac70(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong in_stack_fffffffffffffea8;
  undefined1 *puVar20;
  double *pdVar21;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  double local_a8;
  undefined8 local_a0;
  char local_91;
  int local_90;
  int local_8c [23];
  
  if ((param_1[0xb] != 0) && (param_1[0xc] != 0)) {
    (**(code **)(*(longlong *)param_1[0xb] + 0xb8))((longlong *)param_1[0xb],&local_e8);
    local_d0 = local_e8;
    (**(code **)(*(longlong *)param_1[0xb] + 0xb8))((longlong *)param_1[0xb],&local_e8);
    local_c8 = local_e0 + 5;
    (**(code **)(*(longlong *)param_1[0xc] + 0xb8))((longlong *)param_1[0xc],&local_e8);
    local_cc = local_e4;
    (**(code **)(*(longlong *)param_1[0xc] + 0xb8))((longlong *)param_1[0xc],&local_e8);
    local_c4 = local_dc + 5;
    (**(code **)(*param_1 + 0xb0))(param_1,&local_d0);
    (**(code **)(*param_1 + 0x68))(param_1);
    if (*(char *)(param_1[0xf] + 0x58) == '\x06') {
      dVar14 = 1.0;
      iVar1 = (**(code **)(**(longlong **)(param_1[0xf] + 0x80) + 0x28))();
      iVar10 = 0;
      if (-1 < iVar1 + -1) {
        do {
          lVar6 = (**(code **)(**(longlong **)(param_1[0xf] + 0x80) + 0x30))
                            (*(longlong **)(param_1[0xf] + 0x80),iVar10);
          uVar12 = FUN_0040c850(*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xb8));
          uVar12 = FUN_00b90620(dVar14,uVar12);
          uVar13 = FUN_0040c850(*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xc0));
          uVar12 = FUN_00b90620(uVar12,uVar13);
          uVar13 = FUN_0040c850(*(undefined8 *)(*(longlong *)(lVar6 + 0x100) + 0xb8));
          uVar12 = FUN_00b90620(uVar12,uVar13);
          uVar13 = FUN_0040c850(*(undefined8 *)(*(longlong *)(lVar6 + 0x100) + 0xc0));
          dVar14 = (double)FUN_00b90620(uVar12,uVar13);
          iVar10 = iVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00b905e0(*(undefined4 *)(param_1[0xb] + 0x74),*(undefined4 *)(param_1[0xc] + 0x74));
      iVar1 = *(int *)(param_1[0xb] + 0x74);
      iVar10 = 1;
      if (0 < iVar1) {
        do {
          FUN_01cda1a0(param_1,0,0,(double)iVar10 * (dVar14 / (double)*(int *)(param_1[0xb] + 0x74))
                       ,in_stack_fffffffffffffea8 & 0xffffffffffffff00);
          FUN_00c44460(&local_e8,0,0);
          FUN_00c44460(local_f8,0,0);
          FUN_00c44460(local_108,0x3ff0000000000000,0);
          puVar20 = local_108;
          FUN_01a90300(&local_a8,&local_e8,
                       (double)iVar10 * (dVar14 / (double)*(int *)(param_1[0xb] + 0x74)),local_f8,
                       puVar20,0xc0f86a0000000000,0xc0f86a0000000000,0x40f86a0000000000,
                       0x40f86a0000000000,1);
          uVar5 = (undefined4)((ulonglong)puVar20 >> 0x20);
          FUN_01cceeb0(param_1[0xc],
                       (double)iVar10 * (dVar14 / (double)*(int *)(param_1[0xb] + 0x74)));
          dVar15 = (double)FUN_0040c850();
          uVar2 = FUN_01cd60f0(param_1[0xb],local_a8 - dVar15);
          uVar3 = FUN_01cd60f0(param_1[0xc],local_a0);
          uVar7 = FUN_00498310(uVar2,uVar3);
          local_c0._4_4_ = (undefined4)(uVar7 >> 0x20);
          in_stack_fffffffffffffea8 = CONCAT44(uVar5,local_c0._4_4_);
          local_c0 = uVar7;
          FUN_01ccf000(param_1[0xb],
                       (double)iVar10 * (dVar14 / (double)*(int *)(param_1[0xb] + 0x74)),
                       0x4056800000000000,uVar7 & 0xffffffff,in_stack_fffffffffffffea8);
          iVar10 = iVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar1 = *(int *)(param_1[0xc] + 0x74);
      iVar10 = 0;
      if (-1 < iVar1 + -1) {
        do {
          dVar15 = (double)FUN_0040bcd0(((double)(iVar10 * 2) * 3.141592653589793) /
                                        (double)*(int *)(param_1[0xc] + 0x74));
          dVar16 = (double)FUN_0040bdd0(((double)(iVar10 * 2) * 3.141592653589793) /
                                        (double)*(int *)(param_1[0xc] + 0x74));
          FUN_01cda090(param_1,0,0,dVar14 * dVar15,dVar14 * dVar16);
          FUN_00c44460(&local_e8,0,0);
          FUN_01cced70(param_1[0xc],(double)(iVar10 * 0x168) / (double)*(int *)(param_1[0xc] + 0x74)
                      );
          dVar15 = (double)FUN_0040c850();
          FUN_00c44460(local_f8,0,0);
          dVar16 = (double)FUN_0040bcd0(((double)(iVar10 * 2) * 3.141592653589793) /
                                        (double)*(int *)(param_1[0xc] + 0x74));
          dVar17 = (double)FUN_0040bdd0(((double)(iVar10 * 2) * 3.141592653589793) /
                                        (double)*(int *)(param_1[0xc] + 0x74));
          FUN_00c44460(local_108,dVar14 * dVar16,dVar14 * dVar17);
          puVar20 = local_108;
          FUN_01a90300(&local_a8,&local_e8,dVar14 - dVar15,local_f8,puVar20,0xc0f86a0000000000,
                       0xc0f86a0000000000,0x40f86a0000000000,0x40f86a0000000000,1);
          uVar5 = (undefined4)((ulonglong)puVar20 >> 0x20);
          uVar2 = FUN_01cd60f0(param_1[0xb],local_a8);
          uVar3 = FUN_01cd60f0(param_1[0xc],local_a0);
          local_c0 = FUN_00498310(uVar2,uVar3);
          lVar6 = FUN_0040c770((double)(iVar10 * 0x168) / (double)*(int *)(param_1[0xc] + 0x74));
          lVar8 = FUN_0040c770((double)(iVar10 * 0x168) / (double)*(int *)(param_1[0xc] + 0x74));
          FUN_01ccf000(param_1[0xc],(double)lVar6,(double)lVar8,local_c0 & 0xffffffff,
                       CONCAT44(uVar5,local_c0._4_4_));
          iVar10 = iVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else if (*(char *)(param_1[0xf] + 0x58) == '\x05') {
      if ((((*(double *)(param_1[0xb] + 0xb8) <= -1.0 && *(double *)(param_1[0xb] + 0xb8) != -1.0)
           || (1.0 < *(double *)(param_1[0xb] + 0xc0))) ||
          (*(double *)(param_1[0xc] + 0xb8) <= -1.0 && *(double *)(param_1[0xc] + 0xb8) != -1.0)) ||
         (1.0 < *(double *)(param_1[0xc] + 0xc0))) {
        iVar1 = 1;
        piVar11 = &DAT_01fef494;
        do {
          dVar14 = (double)-*piVar11;
          dVar15 = (double)FUN_01cce940(param_1[0xb],-dVar14,local_8c);
          iVar10 = local_8c[0] + -1;
          local_8c[0] = iVar10;
          while (0 < local_8c[0]) {
            if ((((iVar10 == 10) && (local_8c[0] % 2 == 0)) ||
                ((iVar10 == 0x14 && (local_8c[0] % 4 == 0)))) ||
               ((0x14 < iVar10 && (local_8c[0] % (iVar10 / 10) == 0)))) {
              FUN_01cda320(param_1,dVar14,0,1);
            }
            else {
              FUN_01cda320(param_1,dVar14,0,0);
            }
            dVar14 = dVar14 - dVar15;
            local_8c[0] = local_8c[0] + -1;
            if ((((iVar10 < 6) || ((iVar10 == 10 && (local_8c[0] % 2 == 0)))) ||
                ((iVar10 == 0x14 && (local_8c[0] % 4 == 0)))) ||
               ((0x14 < iVar10 && (local_8c[0] % (iVar10 / 10) == 0)))) {
              FUN_00c44460(&local_e8,dVar14 / (dVar14 + 1.0),0);
              FUN_00c44460(local_f8,0xbff0000000000000,0);
              FUN_00c44460(local_108,0x3ff0000000000000,0);
              FUN_01a8f370(&local_a8,&local_e8,1.0 / (dVar14 + 1.0),local_f8,local_108,
                           0xc0f86a0000000000,0xc0f86a0000000000,0x40f86a0000000000,
                           0x40f86a0000000000,1);
              uVar2 = FUN_01cd60f0(param_1[0xb],local_a8);
              uVar3 = FUN_01cd60f0(param_1[0xc],local_a0);
              local_c0 = FUN_00498310(uVar2,uVar3);
              pdVar21 = &local_a8;
              FUN_01a909a0(local_b8,dVar14 / (dVar14 + 1.0),0,1.0 / (dVar14 + 1.0),pdVar21,&local_a0
                           ,0);
              uVar2 = (undefined4)((ulonglong)pdVar21 >> 0x20);
              dVar16 = (double)FUN_00c445d0(local_b8);
              FUN_01ccf000(param_1[0xb],dVar14,dVar16 * 57.29577951308232,local_c0 & 0xffffffff,
                           CONCAT44(uVar2,local_c0._4_4_));
            }
          }
          piVar11 = piVar11 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar1 = 0;
      piVar11 = &DAT_01fef494;
      do {
        dVar14 = (double)*piVar11;
        dVar15 = (double)FUN_01cce940(param_1[0xb],dVar14,local_8c);
        iVar10 = local_8c[0];
        while (0 < local_8c[0]) {
          if ((((iVar10 == 10) && (local_8c[0] % 2 == 0)) ||
              ((iVar10 == 0x14 && (local_8c[0] % 4 == 0)))) ||
             ((0x14 < iVar10 && (local_8c[0] % (iVar10 / 10) == 0)))) {
            FUN_01cda320(param_1,dVar14,0,1);
          }
          else {
            FUN_01cda320(param_1,dVar14,0,0);
          }
          dVar14 = dVar14 + dVar15;
          local_8c[0] = local_8c[0] + -1;
          if ((((iVar10 < 6) || ((iVar10 == 10 && (local_8c[0] % 2 == 0)))) ||
              ((iVar10 == 0x14 && (local_8c[0] % 4 == 0)))) ||
             ((0x14 < iVar10 && (local_8c[0] % (iVar10 / 10) == 0)))) {
            FUN_00c44460(&local_e8,dVar14 / (dVar14 + 1.0),0);
            FUN_00c44460(local_f8,0xbff0000000000000,0);
            FUN_00c44460(local_108,0x3ff0000000000000,0);
            lVar6 = param_1[0xb];
            iVar4 = FUN_01cd60f0(lVar6,*(undefined8 *)(lVar6 + 0xb8));
            uVar12 = FUN_01cd62b0(lVar6,iVar4 + 0x19);
            lVar6 = param_1[0xc];
            iVar4 = FUN_01cd60f0(lVar6,*(undefined8 *)(lVar6 + 0xb8));
            uVar13 = FUN_01cd62b0(lVar6,iVar4 + -0x19);
            lVar6 = param_1[0xb];
            iVar4 = FUN_01cd60f0(lVar6,*(undefined8 *)(lVar6 + 0xc0));
            uVar18 = FUN_01cd62b0(lVar6,iVar4 + -0x19);
            lVar6 = param_1[0xc];
            iVar4 = FUN_01cd60f0(lVar6,*(undefined8 *)(lVar6 + 0xc0));
            uVar19 = FUN_01cd62b0(lVar6,iVar4 + 0x19);
            FUN_01a8f370(&local_a8,&local_e8,1.0 / (dVar14 + 1.0),local_f8,local_108,uVar12,uVar13,
                         uVar18,uVar19,1);
            uVar2 = FUN_01cd60f0(param_1[0xb],local_a8);
            uVar3 = FUN_01cd60f0(param_1[0xc],local_a0);
            local_c0 = FUN_00498310(uVar2,uVar3);
            pdVar21 = &local_a8;
            FUN_01a909a0(local_b8,dVar14 / (dVar14 + 1.0),0,1.0 / (dVar14 + 1.0),pdVar21,&local_a0,0
                        );
            uVar2 = (undefined4)((ulonglong)pdVar21 >> 0x20);
            dVar16 = (double)FUN_00c445d0(local_b8);
            FUN_01ccf000(param_1[0xb],dVar14,dVar16 * 57.29577951308232,local_c0 & 0xffffffff,
                         CONCAT44(uVar2,local_c0._4_4_));
          }
        }
        dVar14 = (double)*piVar11;
        dVar15 = (double)FUN_01cce940(param_1[0xc],dVar14,&local_90);
        iVar10 = local_90;
        while (0 < local_90) {
          if ((((iVar10 == 10) && (local_90 % 2 == 0)) || ((iVar10 == 0x14 && (local_90 % 4 == 0))))
             || ((0x14 < iVar10 && (local_90 % (iVar10 / 10) == 0)))) {
            FUN_01cda7b0(param_1,dVar14,0,1);
            FUN_01cda7b0(param_1,-dVar14);
          }
          else {
            FUN_01cda7b0(param_1,dVar14,0);
            FUN_01cda7b0(param_1,-dVar14);
          }
          dVar14 = dVar14 + dVar15;
          local_90 = local_90 + -1;
          if ((((iVar10 < 6) || ((iVar10 == 10 && (local_90 % 2 == 0)))) ||
              ((iVar10 == 0x14 && (local_90 % 4 == 0)))) ||
             ((0x14 < iVar10 && (local_90 % (iVar10 / 10) == 0)))) {
            FUN_00c44460(&local_e8,0,0);
            FUN_00c44460(local_f8,0x3ff0000000000000,1.0 / dVar14);
            lVar6 = param_1[0xc];
            uVar12 = FUN_01cced70(lVar6,dVar14);
            FUN_01a8e5f0(&local_a8,&local_e8,0x3ff0000000000000,local_f8,1.0 / dVar14,
                         *(undefined8 *)(param_1[0xb] + 0xb8),*(undefined8 *)(lVar6 + 0xb8),
                         *(undefined8 *)(param_1[0xb] + 0xc0),*(undefined8 *)(lVar6 + 0xc0),uVar12,0
                         ,&local_91);
            if (local_91 == '\0') {
              pdVar21 = &local_a8;
              FUN_01a909a0(local_b8,0x3ff0000000000000,1.0 / dVar14,1.0 / dVar14,pdVar21,&local_a0,0
                          );
              uVar2 = (undefined4)((ulonglong)pdVar21 >> 0x20);
            }
            else {
              uVar12 = FUN_01cced70(param_1[0xc],dVar14);
              pdVar21 = &local_a8;
              FUN_01a909a0(local_b8,0x3ff0000000000000,1.0 / dVar14,1.0 / dVar14,pdVar21,&local_a0,
                           uVar12);
              uVar2 = (undefined4)((ulonglong)pdVar21 >> 0x20);
            }
            uVar3 = FUN_01cd60f0(param_1[0xb],local_a8);
            uVar5 = FUN_01cd60f0(param_1[0xc],local_a0);
            local_c0 = FUN_00498310(uVar3,uVar5);
            dVar16 = (double)FUN_00c445d0(local_b8);
            FUN_01ccf000(param_1[0xc],dVar14,dVar16 * 57.29577951308232,local_c0 & 0xffffffff,
                         CONCAT44(uVar2,local_c0._4_4_));
            FUN_00c44460(&local_e8,0,0);
            FUN_00c44460(local_f8,0x3ff0000000000000,-1.0 / dVar14);
            uVar12 = FUN_01cced70(param_1[0xc],-dVar14);
            FUN_01a8e5f0(&local_a8,&local_e8,0x3ff0000000000000,local_f8,1.0 / dVar14,
                         *(undefined8 *)(param_1[0xb] + 0xb8),*(undefined8 *)(param_1[0xc] + 0xb8),
                         *(undefined8 *)(param_1[0xb] + 0xc0),*(undefined8 *)(param_1[0xc] + 0xc0),
                         uVar12,0,&local_91);
            if (local_91 == '\0') {
              pdVar21 = &local_a8;
              FUN_01a909a0(local_b8,0x3ff0000000000000,-1.0 / dVar14,1.0 / dVar14,pdVar21,&local_a0,
                           0);
              uVar2 = (undefined4)((ulonglong)pdVar21 >> 0x20);
            }
            else {
              uVar12 = FUN_01cced70(param_1[0xc],-dVar14);
              pdVar21 = &local_a8;
              FUN_01a909a0(local_b8,0x3ff0000000000000,-1.0 / dVar14,1.0 / dVar14,pdVar21,&local_a0,
                           uVar12);
              uVar2 = (undefined4)((ulonglong)pdVar21 >> 0x20);
            }
            uVar3 = FUN_01cd60f0(param_1[0xb],local_a8);
            uVar5 = FUN_01cd60f0(param_1[0xc],local_a0);
            local_c0 = FUN_00498310(uVar3,uVar5);
            dVar16 = (double)FUN_00c445d0(local_b8);
            FUN_01ccf000(param_1[0xc],-dVar14,dVar16 * 57.29577951308232,local_c0 & 0xffffffff,
                         CONCAT44(uVar2,local_c0._4_4_));
          }
        }
        FUN_01cda320(param_1,(double)(int)(&DAT_01fef494)[iVar1 + 1],1,0);
        FUN_01cda7b0(param_1,(double)(int)(&DAT_01fef494)[iVar1 + 1],1);
        FUN_01cda7b0(param_1,(double)(int)-(&DAT_01fef494)[iVar1 + 1],1);
        FUN_01cda320(param_1,(double)*piVar11,0);
        FUN_01cda7b0(param_1,(double)*piVar11,0);
        FUN_01cda7b0(param_1,(double)-*piVar11,0);
        FUN_01cdac30(param_1);
        iVar1 = iVar1 + 1;
        piVar11 = piVar11 + 1;
      } while (iVar1 != 4);
      FUN_01cda320(param_1,0,0,0);
    }
    else {
      iVar1 = *(int *)(param_1[0xb] + 0x74);
      iVar10 = 0;
      if (-1 < iVar1 + -1) {
        do {
          if (0 < iVar10) {
            lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
            lVar6 = param_1[0xb];
            uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                 (double)(iVar10 * (*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))
                                         ) / (double)*(int *)(lVar6 + 0x74));
            FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xe8));
            uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                 (double)(iVar10 * (*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))
                                         ) / (double)*(int *)(lVar6 + 0x74));
            FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xec));
            uVar2 = FUN_01cdf670(param_1[0xf]);
            FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
            FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
            (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"GridLine",lVar8);
          }
          lVar6 = param_1[0xb];
          if (*(char *)(lVar6 + 0x70) == '\x02') {
            uVar9 = *(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8);
            if ((double)(int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) /
                (double)*(int *)(lVar6 + 0x74) <= 60.0) {
              lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,
                                   CONCAT71((uint7)(int7)(int3)(uVar9 >> 8) >> 0x20,1));
              lVar6 = param_1[0xb];
              dVar14 = (double)FUN_00c43d10(0x4008000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xe8));
              dVar14 = (double)FUN_00c43d10(0x4008000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xec));
              uVar2 = FUN_01cdf670(param_1[0xf]);
              FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
              FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"GridLine",lVar8);
              lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              lVar6 = param_1[0xb];
              dVar14 = (double)FUN_00c43d10(0x4018000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xe8));
              dVar14 = (double)FUN_00c43d10(0x4018000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xec));
              uVar2 = FUN_01cdf670(param_1[0xf]);
              FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
              FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"GridLine",lVar8);
              lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              lVar6 = param_1[0xb];
              dVar14 = (double)FUN_00c43d10(0x4022000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xe8));
              dVar14 = (double)FUN_00c43d10(0x4022000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xec));
              uVar2 = FUN_01cdf670(param_1[0xf]);
              FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
              FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"GridLine",lVar8);
            }
            else {
              iVar4 = 1;
              do {
                lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                lVar6 = param_1[0xb];
                dVar14 = (double)FUN_00c43d10((double)iVar4);
                uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                     (((double)iVar10 + dVar14) *
                                     (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                     (double)*(int *)(lVar6 + 0x74));
                FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xe8));
                dVar14 = (double)FUN_00c43d10((double)iVar4);
                uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                     (((double)iVar10 + dVar14) *
                                     (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                     (double)*(int *)(lVar6 + 0x74));
                FUN_01d2c460(lVar8,uVar2,*(undefined4 *)(param_1[0xc] + 0xec));
                uVar2 = FUN_01cdf670(param_1[0xf]);
                FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
                FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
                (**(code **)(*(longlong *)param_1[9] + 0x80))
                          ((longlong *)param_1[9],L"GridLine",lVar8);
                iVar4 = iVar4 + 1;
              } while (iVar4 != 10);
            }
          }
          iVar10 = iVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
      lVar6 = param_1[0xb];
      FUN_01d2c460(lVar8,*(undefined4 *)(lVar6 + 0xe8),*(undefined4 *)(param_1[0xc] + 0xe8));
      FUN_01d2c460(lVar8,*(undefined4 *)(lVar6 + 0xe8),*(undefined4 *)(param_1[0xc] + 0xec));
      uVar2 = FUN_01cdf670(*(undefined8 *)(lVar6 + 0x68));
      FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"GridLine",lVar8);
      lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
      lVar6 = param_1[0xb];
      FUN_01d2c460(lVar8,*(undefined4 *)(lVar6 + 0xec),*(undefined4 *)(param_1[0xc] + 0xe8));
      FUN_01d2c460(lVar8,*(undefined4 *)(lVar6 + 0xec),*(undefined4 *)(param_1[0xc] + 0xec));
      uVar2 = FUN_01cdf670(*(undefined8 *)(lVar6 + 0x68));
      FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"GridLine",lVar8);
      iVar1 = *(int *)(param_1[0xc] + 0x74);
      iVar10 = 0;
      if (-1 < iVar1 + -1) {
        do {
          if (0 < iVar10) {
            lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
            lVar6 = param_1[0xc];
            uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                 (double)(iVar10 * (*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))
                                         ) / (double)*(int *)(lVar6 + 0x74));
            FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),uVar2);
            uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                 (double)(iVar10 * (*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))
                                         ) / (double)*(int *)(lVar6 + 0x74));
            FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),uVar2);
            uVar2 = FUN_01cdf670(param_1[0xf]);
            FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
            FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
            (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"GridLine",lVar8);
          }
          lVar6 = param_1[0xc];
          if (*(char *)(lVar6 + 0x70) == '\x02') {
            uVar9 = *(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8);
            if ((double)(int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) /
                (double)*(int *)(lVar6 + 0x74) <= 60.0) {
              lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,
                                   CONCAT71((uint7)(int7)(int3)(uVar9 >> 8) >> 0x20,1));
              lVar6 = param_1[0xc];
              dVar14 = (double)FUN_00c43d10(0x4008000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),uVar2);
              dVar14 = (double)FUN_00c43d10(0x4008000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),uVar2);
              uVar2 = FUN_01cdf670(param_1[0xf]);
              FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
              FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"GridLine",lVar8);
              lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              lVar6 = param_1[0xc];
              dVar14 = (double)FUN_00c43d10(0x4018000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),uVar2);
              dVar14 = (double)FUN_00c43d10(0x4018000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),uVar2);
              uVar2 = FUN_01cdf670(param_1[0xf]);
              FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
              FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"GridLine",lVar8);
              lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              lVar6 = param_1[0xc];
              dVar14 = (double)FUN_00c43d10(0x4022000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),uVar2);
              dVar14 = (double)FUN_00c43d10(0x4022000000000000);
              uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                   (((double)iVar10 + dVar14) *
                                   (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                   (double)*(int *)(lVar6 + 0x74));
              FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),uVar2);
              uVar2 = FUN_01cdf670(param_1[0xf]);
              FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
              FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"GridLine",lVar8);
            }
            else {
              iVar4 = 1;
              do {
                lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                lVar6 = param_1[0xc];
                dVar14 = (double)FUN_00c43d10((double)iVar4);
                uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                     (((double)iVar10 + dVar14) *
                                     (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                     (double)*(int *)(lVar6 + 0x74));
                FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),uVar2);
                dVar14 = (double)FUN_00c43d10((double)iVar4);
                uVar2 = FUN_0040c770((double)*(int *)(lVar6 + 0xe8) +
                                     (((double)iVar10 + dVar14) *
                                     (double)(*(int *)(lVar6 + 0xec) - *(int *)(lVar6 + 0xe8))) /
                                     (double)*(int *)(lVar6 + 0x74));
                FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),uVar2);
                uVar2 = FUN_01cdf670(param_1[0xf]);
                FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
                FUN_005fd670(*(undefined8 *)(lVar8 + 0x60),2);
                (**(code **)(*(longlong *)param_1[9] + 0x80))
                          ((longlong *)param_1[9],L"GridLine",lVar8);
                iVar4 = iVar4 + 1;
              } while (iVar4 != 10);
            }
          }
          iVar10 = iVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
      lVar6 = param_1[0xc];
      FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),*(undefined4 *)(lVar6 + 0xe8));
      FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),*(undefined4 *)(lVar6 + 0xe8));
      uVar2 = FUN_01cdf670(*(undefined8 *)(lVar6 + 0x68));
      FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"GridLine",lVar8);
      lVar8 = FUN_01d2b190(&PTR_FUN_01d29210,1);
      lVar6 = param_1[0xc];
      FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xe8),*(undefined4 *)(lVar6 + 0xec));
      FUN_01d2c460(lVar8,*(undefined4 *)(param_1[0xb] + 0xec),*(undefined4 *)(lVar6 + 0xec));
      uVar2 = FUN_01cdf670(*(undefined8 *)(lVar6 + 0x68));
      FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x60),uVar2);
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"GridLine",lVar8);
    }
  }
  return;
}

