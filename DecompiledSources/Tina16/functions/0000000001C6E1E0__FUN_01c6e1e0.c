/* Ghidra address: 01c6e1e0 */
/* Ghidra symbol: FUN_01c6e1e0 */


void FUN_01c6e1e0(longlong param_1,undefined8 param_2,short *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 in_stack_ffffffffffffff28;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff30;
  undefined1 *puVar17;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_7d;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar10 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar10 != 0) {
      if (*param_3 == 0x103) {
        if ((*(byte *)(param_3 + 6) & 1) != 0) {
          uVar11 = FUN_00498310(*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 4));
          *(undefined8 *)(param_1 + 0x24d0) = uVar11;
          *(undefined4 *)(param_1 + 0x24dc) = *(undefined4 *)(param_3 + 0xe);
          uVar11 = FUN_00608c80(&PTR_FUN_005f92e8,1);
          *(undefined8 *)(param_1 + 0x24e8) = uVar11;
          *(undefined8 *)(param_1 + 0x24e0) = 0x3ff0000000000000;
          uVar5 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0xa10));
          uVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 0xa10));
          FUN_01991160(*(undefined8 *)(param_1 + 0x27a8),*(undefined8 *)(param_1 + 0x24e8),uVar5,
                       uVar3);
          FUN_0064cb30(*(undefined8 *)(param_1 + 0x1668),0);
          FUN_0064cb90(*(undefined8 *)(param_1 + 0x1668),0);
          uVar5 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0xa10));
          FUN_0064cbf0(*(undefined8 *)(param_1 + 0x1668),uVar5);
          uVar5 = FUN_0064d120(*(undefined8 *)(param_1 + 0xa10));
          FUN_0064cc50(*(undefined8 *)(param_1 + 0x1668),uVar5);
          plVar1 = *(longlong **)(param_1 + 0x1668);
          (**(code **)(*plVar1 + 0xe0))(plVar1,local_98);
          uVar11 = FUN_00609e10(*(undefined8 *)(param_1 + 0x24e8));
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x24e8) + 0x60))
                            (*(longlong **)(param_1 + 0x24e8));
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x24e8) + 0x48))
                            (*(longlong **)(param_1 + 0x24e8));
          uVar15 = CONCAT44(uVar16,uVar3);
          FUN_00498350(local_a8,0,0,uVar5,uVar15);
          uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
          FUN_005fead0(plVar1[0x62],local_98,uVar11,local_a8);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1668),1);
        }
        (**(code **)(**(longlong **)(param_1 + 0xa10) + 0xe0))
                  (*(longlong **)(param_1 + 0xa10),&local_48);
        uVar11 = CONCAT44(uVar16,local_3c);
        FUN_00b956d0(&local_68,local_48,local_44,local_40,uVar11);
        uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
        dVar12 = (double)FUN_0040c850((double)*(int *)(param_3 + 0xe) /
                                      (double)*(int *)(param_1 + 0x24dc));
        if ((*(int *)(param_1 + 0x24dc) < *(int *)(param_3 + 0xe)) &&
           ((double)*(float *)(param_1 + 0x1924) * dVar12 < 10.0)) {
          *(double *)(param_1 + 0x24e0) = dVar12;
        }
        if ((*(int *)(param_3 + 0xe) <= *(int *)(param_1 + 0x24dc)) &&
           (0.1 < (double)*(float *)(param_1 + 0x1924) * dVar12)) {
          *(double *)(param_1 + 0x24e0) = dVar12;
        }
        iVar6 = FUN_0040c840((double)(local_60 - local_68) / *(double *)(param_1 + 0x24e0));
        iVar7 = FUN_0040c840((double)(local_5c - local_64) / *(double *)(param_1 + 0x24e0));
        plVar1 = *(longlong **)(param_1 + 0x1668);
        (**(code **)(*plVar1 + 0xe0))(plVar1,local_98);
        uVar11 = FUN_00609e10(*(undefined8 *)(param_1 + 0x24e8));
        iVar8 = (**(code **)(**(longlong **)(param_1 + 0x24e8) + 0x60))
                          (*(longlong **)(param_1 + 0x24e8));
        iVar9 = (**(code **)(**(longlong **)(param_1 + 0x24e8) + 0x48))
                          (*(longlong **)(param_1 + 0x24e8));
        uVar15 = CONCAT44(uVar16,iVar7);
        FUN_00498370(local_a8,(longlong)(iVar8 - iVar6) / 2 & 0xffffffff,
                     (longlong)(iVar9 - iVar7) / 2 & 0xffffffff,iVar6,uVar15);
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        FUN_005fead0(plVar1[0x62],local_98,uVar11,local_a8);
        if ((*(byte *)(param_3 + 6) & 4) != 0) {
          uVar11 = FUN_00498310((longlong)(*(int *)(param_1 + 0x24d0) + *(int *)(param_3 + 2)) / 2 &
                                0xffffffff,
                                (longlong)(*(int *)(param_1 + 0x24d4) + *(int *)(param_3 + 4)) / 2 &
                                0xffffffff);
          local_70._0_4_ = (int)uVar11;
          iVar6 = (int)local_70;
          if ((((local_48 <= (int)local_70) &&
               (local_70._4_4_ = (int)((ulonglong)uVar11 >> 0x20), local_44 <= local_70._4_4_)) &&
              ((int)local_70 <= local_40)) && (local_70._4_4_ <= local_3c)) {
            local_70 = uVar11;
            if (*(int *)(param_1 + 0x24dc) < *(int *)(param_3 + 0xe)) {
              dVar12 = (double)FUN_00b90650((double)*(float *)(param_1 + 0x1924) * dVar12,
                                            0x4024000000000000);
              *(float *)(param_1 + 0x1924) = (float)dVar12;
            }
            else {
              dVar12 = (double)FUN_00b90620((double)*(float *)(param_1 + 0x1924) * dVar12,
                                            0x3fb999999999999a);
              *(float *)(param_1 + 0x1924) = (float)dVar12;
            }
            iVar7 = FUN_0040c840((double)(local_60 - local_68) /
                                 (double)*(float *)(param_1 + 0x1924));
            iVar8 = FUN_0040c840((double)(local_5c - local_64) /
                                 (double)*(float *)(param_1 + 0x1924));
            uVar11 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
            FUN_01a98210(uVar11,&local_58);
            local_58 = FUN_0040c840(((double)iVar6 / (double)(local_60 - local_68)) *
                                    (double)(iVar7 - (local_50 - local_58)));
            local_58 = *(int *)(param_1 + 0x1b60) - local_58;
            local_54 = FUN_0040c840(((double)local_70._4_4_ / (double)(local_5c - local_64)) *
                                    (double)(iVar8 - (local_4c - local_54)));
            local_54 = *(int *)(param_1 + 0x1b64) - local_54;
            local_50 = local_58 + iVar7;
            local_4c = local_54 + iVar8;
            FUN_00b95860(&local_68,-local_68,-local_64);
            FUN_01c74990(param_1,local_58,local_54,local_50,CONCAT44(uVar16,local_4c));
            FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
            uVar11 = local_70;
          }
          local_70 = uVar11;
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1668),0);
          FUN_00410f20(*(undefined8 *)(param_1 + 0x24e8));
        }
      }
      else if (*param_3 == 0x104) {
        uVar3 = FUN_007f9a50();
        uVar4 = FUN_01995280(*(undefined8 *)(param_1 + 0x27a8));
        if ((*(byte *)(param_3 + 6) & 1) != 0) {
          uVar11 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          FUN_01a982d0(uVar11,*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 4),&local_74,
                       &local_78);
          FUN_01b1cd00(&local_74,&local_78);
          piVar13 = &local_7c;
          puVar17 = &local_7d;
          FUN_019a4820(*(undefined8 *)(param_1 + 0x27a8),local_74,local_78,&local_88,piVar13,puVar17
                      );
          uVar5 = (undefined4)((ulonglong)puVar17 >> 0x20);
          uVar16 = (undefined4)((ulonglong)piVar13 >> 0x20);
          local_88 = (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x58))
                               (*(longlong **)(param_1 + 0x27a8),local_74,local_78);
          cVar2 = FUN_01993e20(*(undefined8 *)(param_1 + 0x27a8));
          if (((cVar2 == '\0') && (local_88 == 0)) && (local_7c == -1)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
          *(char *)(param_1 + 0x24f9) = cVar2;
          if (cVar2 == '\0') {
            uVar11 = FUN_00498310(*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 4));
            *(undefined8 *)(param_1 + 0x24d0) = uVar11;
            uVar11 = FUN_00498310(*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x14),
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x14));
            *(undefined8 *)(param_1 + 0x24c0) = uVar11;
            FUN_01995220(*(undefined8 *)(param_1 + 0x27a8),0);
          }
          else {
            uVar11 = CONCAT44(uVar16,*(undefined4 *)(param_3 + 2));
            uVar15 = CONCAT44(uVar5,*(undefined4 *)(param_3 + 4));
            FUN_01c70d20(param_1,param_2,0,uVar3,uVar11,uVar15);
            uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
            uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
          }
        }
        if (*(char *)(param_1 + 0x24f9) == '\0') {
          FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),
                       (*(int *)(param_1 + 0x24d0) - *(int *)(param_3 + 2)) +
                       *(int *)(param_1 + 0x24c0));
          FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),
                       (*(int *)(param_1 + 0x24d4) - *(int *)(param_3 + 4)) +
                       *(int *)(param_1 + 0x24c4));
          uVar11 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          FUN_01a98210(uVar11,&local_58);
          FUN_00b95860(&local_58,-local_58,-local_54);
          uVar11 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          puVar14 = &local_78;
          FUN_01a984b0(uVar11,*(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x14),
                       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x14)
                       ,&local_74,puVar14);
          uVar16 = (undefined4)((ulonglong)puVar14 >> 0x20);
          FUN_00b95860(&local_58,local_74,local_78);
          uVar11 = CONCAT44(uVar16,local_4c);
          FUN_01c74990(param_1,local_58,local_54,local_50,uVar11);
          uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
        }
        else {
          uVar11 = CONCAT44(uVar16,*(undefined4 *)(param_3 + 4));
          FUN_01c72110(param_1,param_2,uVar3,*(undefined4 *)(param_3 + 2),uVar11);
          uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
        }
        if ((*(byte *)(param_3 + 6) & 4) != 0) {
          if (*(char *)(param_1 + 0x24f9) == '\0') {
            FUN_01995220(*(undefined8 *)(param_1 + 0x27a8),uVar4);
          }
          else {
            lVar10 = *(longlong *)(param_1 + 7000);
            if (lVar10 != 0) {
              cVar2 = FUN_004113d0(lVar10,&PTR_FUN_013606d0);
              if ((cVar2 != '\0') && (*(char *)(lVar10 + 0x1a) != '\0')) {
                *(undefined1 *)(lVar10 + 0x1b) = 1;
              }
            }
            FUN_01c72a40(param_1,param_2,0,uVar3,CONCAT44(uVar16,*(undefined4 *)(param_3 + 2)),
                         CONCAT44(uVar5,*(undefined4 *)(param_3 + 4)));
          }
        }
      }
    }
  }
  *param_4 = 1;
  return;
}

