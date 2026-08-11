/* Ghidra address: 013279a0 */
/* Ghidra symbol: FUN_013279a0 */


void FUN_013279a0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined7 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  double in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_0165dc50(param_1[0x22]);
  param_1[0x75] = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x13b6) = 0;
  while ((uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),
         (double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         (*(char *)((longlong)param_1 + 0x13b6) == '\0'))) {
    if (*(byte *)((longlong)param_1 + 0x5db) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)((longlong)param_1 + 0x5db) & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (*(char *)((longlong)param_1 + 0x325) == '\0') {
        FUN_01af25d0(param_1[0x1e2],5,4,param_1 + 0x75);
      }
      else {
        FUN_01af25d0(param_1[0x1e2],2,4,param_1 + 0x75);
      }
      uVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0x5db);
      if (uVar6 < 3) {
        if (uVar6 == 1) {
          uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
          lVar9 = FUN_017c58f0(param_1[0x13e],param_1[0x13f],param_1[0x140],
                               *(short *)((longlong)param_1 + 0x9ee) + -1,CONCAT44(uVar4,uVar3),
                               (char)param_1[0x141],in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
          param_1[0xd4] = lVar9;
        }
        else if (uVar6 == 2) {
          if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
            uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
            uVar10 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                                  *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                                  *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar4,uVar3),
                                  *(undefined1 *)((longlong)param_1 + 0xb27),
                                  in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
            if (*(longlong *)((longlong)param_1 + 0xa09) == 0) {
              FUN_004169a0(local_30,(longlong)param_1 + 0xa15);
              uVar4 = (**(code **)(**(longlong **)(param_1[0x14] + 0x438) + 0xb8))
                                (*(longlong **)(param_1[0x14] + 0x438),local_30[0]);
              FUN_00b8fd60(&local_38,uVar10,6,0,1);
              FUN_004b5450(*(undefined8 *)(param_1[0x14] + 0x438),uVar4,local_38);
              FUN_01440040(param_1[0x14],param_1[0x262],0);
              FUN_019af810(param_1[0x14],1);
            }
            else {
              *(undefined8 *)param_1[0x272] = uVar10;
              FUN_01cc5c10(param_1[0x16],uVar10);
            }
          }
          else {
            FUN_012b4a50(param_1[0xb1],1);
          }
        }
      }
      else if (uVar6 - 3 < 2) {
        FUN_01150d10(param_1[0xb2],param_1[0x75]);
      }
      else if (uVar6 == 6) {
        if ((double)param_1[0x75] == 2.0) {
          FUN_0131fa20(param_1);
          FUN_016f1c10(param_1,6);
          param_1[0x271] = (longlong)(param_1 + 0xd4);
        }
      }
      else if (uVar6 == 7) {
        uVar3 = FUN_0040c770((double)param_1[0x75] - 1.0);
        uVar10 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                              *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                              *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar4,uVar3),
                              *(undefined1 *)((longlong)param_1 + 0xb27),
                              in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
        FUN_016cfc70(param_1[0x14],1,uVar10,1);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      FUN_0165dc50(param_1[0x22]);
    }
    uVar10 = 0;
    in_stack_ffffffffffffff98 = (double)param_1[0x75] - 1.0;
    uVar6 = 0;
    in_stack_ffffffffffffffa8 = 0;
    FUN_017ce930(param_1,0,0,0,in_stack_ffffffffffffff98,0,0);
    *(undefined4 *)(param_1 + 0x93) = 0;
    iVar5 = 0;
    while ((iVar5 <= (int)(uint)*(ushort *)(param_1 + 0x10e) &&
           (*(char *)((longlong)param_1 + 0x13b6) == '\0'))) {
      in_stack_ffffffffffffff98 =
           (double)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),iVar5);
      uVar6 = uVar6 & 0xffffffffffffff00;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
      uVar10 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0x872),
                            *(undefined8 *)((longlong)param_1 + 0x87a),0,(short)param_1[0x10e],
                            in_stack_ffffffffffffff98,uVar6,in_stack_ffffffffffffffa8);
      *(undefined8 *)param_1[0x271] = uVar10;
      FUN_016f5520(param_1,0);
      uVar10 = 0;
      bVar1 = FUN_01374d30(param_1,0);
      FUN_01af2990(param_1[0x1e2],
                   (double)iVar5 +
                   ((double)param_1[0x75] - 1.0) * (double)*(ushort *)(param_1 + 0x10e));
      uVar7 = (undefined7)((ulonglong)uVar10 >> 8);
      if (*(char *)((longlong)param_1 + 0x325) == '\0') {
        uVar10 = CONCAT71(uVar7,4);
        FUN_01af25d0(param_1[0x1e2],uVar10,3);
        *(byte *)((longlong)param_1 + 0x326) = 0 < iVar5 & bVar1;
        cVar2 = FUN_01b07dd0(param_1);
        uVar7 = (undefined7)((ulonglong)uVar10 >> 8);
        if (cVar2 == '\0') {
          uVar10 = CONCAT71(uVar7,1);
          FUN_016f5430(param_1);
        }
        else {
          uVar10 = CONCAT71(uVar7,1);
          FUN_016f39b0(param_1);
        }
      }
      else {
        uVar10 = CONCAT71(uVar7,1);
        FUN_01af25d0(param_1[0x1e2],uVar10,3);
        uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        FUN_016f6430(param_1,uVar10,0);
        FUN_016f3620(param_1,0);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      FUN_0165dc50(param_1[0x22]);
      if ((*(char *)((longlong)param_1 + 0x324) == '\0') &&
         (*(char *)((longlong)param_1 + 0x13b6) == '\0')) {
        uVar10 = 0;
        in_stack_ffffffffffffff98 = 0.0;
        uVar6 = 0;
        in_stack_ffffffffffffffa8 = 0;
        FUN_016f8860(param_1,0,1,*(undefined8 *)param_1[0x271],0,0,0);
      }
      if (*(char *)((longlong)param_1 + 0x13b6) == '\0') {
        iVar5 = iVar5 + 1;
      }
      cVar2 = FUN_01af2a10(param_1[0x1e2]);
      if (cVar2 != '\0') {
        uVar10 = FUN_01cc3a00(&PTR_FUN_01cb5bc0);
        *(undefined8 *)PTR_DAT_02005168 = uVar10;
        FUN_013d45f0(*(undefined8 *)PTR_DAT_02005168);
        uVar10 = 0;
        FUN_01af29f0(param_1[0x1e2]);
      }
    }
    if ((((*(char *)((longlong)param_1 + 0x5db) == '\x01') &&
         (*(char *)((longlong)param_1 + 0x69e) != '\0')) ||
        ((*(char *)((longlong)param_1 + 0x5db) == '\x02' &&
         (*(char *)((longlong)param_1 + 0x69f) != '\0')))) &&
       (((double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         *(double *)((longlong)param_1 + 0x695) != (double)param_1[0x75] &&
        (*(char *)((longlong)param_1 + 0x49c) == '\0')))) {
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      FUN_013d45f0(param_1[0x16],uVar10);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),2);
      in_stack_ffffffffffffff98 = 0.0;
      FUN_017cc020(param_1 + 0x16,uVar10,0,*(undefined8 *)(param_1[0x14] + 0x360),0,
                   uVar6 & 0xffffffffffffff00);
      bVar1 = *(byte *)((longlong)param_1 + 0x5db);
      if (bVar1 < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
      }
      else {
        bVar8 = false;
      }
      if ((bVar8) && (bVar1 == 2)) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_1 + 0xa09) != 0) {
            iVar5 = FUN_01b07e10(param_1,*(longlong *)((longlong)param_1 + 0xa09));
            param_1[0x282] = *(longlong *)(param_1[0x56] + -8 + (longlong)iVar5 * 8);
            FUN_012b4370();
          }
        }
        else {
          FUN_012b49a0(param_1[0xb1]);
        }
      }
    }
    param_1[0x75] = (longlong)((double)param_1[0x75] + 1.0);
  }
  param_1[0x75] = (longlong)((double)param_1[0x75] - 1.0);
  FUN_00414560(&local_38,2);
  return;
}

