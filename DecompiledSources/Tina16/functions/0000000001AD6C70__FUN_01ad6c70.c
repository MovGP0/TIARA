/* Ghidra address: 01ad6c70 */
/* Ghidra symbol: FUN_01ad6c70 */


void FUN_01ad6c70(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined8 local_res18 [2];
  longlong local_48;
  undefined8 local_40 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_40[0] = 0;
  cVar1 = FUN_01acff30(param_1,local_40);
  if (cVar1 == '\x01') {
    uVar4 = FUN_004aeac0(local_40[0],0);
    cVar1 = FUN_01ad1090(param_1,uVar4,&local_48);
    if (cVar1 == '\0') {
      FUN_00410f20(local_40[0]);
    }
    else {
      uVar4 = FUN_004aeac0(local_40[0],0);
      uVar4 = FUN_01cd6670(uVar4);
      if ((byte)uVar4 < 8) {
        bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x11U) !=
                 0;
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        plVar10 = *(longlong **)(local_48 + 0x70);
      }
      else {
        plVar10 = *(longlong **)(local_48 + 0x78);
      }
      uVar4 = FUN_004aeac0(local_40[0],0);
      iVar2 = (**(code **)(*plVar10 + 0xc0))(plVar10,uVar4);
      if (iVar2 < 0) {
        iVar2 = (**(code **)(*plVar10 + 0x28))();
        iVar9 = 0;
        lVar5 = 0;
        if (-1 < iVar2 + -1) {
          do {
            lVar5 = (**(code **)(*plVar10 + 0x30))(plVar10,iVar9);
            lVar6 = FUN_004aeac0(local_40[0],0);
            if (*(longlong *)(lVar5 + 0x118) == lVar6) {
              lVar5 = (**(code **)(*plVar10 + 0x30))(plVar10,iVar9);
              lVar6 = (**(code **)(*plVar10 + 0x30))(plVar10,iVar9);
              *(undefined8 *)(lVar6 + 0x118) = 0;
              break;
            }
            iVar9 = iVar9 + 1;
            iVar2 = iVar2 + -1;
            lVar5 = 0;
          } while (iVar2 != 0);
        }
      }
      else {
        (**(code **)(*plVar10 + 0x98))(plVar10,iVar2);
        lVar5 = (**(code **)(*plVar10 + 0x30))(plVar10,0);
      }
      if (lVar5 == 0) {
        FUN_00410f20(local_40[0]);
      }
      else {
        lVar6 = FUN_004aeac0(local_40[0],0);
        uVar4 = FUN_01cd6670(lVar6);
        if ((byte)uVar4 < 8) {
          bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x11U)
                   != 0;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          iVar2 = *(int *)(*(longlong *)(lVar6 + 0xf8) + 0x10);
          iVar9 = 1;
          if (0 < iVar2) {
            do {
              iVar11 = iVar9 + -1;
              uVar4 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
              cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
              if (cVar1 == '\0') {
                uVar4 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x30))
                                  (*(longlong **)(local_48 + 0x70),0);
                lVar5 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
                *(undefined8 *)(lVar5 + 0xe8) = uVar4;
              }
              else {
                uVar4 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x30))
                                  (*(longlong **)(local_48 + 0x70),0);
                lVar5 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
                *(undefined8 *)(lVar5 + 0xf8) = uVar4;
              }
              lVar5 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x30))
                                (*(longlong **)(local_48 + 0x70),0);
              uVar4 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
              FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8),uVar4);
              iVar9 = iVar9 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar2 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x28))
                            (*(longlong **)(local_48 + 0x88));
          if (iVar2 < 2) {
            uVar4 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x30))
                              (*(longlong **)(local_48 + 0x88),0);
            uVar7 = (**(code **)(**(longlong **)(local_48 + 0x70) + 0x30))
                              (*(longlong **)(local_48 + 0x70),0);
            FUN_01cd9880(uVar4,uVar7);
          }
          else {
            lVar5 = FUN_004aeac0(local_40[0],0);
            lVar5 = *(longlong *)(lVar5 + 0x100);
            if (lVar5 != 0) {
              *(undefined8 *)(*(longlong *)(lVar5 + 0x58) + 0x100) = 0;
              *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 0x100) = 0;
              uVar3 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0xc0))
                                (*(longlong **)(local_48 + 0x88),lVar5);
              (**(code **)(**(longlong **)(local_48 + 0x88) + 0x98))
                        (*(longlong **)(local_48 + 0x88),uVar3);
              FUN_00410f20(lVar5);
            }
          }
        }
        else {
          iVar2 = *(int *)(*(longlong *)(lVar6 + 0xf8) + 0x10);
          iVar9 = 1;
          if (0 < iVar2) {
            do {
              iVar11 = iVar9 + -1;
              uVar4 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
              cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
              if (cVar1 == '\0') {
                lVar8 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
                *(longlong *)(lVar8 + 0xf0) = lVar5;
              }
              else {
                lVar8 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
                *(longlong *)(lVar8 + 0x100) = lVar5;
              }
              uVar4 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0xf8),iVar11);
              FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8),uVar4);
              iVar9 = iVar9 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          if (*(longlong *)(lVar6 + 0x118) != 0) {
            iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x118) + 0xf8) + 0x10);
            iVar9 = 1;
            if (0 < iVar2) {
              do {
                if (*(byte *)(local_48 + 0x58) < 8) {
                  bVar12 = ((int)CONCAT71((int7)((ulonglong)local_48 >> 8),1) <<
                            (*(byte *)(local_48 + 0x58) & 0x1f) & 1U) != 0;
                }
                else {
                  bVar12 = false;
                }
                if (bVar12) {
                  lVar8 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar6 + 0x118) + 0xf8),
                                       iVar9 + -1);
                  *(longlong *)(lVar8 + 0x100) = lVar5;
                }
                else {
                  lVar8 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar6 + 0x118) + 0xf8),
                                       iVar9 + -1);
                  *(longlong *)(lVar8 + 0xf0) = lVar5;
                }
                uVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar6 + 0x118) + 0xf8),iVar9 + -1
                                    );
                FUN_004ae7e0(*(undefined8 *)(lVar5 + 0xf8),uVar4);
                iVar9 = iVar9 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
          iVar2 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x28))
                            (*(longlong **)(local_48 + 0x88));
          if (iVar2 < 2) {
            uVar4 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x30))
                              (*(longlong **)(local_48 + 0x88),0);
            uVar7 = (**(code **)(**(longlong **)(local_48 + 0x78) + 0x30))
                              (*(longlong **)(local_48 + 0x78),0);
            FUN_01cd98a0(uVar4,uVar7);
          }
          else {
            lVar5 = FUN_004aeac0(local_40[0],0);
            lVar5 = *(longlong *)(lVar5 + 0x100);
            if (lVar5 != 0) {
              *(undefined8 *)(*(longlong *)(lVar5 + 0x58) + 0x100) = 0;
              *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 0x100) = 0;
              uVar3 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0xc0))
                                (*(longlong **)(local_48 + 0x88),lVar5);
              (**(code **)(**(longlong **)(local_48 + 0x88) + 0x98))
                        (*(longlong **)(local_48 + 0x88),uVar3);
              FUN_00410f20(lVar5);
            }
          }
        }
        FUN_00410f20(lVar6);
        FUN_00410f20(local_40[0]);
        if (param_2 != '\0') {
          FUN_01ce4cd0(local_48,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
          FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),local_48);
          FUN_01ae5650(param_1);
        }
      }
    }
  }
  else {
    FUN_00410f20(local_40[0]);
  }
  FUN_00414480(local_res18);
  return;
}

