/* Ghidra address: 0152a9e0 */
/* Ghidra symbol: FUN_0152a9e0 */


void FUN_0152a9e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double in_stack_ffffffffffffff68;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffff78;
  uint local_6c;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_58 = 0;
  local_50 = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  cVar4 = FUN_017d1390(param_1[0x98]);
  if (cVar4 != '\0') {
    param_2 = (longlong *)&DAT_0152b46c;
    FUN_0152a780(param_1,&DAT_0152b46c);
  }
  FUN_0165dc50(param_1[0x22]);
  param_1[0x75] = 0x3ff0000000000000;
  while (uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20),
        (double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695)) {
    bVar2 = *(byte *)((longlong)param_1 + 0x5db);
    if (bVar2 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar2 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (bVar2 == 1) {
        uVar6 = FUN_0040c770((double)param_1[0x75] - 1.0);
        lVar8 = FUN_017c58f0(param_1[0x13e],param_1[0x13f],param_1[0x140],
                             *(short *)((longlong)param_1 + 0x9ee) + -1,CONCAT44(uVar5,uVar6),
                             (char)param_1[0x141],in_stack_ffffffffffffff78 & 0xffffffffffffff00);
        param_1[0xd4] = lVar8;
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      else if (bVar2 == 2) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          uVar6 = FUN_0040c770((double)param_1[0x75] - 1.0);
          uVar11 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                                *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                                *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar5,uVar6),
                                *(undefined *)((longlong)param_1 + 0xb27),
                                in_stack_ffffffffffffff78 & 0xffffffffffffff00);
          if (*(longlong *)((longlong)param_1 + 0xa09) == 0) {
            FUN_004169a0(&local_50,(undefined *)((longlong)param_1 + 0xa15));
            uVar5 = (**(code **)(**(longlong **)(param_1[0x14] + 0x438) + 0xb8))
                              (*(longlong **)(param_1[0x14] + 0x438),local_50);
            FUN_00b8fd60(&local_58,uVar11,6,0,1);
            FUN_004b5450(*(undefined8 *)(param_1[0x14] + 0x438),uVar5,local_58);
            FUN_01440040(param_1[0x14],param_1[0x262],0);
            FUN_019af810(param_1[0x14],8);
          }
          else {
            *(undefined8 *)param_1[0x272] = uVar11;
            FUN_01cc5c10(param_1[0x16],uVar11);
          }
          FUN_016f5520(param_1,0);
          FUN_01374e80(param_1,0);
        }
        else {
          FUN_012b4a50(param_1[0xb1],1);
          FUN_016f5520(param_1,0);
          FUN_01374e80(param_1,0);
        }
      }
      else if ((byte)(bVar2 - 3) < 2) {
        FUN_01150d10(param_1[0xb2],param_1[0x75]);
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      else if (bVar2 == 7) {
        uVar6 = FUN_0040c770((double)param_1[0x75] - 1.0);
        uVar11 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0xb15),
                              *(undefined8 *)((longlong)param_1 + 0xb1d),param_1[0x165],
                              *(short *)((longlong)param_1 + 0xb25) + -1,CONCAT44(uVar5,uVar6),
                              *(undefined *)((longlong)param_1 + 0xb27),
                              in_stack_ffffffffffffff78 & 0xffffffffffffff00);
        FUN_016cfc70(param_1[0x14],8,uVar11,1);
        FUN_016f5520(param_1,0);
        FUN_01374e80(param_1,0);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      cVar4 = FUN_017d1390(param_1[0x98]);
      if (cVar4 != '\0') {
        FUN_017dcfd0(param_1[0x1b],0,1);
        FUN_017d9ab0(param_1[0x1b],0);
        if (*(char *)((longlong)param_1 + 0x325) == '\0') {
          FUN_01af25b0(param_1[0x1e2],0,&LAB_0152b494,2);
          FUN_016f5430(param_1,1,0);
          FUN_01af25b0(param_1[0x1e2],0,&DAT_0152b490,1);
        }
        else {
          FUN_01af25b0(param_1[0x1e2],1,&DAT_0152b48e,0);
          FUN_016f6430(param_1,1,0);
          FUN_016f3620(param_1,0,1);
          FUN_01af25b0(param_1[0x1e2],0,&DAT_0152b490,1);
        }
        FUN_017d9ab0(param_1[0x1b],0);
      }
      FUN_01af25d0(param_1[0x1e2],2,4);
      FUN_0165dc50(param_1[0x22]);
    }
    FUN_016f6430(param_1,7,0);
    in_stack_ffffffffffffff68 = (double)param_1[0x75] - 1.0;
    uVar13 = 0;
    in_stack_ffffffffffffff78 = 0;
    FUN_017ce930(param_1,1,0,0,in_stack_ffffffffffffff68,0,0);
    *(undefined4 *)(param_1 + 0x93) = 0;
    uVar11 = 0;
    lVar8 = FUN_004aeac0(*(undefined8 *)(param_1[0x98] + 0x30),0);
    param_1[0x74] = *(longlong *)(lVar8 + 8);
    param_2 = (longlong *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    FUN_017dcfd0(param_1[0x1b]);
    iVar7 = FUN_017d2130(param_1);
    if (iVar7 < 2) {
      FUN_016f6430(param_1,8,(double)param_1[0x74] * 6.283185307179586);
      FUN_016f3620(param_1,(double)param_1[0x74] * 6.283185307179586,8);
      param_2 = (longlong *)0x0;
      in_stack_ffffffffffffff68 = 0.0;
      uVar13 = 0;
      in_stack_ffffffffffffff78 = 0;
      FUN_016f8860(param_1,0,8,param_1[0x74],0,0,0);
    }
    else {
      lVar8 = FUN_00409570((longlong)(iVar7 << 4));
      uVar9 = 0;
      local_6c = 1;
      if (0 < iVar7) {
        do {
          FUN_016f6430(param_1,8,(double)param_1[0x74] * 6.283185307179586);
          FUN_017d21a0(param_1,local_6c);
          FUN_016f3620(param_1,(double)param_1[0x74] * 6.283185307179586,8);
          while( true ) {
            lVar3 = param_1[0x9e];
            if (*(uint *)(lVar3 + 0x10) <= uVar9) {
              FUN_00594f90();
            }
            if (**(char **)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar9 * 8) == '\x04') break;
            uVar9 = uVar9 + 1;
          }
          if (*(uint *)(param_1[0x9e] + 0x10) <= uVar9) {
            FUN_00594f90();
          }
          param_2 = param_1;
          FUN_017c8650(&local_48);
          uVar9 = uVar9 + 1;
          puVar1 = (undefined8 *)(lVar8 + (longlong)(int)(local_6c + -1) * 0x10);
          *puVar1 = local_48;
          puVar1[1] = uStack_40;
          local_6c = local_6c + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_5c = 0;
      FUN_01cc47e0(param_1[0x16],param_1[0x74]);
      iVar7 = *(int *)((longlong)param_1 + 0x691);
      local_6c = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar3 = param_1[0x9e];
          if (*(uint *)(lVar3 + 0x10) <= local_6c) {
            FUN_00594f90();
          }
          if (**(char **)(*(longlong *)(lVar3 + 8) + (longlong)(int)local_6c * 8) == '\x04') {
            uVar11 = FUN_00c44590(lVar8 + (longlong)local_5c * 0x10);
            uVar12 = FUN_00c445d0(lVar8 + (longlong)local_5c * 0x10);
            local_5c = local_5c + 1;
          }
          else {
            if (*(uint *)(param_1[0x9e] + 0x10) <= local_6c) {
              FUN_00594f90();
            }
            FUN_017c8650(&local_48,param_1);
            uVar11 = FUN_00c44590(&local_48);
            uVar12 = FUN_00c445d0(&local_48);
          }
          param_2 = (longlong *)(ulonglong)local_6c;
          FUN_01cc48a0(param_1[0x16],param_2,uVar11,uVar12);
          local_6c = local_6c + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if ((((*(char *)((longlong)param_1 + 0x5db) == '\x01') &&
         (*(char *)((longlong)param_1 + 0x69e) != '\0')) ||
        ((*(char *)((longlong)param_1 + 0x5db) == '\x02' &&
         (*(char *)((longlong)param_1 + 0x69f) != '\0')))) &&
       (((double)param_1[0x75] <= *(double *)((longlong)param_1 + 0x695) &&
         *(double *)((longlong)param_1 + 0x695) != (double)param_1[0x75] &&
        (*(char *)((longlong)param_1 + 0x49c) == '\0')))) {
      FUN_013e0570(param_1[0x16]);
      param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),4);
      in_stack_ffffffffffffff68 = 0.0;
      FUN_017cc020(param_1 + 0x16,param_2,0,*(undefined8 *)(param_1[0x14] + 0x360),0,
                   uVar13 & 0xffffffffffffff00);
      bVar2 = *(byte *)((longlong)param_1 + 0x5db);
      if (bVar2 < 8) {
        uVar9 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar2 & 0x1f);
        param_2 = (longlong *)(ulonglong)uVar9;
        bVar10 = (uVar9 & 0xde) != 0;
      }
      else {
        bVar10 = false;
      }
      if ((bVar10) && (bVar2 == 2)) {
        if (*(int *)(*(longlong *)(param_1[0x14] + 0x470) + 0x10) < 2) {
          if (*(longlong *)((longlong)param_1 + 0xa09) != 0) {
            iVar7 = FUN_01b07e10(param_1,*(longlong *)((longlong)param_1 + 0xa09));
            param_2 = *(longlong **)(param_1[0x56] + -8 + (longlong)iVar7 * 8);
            param_1[0x271] = (longlong)param_2;
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
  FUN_01af2990(param_1[0x1e2],0x4059000000000000);
  FUN_00414560(&local_58,2);
  return;
}

