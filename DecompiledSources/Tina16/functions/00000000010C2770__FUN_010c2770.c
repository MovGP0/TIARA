/* Ghidra address: 010c2770 */
/* Ghidra symbol: FUN_010c2770 */


void FUN_010c2770(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 in_stack_fffffffffffff608;
  undefined8 in_stack_fffffffffffff610;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined1 local_9b8 [264];
  longlong local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898 [83];
  undefined4 local_600;
  undefined8 local_5a8 [83];
  undefined4 local_310;
  undefined1 local_2b8 [296];
  undefined1 local_190 [304];
  longlong local_60;
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffff608 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff610 >> 0x20);
  local_9c8 = 0;
  local_9c0 = 0;
  local_8a0 = 0;
  local_8a8 = 0;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x170b0) + 8);
  if (param_2 < 0x4d) {
    if (param_2 == 0x4c) {
      *(undefined4 *)(param_1 + 0x17028) = 0x10f;
    }
    else if (param_2 < 0x27) {
      if (param_2 == 0x26) {
        *(undefined4 *)(param_1 + 0x17028) = 0x114;
      }
      else if (param_2 < 0x14) {
        if (param_2 == 0x13) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 < 0xb) {
          if (param_2 == 10) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
          }
          else if (param_2 < 6) {
            if (param_2 == 5) {
              FUN_01695da0(lVar10,*PTR_DAT_02004b10);
              uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
              *(undefined8 *)(param_1 + 0x17028) = uVar7;
              FUN_010d18d0(uVar7,*(undefined8 *)
                                  (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
            }
            else if (param_2 == 1) {
              uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
              *(undefined8 *)(param_1 + 0x17028) = uVar7;
              FUN_010d18d0(uVar7,*(undefined8 *)
                                  (param_1 + 0xfd0 +
                                  (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
              FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                           *(undefined8 *)
                            (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
              FUN_010d18d0(*(undefined8 *)(lVar10 + 0x4f8),*(undefined8 *)(param_1 + 0x17028));
            }
            else if (param_2 == 2) {
              uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
              *(undefined8 *)(param_1 + 0x17028) = uVar7;
              FUN_010d18d0(uVar7,*(undefined8 *)
                                  (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
              FUN_010d18d0(*(undefined8 *)(lVar10 + 0x4f8),*(undefined8 *)(param_1 + 0x17028));
            }
            else if (param_2 == 3) {
              uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
              *(undefined8 *)(param_1 + 0x17028) = uVar7;
              FUN_010d18d0(uVar7,*(undefined8 *)
                                  (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
              FUN_010d18d0(*(undefined8 *)(lVar10 + 0x4f8),*(undefined8 *)(param_1 + 0x17028));
            }
            else if (param_2 == 4) {
              uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
              *(undefined8 *)(param_1 + 0x17028) = uVar7;
            }
          }
          else if (param_2 == 6) {
            FUN_01695da0(lVar10,*PTR_DAT_02004b10);
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          }
          else if (param_2 == 7) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_017e25e0(lVar10,&local_8a0);
            FUN_00416ba0(&local_8a0,&DAT_010c7280,local_8a0);
            FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
            FUN_013b4a50(*(undefined8 *)(lVar10 + 0x4e8),&local_8b0,local_2b8);
            uVar3 = *(undefined4 *)(local_60 + 0x10);
            FUN_00416910(local_190,local_8a0,0xff);
            FUN_013b4b10(*(undefined8 *)(lVar10 + 0x4e8),local_8b0,local_2b8);
            FUN_010d2300(*(undefined8 *)(param_1 + 0x17028),uVar3);
          }
          else if (param_2 == 8) {
            FUN_01695da0(lVar10,*DAT_02004b08);
            FUN_013b3670(*(undefined8 *)(lVar10 + 0x4e8),
                         param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58,
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
          }
          else if (param_2 == 9) {
            uVar7 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_00c53190(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
          }
        }
        else if (param_2 < 0x10) {
          if (param_2 == 0xf) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          }
          else if (param_2 == 0xb) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          }
          else if (param_2 == 0xc) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
          }
          else if (param_2 == 0xd) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          }
          else if (param_2 == 0xe) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          }
        }
        else if (param_2 == 0x10) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x11) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x12) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
      }
      else if (param_2 < 0x1e) {
        if (param_2 == 0x1d) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          FUN_010d2850(*(undefined8 *)(param_1 + 0x17028),
                       *(int *)(*(longlong *)(lVar10 + 0x4f0) + 0x10) + -1);
        }
        else if (param_2 < 0x19) {
          if (param_2 == 0x18) {
            *(undefined4 *)(param_1 + 0x17028) = 0x140;
          }
          else if (param_2 == 0x14) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
            FUN_017e25e0(lVar10,&local_8a0);
            FUN_010d26a0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
            FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
          }
          else if (param_2 == 0x15) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_010d18d0(uVar7,*(undefined8 *)
                                (param_1 + 0xfd0 +
                                (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58));
            FUN_017e25e0(lVar10,&local_8a0);
            FUN_017e25e0(lVar10,&local_8a8);
            FUN_010d26a0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
            FUN_00416910(local_9b8,local_8a8,0xff);
            FUN_010d2610(*(undefined8 *)(param_1 + 0x17028),local_9b8);
            FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
            FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a8);
          }
          else if (param_2 == 0x16) {
            uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
            *(undefined8 *)(param_1 + 0x17028) = uVar7;
            FUN_017e25e0(lVar10,&local_8a0);
            FUN_017e25e0(lVar10,&local_8a8);
            FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a8);
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
            FUN_010d26a0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
            FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
            FUN_00416910(local_9b8,local_8a8,0xff);
            FUN_010d2610(*(undefined8 *)(param_1 + 0x17028),local_9b8);
            FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
          }
          else if (param_2 == 0x17) {
            *(undefined4 *)(param_1 + 0x17028) = 0x13f;
          }
        }
        else if (param_2 == 0x19) {
          FUN_00415020(param_1 + 0x17028,lVar10 + 0x40,0x50);
        }
        else if (param_2 == 0x1a) {
          FUN_00415020(param_1 + 0x17028,lVar10 + 0x40,0x50);
        }
        else if (param_2 == 0x1b) {
          *(undefined8 *)(param_1 + 0x17028) = *(undefined8 *)(lVar10 + 0x98);
        }
        else if (param_2 == 0x1c) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          plVar1 = *(longlong **)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          plVar1 = *(longlong **)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_898;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_017e25e0(lVar10,&local_8a0);
          FUN_017e25e0(lVar10,&local_8a8);
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58));
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          FUN_004169a0(&local_9c0,
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -6) * 0x58);
          FUN_010d28c0(*(undefined8 *)(param_1 + 0x17028),local_9c0,local_310,
                       *(undefined8 *)(lVar10 + 0x4f0));
          FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a8);
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          lVar9 = *(longlong *)(lVar10 + 0x4f0);
          iVar11 = *(int *)(lVar9 + 0x10) + -1;
          uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1af0(*(undefined8 *)(param_1 + 0x17028),
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -6) * 0x58,lVar9,
                       uVar3);
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          if (*(int *)(param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58) ==
              0x13f) {
            uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
            FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),0x116,iVar11,local_600,
                         *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
          }
          else {
            uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
            FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),0x114,iVar11,local_310,
                         *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
          }
          FUN_010d2850(*(undefined8 *)(param_1 + 0x17028),
                       *(int *)(*(longlong *)(lVar10 + 0x4f0) + 0x10) + -1);
          FUN_010d26a0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          if (*(int *)(param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58) ==
              0x13f) {
            FUN_010d29d0(*(undefined8 *)(param_1 + 0x17028),
                         param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -6) * 0x58);
          }
          else {
            FUN_010d2a50(*(undefined8 *)(param_1 + 0x17028),
                         param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -6) * 0x58);
          }
          FUN_00416910(local_9b8,local_8a8,0xff);
          FUN_010d2610(*(undefined8 *)(param_1 + 0x17028),local_9b8);
          FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
        }
      }
      else if (param_2 < 0x23) {
        if (param_2 == 0x22) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          plVar1 = *(longlong **)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_898;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),0x11c,local_310,local_600,
                       *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
        }
        else if (param_2 == 0x1e) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x1f) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          plVar1 = *(longlong **)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_898;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),0x11d,local_310,local_600,
                       *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
        }
        else if (param_2 == 0x20) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x21) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
      }
      else if (param_2 == 0x23) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(uVar7,*(undefined8 *)
                            (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
      }
      else if (param_2 == 0x24) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_898;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
        uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined4 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58),
                     local_310,local_600,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
      }
      else if (param_2 == 0x25) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
        uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1c40(*(undefined8 *)(param_1 + 0x17028),0x11b,local_310,
                     *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar3,uVar4));
      }
    }
    else if (param_2 < 0x3a) {
      if (param_2 == 0x39) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
      }
      else if (param_2 < 0x31) {
        if (param_2 == 0x30) {
          puVar8 = (undefined8 *)
                   (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
          puVar12 = (undefined8 *)(param_1 + 0x17028);
          for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        else if (param_2 < 0x2c) {
          if (param_2 == 0x2b) {
            *(undefined4 *)(param_1 + 0x17028) = 0x118;
          }
          else if (param_2 == 0x27) {
            *(undefined4 *)(param_1 + 0x17028) = 0x115;
          }
          else if (param_2 == 0x28) {
            *(undefined4 *)(param_1 + 0x17028) = 0x116;
          }
          else if (param_2 == 0x29) {
            *(undefined4 *)(param_1 + 0x17028) = 0x117;
          }
          else if (param_2 == 0x2a) {
            *(undefined4 *)(param_1 + 0x17028) = 0x113;
          }
        }
        else if (param_2 == 0x2c) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(uVar7,*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58)
                      );
        }
        else if (param_2 == 0x2d) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x2e) {
          puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          puVar12 = (undefined8 *)(param_1 + 0x17028);
          for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        else if (param_2 == 0x2f) {
          puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          puVar12 = (undefined8 *)(param_1 + 0x17028);
          for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
        }
      }
      else if (param_2 < 0x36) {
        if (param_2 == 0x35) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x31) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x32) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x33) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x34) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
      }
      else if (param_2 == 0x36) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
      }
      else if (param_2 == 0x37) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
      }
      else if (param_2 == 0x38) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
      }
    }
    else if (param_2 < 0x44) {
      if (param_2 == 0x43) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 < 0x3f) {
        if (param_2 == 0x3e) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d2180(*(undefined8 *)(param_1 + 0x17028),
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58,
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58,
                       param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58,
                       CONCAT44(uVar3,uVar4));
        }
        else if (param_2 == 0x3a) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x3b) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else if (param_2 == 0x3c) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1fb0(*(undefined8 *)(param_1 + 0x17028),
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58,
                       local_310,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar3,uVar4));
        }
        else if (param_2 == 0x3d) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d2080(*(undefined8 *)(param_1 + 0x17028),
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58,
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58,
                       local_310,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
        }
      }
      else if (param_2 == 0x3f) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x40) {
        puVar8 = (undefined8 *)
                 (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x41) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x42) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
    }
    else if (param_2 < 0x49) {
      if (param_2 == 0x48) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x44) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x45) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x46) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else if (param_2 == 0x47) {
        puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar12 = (undefined8 *)(param_1 + 0x17028);
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
    }
    else if (param_2 == 0x49) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
      uVar3 = FUN_01697c30(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d2280(*(undefined8 *)(param_1 + 0x17028),uVar3,*(undefined8 *)(lVar10 + 0x4f0),uVar4);
    }
    else if (param_2 == 0x4a) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58));
      uVar3 = FUN_01697c30(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d2280(*(undefined8 *)(param_1 + 0x17028),uVar3,*(undefined8 *)(lVar10 + 0x4f0),uVar4);
    }
    else if (param_2 == 0x4b) {
      *(undefined4 *)(param_1 + 0x17028) = 0x10e;
    }
  }
  else if (param_2 < 0x73) {
    if (param_2 == 0x72) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
    }
    else if (param_2 < 0x60) {
      if (param_2 == 0x5f) {
        *(undefined4 *)(param_1 + 0x17028) = 0x138;
      }
      else if (param_2 < 0x57) {
        if (param_2 == 0x56) {
          *(undefined4 *)(param_1 + 0x17028) = 0x12f;
        }
        else if (param_2 < 0x52) {
          if (param_2 == 0x51) {
            *(undefined4 *)(param_1 + 0x17028) = 0x12a;
          }
          else if (param_2 == 0x4d) {
            *(undefined4 *)(param_1 + 0x17028) = 0x110;
          }
          else if (param_2 == 0x4e) {
            *(undefined4 *)(param_1 + 0x17028) = 0x111;
          }
          else if (param_2 == 0x4f) {
            *(undefined4 *)(param_1 + 0x17028) = 0x128;
          }
          else if (param_2 == 0x50) {
            *(undefined4 *)(param_1 + 0x17028) = 0x129;
          }
        }
        else if (param_2 == 0x52) {
          *(undefined4 *)(param_1 + 0x17028) = 299;
        }
        else if (param_2 == 0x53) {
          *(undefined4 *)(param_1 + 0x17028) = 300;
        }
        else if (param_2 == 0x54) {
          *(undefined4 *)(param_1 + 0x17028) = 0x12d;
        }
        else if (param_2 == 0x55) {
          *(undefined4 *)(param_1 + 0x17028) = 0x12e;
        }
      }
      else if (param_2 < 0x5c) {
        if (param_2 == 0x5b) {
          *(undefined4 *)(param_1 + 0x17028) = 0x134;
        }
        else if (param_2 == 0x57) {
          *(undefined4 *)(param_1 + 0x17028) = 0x130;
        }
        else if (param_2 == 0x58) {
          *(undefined4 *)(param_1 + 0x17028) = 0x131;
        }
        else if (param_2 == 0x59) {
          *(undefined4 *)(param_1 + 0x17028) = 0x132;
        }
        else if (param_2 == 0x5a) {
          *(undefined4 *)(param_1 + 0x17028) = 0x133;
        }
      }
      else if (param_2 == 0x5c) {
        *(undefined4 *)(param_1 + 0x17028) = 0x135;
      }
      else if (param_2 == 0x5d) {
        *(undefined4 *)(param_1 + 0x17028) = 0x136;
      }
      else if (param_2 == 0x5e) {
        *(undefined4 *)(param_1 + 0x17028) = 0x137;
      }
    }
    else if (param_2 < 0x6a) {
      if (param_2 == 0x69) {
        *(undefined4 *)(param_1 + 0x17028) = 0x17b;
      }
      else if (param_2 < 0x65) {
        if (param_2 == 100) {
          *(undefined4 *)(param_1 + 0x17028) = 0x14d;
        }
        else if (param_2 == 0x60) {
          *(undefined4 *)(param_1 + 0x17028) = 0x14e;
        }
        else if (param_2 == 0x61) {
          *(undefined4 *)(param_1 + 0x17028) = 0x148;
        }
        else if (param_2 == 0x62) {
          *(undefined4 *)(param_1 + 0x17028) = 0x149;
        }
        else if (param_2 == 99) {
          *(undefined4 *)(param_1 + 0x17028) = 0x14a;
        }
      }
      else if (param_2 == 0x65) {
        *(undefined4 *)(param_1 + 0x17028) = 0x177;
      }
      else if (param_2 == 0x66) {
        *(undefined4 *)(param_1 + 0x17028) = 0x178;
      }
      else if (param_2 == 0x67) {
        *(undefined4 *)(param_1 + 0x17028) = 0x179;
      }
      else if (param_2 == 0x68) {
        *(undefined4 *)(param_1 + 0x17028) = 0x17a;
      }
    }
    else if (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_898;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        cVar2 = FUN_010d1bb0(*(undefined8 *)
                              (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        if (cVar2 == '\0') {
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
        }
        else {
          FUN_017e25e0(lVar10,&local_8a0);
          FUN_017e25e0(lVar10,&local_8a8);
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
          FUN_010d2850(*(undefined8 *)(param_1 + 0x17028),local_600);
          FUN_010d26a0(*(undefined8 *)(param_1 + 0x17028),local_8a8);
          FUN_00416910(local_9b8,local_8a0,0xff);
          FUN_010d2610(*(undefined8 *)(param_1 + 0x17028),local_9b8);
          FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a8);
        }
        uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined4 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58),
                     local_310,local_600,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
      }
      else if (param_2 == 0x6a) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
      }
      else if (param_2 == 0x6b) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_898;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
        uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined4 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58),
                     local_310,local_600,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
      }
      else if (param_2 == 0x6c) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
        uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1c40(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined4 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58),
                     local_310,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar3,uVar4));
      }
      else if (param_2 == 0x6d) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
      }
    }
    else if (param_2 == 0x6f) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
    }
    else if (param_2 == 0x70) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
      plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
      puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
      puVar12 = local_5a8;
      for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar8;
        puVar12 = puVar12 + 1;
      }
      plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
      puVar12 = local_898;
      for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar8;
        puVar12 = puVar12 + 1;
      }
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
      uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d1ee0(*(undefined8 *)(param_1 + 0x17028),0x112,local_310,local_600,
                   *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
    }
    else if (param_2 == 0x71) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
      uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d1980(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58),
                   *(undefined8 *)(lVar10 + 0x4f0),uVar3);
    }
  }
  else if (param_2 < 0x86) {
    if (param_2 == 0x85) {
      *(undefined4 *)(param_1 + 0x17028) = 0x131;
    }
    else if (param_2 < 0x7d) {
      if (param_2 == 0x7c) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; uVar3 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
        uVar5 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ce0(*(undefined8 *)(param_1 + 0x17028),0x13c,uVar3,local_310,
                     *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar5));
      }
      else if (param_2 < 0x78) {
        if (param_2 == 0x77) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          plVar1 = *(longlong **)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
          uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1e50(*(undefined8 *)(param_1 + 0x17028),0x139,
                       *(undefined4 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58),
                       local_310,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
        }
        else if (param_2 == 0x73) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1af0(*(undefined8 *)(param_1 + 0x17028),
                       param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58,
                       *(undefined8 *)(lVar10 + 0x4f0),uVar3);
        }
        else if (param_2 == 0x74) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          cVar2 = FUN_010ccea0(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
          if (cVar2 == '\0') {
            FUN_01697c40(lVar10,0x16);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 0x10));
          }
          else {
            uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
            FUN_010d1a30(*(undefined8 *)(param_1 + 0x17028),
                         *(undefined8 *)
                          (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58),
                         param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58,
                         *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar3,uVar4));
          }
        }
        else if (param_2 == 0x75) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          plVar1 = *(longlong **)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
          puVar12 = local_5a8;
          for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
          }
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
          uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d1c40(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined4 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58),
                       local_310,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar3,uVar4));
        }
        else if (param_2 == 0x76) {
          uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
          *(undefined8 *)(param_1 + 0x17028) = uVar7;
          FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
          FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                       *(undefined8 *)
                        (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
          local_8b0 = FUN_00c53160(*(undefined8 *)(param_1 + 0x17028));
          FUN_004169a0(&local_9c8,
                       param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58);
          uVar4 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
          FUN_010d2370(*(undefined8 *)(param_1 + 0x17028),local_9c8,
                       *(undefined8 *)(local_8b0 + 0x2f8),*(undefined8 *)(lVar10 + 0x4f0),
                       CONCAT44(uVar3,uVar4));
          *(undefined8 *)(local_8b0 + 0x2f8) = 0;
        }
      }
      else if (param_2 == 0x78) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
        uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1e50(*(undefined8 *)(param_1 + 0x17028),0x13a,
                     *(undefined4 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58),
                     local_310,*(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar3));
      }
      else if (param_2 == 0x79) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; uVar3 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
        uVar5 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ce0(*(undefined8 *)(param_1 + 0x17028),0x154,uVar3,local_310,
                     *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar5));
      }
      else if (param_2 == 0x7a) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; uVar3 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
        uVar5 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ce0(*(undefined8 *)(param_1 + 0x17028),0x153,uVar3,local_310,
                     *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar5));
      }
      else if (param_2 == 0x7b) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; uVar3 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58));
        uVar5 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1ce0(*(undefined8 *)(param_1 + 0x17028),0x13d,uVar3,local_310,
                     *(undefined8 *)(lVar10 + 0x4f0),CONCAT44(uVar4,uVar5));
      }
    }
    else if (param_2 < 0x82) {
      if (param_2 == 0x81) {
        *(undefined4 *)(param_1 + 0x17028) = 0x12a;
      }
      else if (param_2 == 0x7d) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_010d3560(*(undefined8 *)(lVar10 + 0x4f0));
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -7) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; uVar4 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -5) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; uVar5 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        plVar1 = *(longlong **)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -5) * 0x58));
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58));
        uVar6 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
        FUN_010d1d70(*(undefined8 *)(param_1 + 0x17028),0x13b,uVar5,local_310,CONCAT44(uVar3,uVar4),
                     param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58,
                     *(undefined8 *)(lVar10 + 0x4f0),uVar6);
        FUN_017e25e0(lVar10,&local_8a0);
        FUN_00416910(local_9b8,local_8a0,0xff);
        FUN_010d2610(*(undefined8 *)(param_1 + 0x17028),local_9b8);
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -7) * 0x58));
        FUN_010d25a0(*(undefined8 *)(param_1 + 0x17028));
        FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
        FUN_010d2cb0(*(undefined8 *)(param_1 + 0x17028),*(undefined8 *)(lVar10 + 0x4f0));
      }
      else if (param_2 == 0x7e) {
        *(undefined4 *)(param_1 + 0x17028) = 0x104;
      }
      else if (param_2 == 0x7f) {
        *(undefined4 *)(param_1 + 0x17028) = 0x128;
      }
      else if (param_2 == 0x80) {
        *(undefined4 *)(param_1 + 0x17028) = 0x129;
      }
    }
    else if (param_2 == 0x82) {
      *(undefined4 *)(param_1 + 0x17028) = 299;
    }
    else if (param_2 == 0x83) {
      *(undefined4 *)(param_1 + 0x17028) = 0x12d;
    }
    else if (param_2 == 0x84) {
      *(undefined4 *)(param_1 + 0x17028) = 0x130;
    }
  }
  else if (param_2 < 0x90) {
    if (param_2 == 0x8f) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
    }
    else if (param_2 < 0x8b) {
      if (param_2 == 0x8a) {
        uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
        puVar12 = local_5a8;
        for (lVar10 = 0x5e; puVar8 = puVar8 + 1, lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar8;
          puVar12 = puVar12 + 1;
        }
        FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58))
        ;
        local_8b0 = FUN_00c53160(*(undefined8 *)(param_1 + 0x17028));
        uVar7 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,1,1);
        *(undefined8 *)(local_8b0 + 0x2f8) = uVar7;
        FUN_013b3a80(*(undefined8 *)(local_8b0 + 0x2f8),local_310);
      }
      else if (param_2 == 0x86) {
        *(undefined4 *)(param_1 + 0x17028) = 0x132;
      }
      else if (param_2 == 0x87) {
        *(undefined4 *)(param_1 + 0x17028) = 0x133;
      }
      else if (param_2 == 0x88) {
        uVar7 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_013b3540(*(undefined8 *)(param_1 + 0x17028),
                     param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      }
      else if (param_2 == 0x89) {
        uVar7 = FUN_013b2dc0(0,&PTR_FUN_013b25f8,1,1);
        *(undefined8 *)(param_1 + 0x17028) = uVar7;
        FUN_00c53190(*(undefined8 *)(param_1 + 0x17028),
                     *(undefined8 *)
                      (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
        FUN_013b3540(*(undefined8 *)(param_1 + 0x17028),
                     param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      }
    }
    else if (param_2 == 0x8b) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
      puVar12 = local_5a8;
      for (lVar10 = 0x5e; puVar8 = puVar8 + 1, lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar8;
        puVar12 = puVar12 + 1;
      }
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
      local_8b0 = FUN_00c53160(*(undefined8 *)(param_1 + 0x17028));
      FUN_013b3a80(*(undefined8 *)(local_8b0 + 0x2f8),local_310);
    }
    else if (param_2 == 0x8c) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_01695da0(lVar10,*PTR_DAT_02003f70);
      FUN_010d35e0(*(undefined8 *)(lVar10 + 0x4f0),1);
      uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d24e0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58),
                   uVar3);
    }
    else if (param_2 == 0x8d) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_01695da0(lVar10,*PTR_DAT_02004b10);
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58));
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
      uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d2480(*(undefined8 *)(param_1 + 0x17028),uVar3);
      FUN_010d35e0(*(undefined8 *)(lVar10 + 0x4f0),0);
    }
    else if (param_2 == 0x8e) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
    }
  }
  else if (param_2 < 0x95) {
    if (param_2 == 0x94) {
      puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      puVar12 = (undefined8 *)(param_1 + 0x17028);
      for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    else if (param_2 == 0x90) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58));
      FUN_010d2c60(*(undefined8 *)(param_1 + 0x17028));
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58));
      FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),&LAB_010c7294);
    }
    else if (param_2 == 0x91) {
      uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
      *(undefined8 *)(param_1 + 0x17028) = uVar7;
      uVar3 = FUN_01697c20(*(undefined8 *)(*(longlong *)(param_1 + 0x170b0) + 8));
      FUN_010d2bb0(*(undefined8 *)(param_1 + 0x17028),
                   param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -1) * 0x58,
                   *(undefined8 *)(lVar10 + 0x4f0),uVar3);
      FUN_017e25e0(lVar10,&local_8a0);
      FUN_017e25e0(lVar10,&local_8a8);
      FUN_010d2770(*(undefined8 *)(param_1 + 0x17028),local_8a8);
      FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a0);
      FUN_010d2d90(*(undefined8 *)(param_1 + 0x17028));
      FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                   *(undefined8 *)
                    (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -3) * 0x58));
      FUN_010d2e00(*(undefined8 *)(param_1 + 0x17028),*(undefined8 *)(lVar10 + 0x4f0));
      FUN_010d2770(*(undefined8 *)(param_1 + 0x17028),local_8a0);
      FUN_010d2d20(*(undefined8 *)(param_1 + 0x17028));
      FUN_010d2ad0(*(undefined8 *)(param_1 + 0x17028),local_8a8);
    }
    else if (param_2 == 0x92) {
      puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      puVar12 = (undefined8 *)(param_1 + 0x17028);
      for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    else if (param_2 == 0x93) {
      puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
      puVar12 = (undefined8 *)(param_1 + 0x17028);
      for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
    }
  }
  else if (param_2 == 0x95) {
    puVar8 = (undefined8 *)(param_1 + 0xfd0 + (longlong)*(int *)(param_1 + 0x1024) * 0x58);
    puVar12 = (undefined8 *)(param_1 + 0x17028);
    for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  else if (param_2 == 0x96) {
    uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
    *(undefined8 *)(param_1 + 0x17028) = uVar7;
    plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58);
    puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
    puVar12 = local_5a8;
    for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar8;
      puVar12 = puVar12 + 1;
    }
    FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                 *(undefined8 *)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58));
    FUN_010d2e70(*(undefined8 *)(param_1 + 0x17028),
                 param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58,local_310,
                 *(undefined8 *)(lVar10 + 0x4f0));
  }
  else if (param_2 == 0x97) {
    uVar7 = FUN_010d17f0(0,&PTR_FUN_010d1430,1,1);
    *(undefined8 *)(param_1 + 0x17028) = uVar7;
    plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -9) * 0x58);
    puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
    puVar12 = local_5a8;
    for (lVar9 = 0x5e; uVar4 = local_310, puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar8;
      puVar12 = puVar12 + 1;
    }
    plVar1 = *(longlong **)(param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58);
    puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1);
    puVar12 = local_5a8;
    for (lVar9 = 0x5e; puVar8 = puVar8 + 1, lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar8;
      puVar12 = puVar12 + 1;
    }
    FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                 *(undefined8 *)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -9) * 0x58));
    FUN_010d18d0(*(undefined8 *)(param_1 + 0x17028),
                 *(undefined8 *)
                  (param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -4) * 0x58));
    FUN_010d2f10(*(undefined8 *)(param_1 + 0x17028),
                 param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -7) * 0x58,
                 param_1 + 0xfd0 + (longlong)(*(int *)(param_1 + 0x1024) + -2) * 0x58,uVar4,
                 CONCAT44(uVar3,local_310),*(undefined8 *)(lVar10 + 0x4f0));
  }
  FUN_00414560(&local_9c8,2);
  FUN_00414560(&local_8a8,2);
  return;
}

