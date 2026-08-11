/* Ghidra address: 01c26140 */
/* Ghidra symbol: FUN_01c26140 */


void FUN_01c26140(longlong *param_1,undefined2 param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int unaff_R13D;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((char)param_1[0xb4] == '\0') {
    if (param_1[0xa8] == 0) {
      if ((char)param_1[0xb0] != '\0') {
        param_1[0xad] =
             CONCAT44(*(int *)((longlong)param_1 + 0x574) +
                      (param_4 - *(int *)((longlong)param_1 + 0x57c)),
                      (int)param_1[0xae] + (param_3 - (int)param_1[0xaf]));
      }
    }
    else {
      dVar12 = 16777215.0;
      dVar13 = 16777215.0;
      local_58 = *(undefined8 *)((longlong)param_1 + 0x52c);
      uStack_50 = *(undefined8 *)((longlong)param_1 + 0x534);
      iVar10 = FUN_01c230d0();
      iVar4 = 0;
      if (-1 < iVar10 + -1) {
        do {
          puVar5 = (undefined4 *)FUN_01c230e0(param_1,iVar4);
          local_88 = *puVar5;
          local_84 = puVar5[1];
          uVar6 = FUN_01c26830(param_1,&local_88);
          local_80._0_4_ = (int)uVar6;
          iVar3 = (param_3 - (int)local_80) - (int)local_58;
          local_80._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
          iVar9 = (param_4 - local_80._4_4_) - local_58._4_4_;
          local_80 = uVar6;
          dVar11 = (double)FUN_0040c760((double)(iVar3 * iVar3 + iVar9 * iVar9));
          dVar13 = dVar12;
          if (dVar11 < dVar12) {
            dVar13 = dVar11;
            unaff_R13D = iVar4;
          }
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + -1;
          dVar12 = dVar13;
        } while (iVar10 != 0);
      }
      iVar10 = FUN_01c23490(param_1,param_1[0xa8]);
      if (16.0 <= dVar13) {
        lVar8 = param_1[0xa8];
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(int *)(lVar8 + 0x20) = param_3 - (int)param_1[0xa9];
        *(int *)(lVar8 + 0x24) = param_4 - *(int *)((longlong)param_1 + 0x54c);
      }
      else {
        puVar5 = (undefined4 *)FUN_01c230e0(param_1,unaff_R13D);
        *(undefined4 **)(param_1[0xa8] + 0x10) = puVar5;
        local_90 = *puVar5;
        local_8c = puVar5[1];
        uVar6 = FUN_01c26830(param_1,&local_90);
        lVar8 = param_1[0xa8];
        local_80._0_4_ = (int)uVar6;
        *(int *)(lVar8 + 0x20) = ((int)local_80 + *(int *)((longlong)param_1 + 0x52c)) - iVar10 / 2;
        local_80._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
        *(int *)(lVar8 + 0x24) = local_80._4_4_ + (int)param_1[0xa6] + -10;
        local_80 = uVar6;
      }
      if (*(longlong *)(param_1[0xa8] + 0x10) == 0) {
        dVar12 = 0.0;
        dVar13 = 0.0;
        local_78 = param_3 - iVar10 / 2;
        local_74 = param_4 + -10;
        local_70 = local_78 + iVar10;
        local_6c = param_4 + 10;
        iVar4 = FUN_01c232b0(param_1,(longlong)iVar10 % 2 & 0xffffffff);
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          do {
            lVar8 = FUN_01c233d0(param_1,iVar3);
            dVar13 = dVar12;
            if ((lVar8 != param_1[0xa8]) &&
               (lVar8 = FUN_01c233d0(param_1,iVar3), *(longlong *)(lVar8 + 8) != 0)) {
              lVar8 = FUN_01c233d0(param_1,iVar3);
              cVar2 = FUN_004239d0(&local_68,lVar8 + 0x20,&local_78);
              if ((cVar2 != '\0') &&
                 (dVar11 = (double)((local_60 - local_68) * (local_5c - local_64)), dVar12 < dVar11)
                 ) {
                dVar13 = dVar11;
                unaff_R13D = iVar3;
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
            dVar12 = dVar13;
          } while (iVar4 != 0);
        }
        if (dVar13 <= 0.0) {
          lVar8 = param_1[0xa8];
          *(undefined8 *)(lVar8 + 0x10) = 0;
          *(int *)(lVar8 + 0x20) = param_3 - (int)param_1[0xa9];
          *(int *)(lVar8 + 0x24) = param_4 - *(int *)((longlong)param_1 + 0x54c);
        }
        else {
          lVar8 = FUN_01c233d0(param_1,unaff_R13D);
          *(undefined8 *)(param_1[0xa8] + 0x10) = *(undefined8 *)(lVar8 + 8);
          lVar8 = FUN_01c233d0(param_1,unaff_R13D);
          *(undefined4 *)(param_1[0xa8] + 0x20) = *(undefined4 *)(lVar8 + 0x20);
          lVar8 = FUN_01c233d0(param_1,unaff_R13D);
          lVar7 = FUN_01c233d0(param_1,unaff_R13D);
          iVar10 = *(int *)(lVar8 + 0x28) - *(int *)(lVar7 + 0x20);
          lVar8 = FUN_01c233d0(param_1,unaff_R13D);
          *(undefined4 *)(param_1[0xa8] + 0x24) = *(undefined4 *)(lVar8 + 0x24);
        }
      }
      lVar8 = param_1[0xa8];
      if (*(int *)(lVar8 + 0x20) < 2) {
        *(undefined4 *)(lVar8 + 0x20) = 2;
      }
      else {
        iVar4 = ((int)param_1[0x13] - iVar10) + -2;
        if (iVar4 < *(int *)(lVar8 + 0x20)) {
          *(int *)(lVar8 + 0x20) = iVar4;
        }
      }
      lVar8 = param_1[0xa8];
      if (*(int *)(lVar8 + 0x24) < 2) {
        *(undefined4 *)(lVar8 + 0x24) = 2;
      }
      else {
        iVar4 = *(int *)((longlong)param_1 + 0x9c) + -0x16;
        if (iVar4 < *(int *)(lVar8 + 0x24)) {
          *(int *)(lVar8 + 0x24) = iVar4;
        }
      }
      lVar8 = param_1[0xa8];
      *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x20) + iVar10;
      *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x24) + 0x14;
    }
  }
  else {
    FUN_01c268a0(param_1,(double)param_1[0xb6] +
                         (double)(((int)param_1[0xb5] - param_4) / 2) / 100.0);
  }
  iVar10 = 0;
  bVar1 = false;
  local_80 = CONCAT44(param_4,param_3);
  while( true ) {
    iVar4 = FUN_01c232b0(param_1);
    if (((iVar4 <= iVar10) || (bVar1)) || (param_1[0xa8] != 0)) break;
    lVar8 = FUN_01c233d0(param_1,iVar10);
    cVar2 = FUN_004231e0(lVar8 + 0x20,&local_80);
    if (((cVar2 == '\0') || (lVar8 = FUN_01c233d0(param_1,iVar10), *(longlong *)(lVar8 + 8) != 0))
       || (lVar8 = FUN_01c233d0(param_1,iVar10), *(longlong *)(lVar8 + 0x10) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar10 = iVar10 + 1;
  }
  if (bVar1) {
    FUN_0064dfb0(param_1,1);
    FUN_00414ad0(param_1 + 0x1e,L"drag the unconnected terminal to a pin.");
  }
  else {
    FUN_0064dfb0(param_1,0);
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_01c27100(param_1,param_3,param_4);
  FUN_00650d70(param_1,param_2,param_3,param_4);
  return;
}

