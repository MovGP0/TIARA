/* Ghidra address: 00f463d0 */
/* Ghidra symbol: FUN_00f463d0 */


void FUN_00f463d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar13;
  longlong lVar12;
  int local_60;
  int local_5c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*param_2 + 0x118))(param_2), cVar2 != '\0')) {
    cVar2 = FUN_0198a580(param_2);
    if (cVar2 == '\x05') {
      iVar3 = FUN_017c2b70();
      local_60 = 0;
      if (-1 < iVar3 + -2) {
        iVar3 = iVar3 + -1;
        do {
          uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          uVar4 = FUN_017c2c60(param_2,local_60);
          uVar5 = FUN_017c2c60(param_2,local_60 + 1);
          local_44._0_2_ = (short)uVar4;
          local_44._2_2_ = (short)((uint)uVar4 >> 0x10);
          local_48._0_2_ = (short)uVar5;
          local_48._2_2_ = (short)((uint)uVar5 >> 0x10);
          iVar6 = FUN_01cefe00((longlong)(short)local_44,(longlong)local_44._2_2_,
                               (longlong)(short)local_48,(longlong)local_48._2_2_);
          local_48 = uVar5;
          local_44 = uVar4;
          if (0 < iVar6) {
            local_48 = uVar4;
            local_44 = uVar5;
          }
          lVar12 = CONCAT44(uVar13,(int)local_48._2_2_);
          FUN_00b956d0(&local_40,(longlong)(short)local_44,(longlong)local_44._2_2_,
                       (longlong)(short)local_48,lVar12);
          uVar4 = (undefined4)((ulonglong)lVar12 >> 0x20);
          if (((*(char *)(param_1 + 0xe8) != '\0') && (param_2[0x7e] != 0)) &&
             (*(longlong *)(param_1 + 0xf0) != 0)) {
            cVar2 = FUN_00f489b0(*(undefined8 *)(param_1 + 0xf0),param_2[0x7e]);
            uVar4 = (undefined4)((ulonglong)lVar12 >> 0x20);
            if ((cVar2 != '\0') && (*(char *)(param_1 + 0xf8) != '\0')) {
              *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xe0);
              lVar1 = *(longlong *)(param_1 + 0x98);
              while (uVar4 = (undefined4)((ulonglong)lVar12 >> 0x20), lVar1 != 0) {
                local_5c = *(int *)(*(longlong *)(param_1 + 0x98) + 0x10);
                iVar6 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x14);
                iVar9 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x18);
                iVar10 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x1c);
                iVar7 = FUN_01cefe00(local_5c,iVar6,iVar9,iVar10);
                if (0 < iVar7) {
                  local_5c = *(int *)(*(longlong *)(param_1 + 0x98) + 0x18);
                  iVar6 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x1c);
                  iVar9 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x10);
                  iVar10 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x14);
                }
                if (((local_5c == iVar9) && (local_40 == local_38)) ||
                   ((iVar6 == iVar10 && (local_3c == local_34)))) {
                  if (((local_5c == iVar9) && (local_5c == local_40)) ||
                     ((iVar6 == iVar10 && (iVar6 == local_3c)))) {
                    iVar7 = FUN_01cefe00(local_5c,iVar6,local_40,local_3c);
                    if (iVar7 < 1) {
                      iVar7 = FUN_01cefe00(iVar9,iVar10,local_40,local_3c);
                      if (-1 < iVar7) {
                        lVar12 = param_2[0x7e];
                        uVar8 = FUN_00f48ed0(&DAT_00f45550,1,local_40,local_3c,lVar12,
                                             **(undefined8 **)(param_1 + 0x100));
                        **(undefined8 **)(param_1 + 0x100) = uVar8;
                      }
                    }
                    iVar7 = FUN_01cefe00(local_5c,iVar6,local_38,local_34);
                    if (iVar7 < 1) {
                      iVar7 = FUN_01cefe00(iVar9,iVar10,local_38,local_34);
                      if (-1 < iVar7) {
                        lVar12 = param_2[0x7e];
                        uVar8 = FUN_00f48ed0(&DAT_00f45550,1,local_38,local_34,lVar12,
                                             **(undefined8 **)(param_1 + 0x100));
                        **(undefined8 **)(param_1 + 0x100) = uVar8;
                      }
                    }
                    iVar7 = FUN_01cefe00(local_40,local_3c,local_5c,iVar6);
                    if (iVar7 < 1) {
                      iVar7 = FUN_01cefe00(local_38,local_34,local_5c,iVar6);
                      if (-1 < iVar7) {
                        lVar12 = param_2[0x7e];
                        uVar8 = FUN_00f48ed0(&DAT_00f45550,1,local_5c,iVar6,lVar12,
                                             **(undefined8 **)(param_1 + 0x100));
                        **(undefined8 **)(param_1 + 0x100) = uVar8;
                      }
                    }
                    iVar6 = FUN_01cefe00(local_40,local_3c,iVar9,iVar10);
                    if (iVar6 < 1) {
                      iVar6 = FUN_01cefe00(local_38,local_34,iVar9,iVar10);
                      if (-1 < iVar6) {
                        lVar12 = param_2[0x7e];
                        uVar8 = FUN_00f48ed0(&DAT_00f45550,1,iVar9,iVar10,lVar12,
                                             **(undefined8 **)(param_1 + 0x100));
                        **(undefined8 **)(param_1 + 0x100) = uVar8;
                      }
                    }
                  }
                }
                else if (local_5c == iVar9) {
                  if (((iVar6 <= local_3c) && (local_3c <= iVar10)) &&
                     ((local_40 <= local_5c && (local_5c <= local_38)))) {
                    lVar12 = param_2[0x7e];
                    uVar8 = FUN_00f48ed0(&DAT_00f45550,1,local_5c,local_3c,lVar12,
                                         **(undefined8 **)(param_1 + 0x100));
                    **(undefined8 **)(param_1 + 0x100) = uVar8;
                  }
                }
                else if ((((local_5c <= local_40) && (local_40 <= iVar9)) && (local_3c <= iVar6)) &&
                        (iVar6 <= local_34)) {
                  lVar12 = param_2[0x7e];
                  uVar8 = FUN_00f48ed0(&DAT_00f45550,1,local_40,iVar6,lVar12,
                                       **(undefined8 **)(param_1 + 0x100));
                  **(undefined8 **)(param_1 + 0x100) = uVar8;
                }
                *(undefined8 *)(param_1 + 0x98) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x20);
                lVar1 = *(longlong *)(param_1 + 0x98);
              }
            }
          }
          in_stack_ffffffffffffff78 = CONCAT44(uVar4,local_34);
          FUN_00f47130(*(undefined8 *)(param_1 + 0xc0),local_40,local_3c,local_38,
                       in_stack_ffffffffffffff78);
          local_60 = local_60 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x1c8))();
      uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      iVar6 = 0;
      if (-1 < iVar3 + -1) {
        do {
          cVar2 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar6);
          if (cVar2 == '\0') {
            (**(code **)(*param_2 + 0x1f0))(param_2,iVar6,&local_2c,&local_30);
            FUN_00f471e0(*(undefined8 *)(param_1 + 0xc0),local_2c,local_30,7);
          }
          uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      uVar8 = FUN_0198a580(param_2);
      if ((byte)uVar8 < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1) << ((byte)uVar8 & 0x1f) & 0x60U) !=
                 0;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) {
        uVar8 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8));
        (**(code **)(*param_2 + 0x50))(param_2,uVar8,&local_40);
        FUN_00b95880(&local_40,0xfffffffe,0xfffffffe);
        FUN_00f47220(*(undefined8 *)(param_1 + 0xc0),local_40,local_3c,local_38,
                     CONCAT44(uVar4,local_34),3);
      }
    }
  }
  return;
}

