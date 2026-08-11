/* Ghidra address: 014ca050 */
/* Ghidra symbol: FUN_014ca050 */


void FUN_014ca050(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar6,1);
  iVar12 = *(int *)(param_2 + 0x10);
  iVar11 = 0;
  if (-1 < iVar12 + -1) {
    do {
      plVar7 = (longlong *)FUN_00b94e60(param_2,iVar11);
      if ((plVar7 != (longlong *)0x0) && (cVar2 = FUN_0198a580(plVar7), cVar2 == '\x03')) {
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_48);
        iVar4 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_48);
        if (iVar4 == -1) {
          uVar8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          (**(code **)(*plVar6 + 0x80))(plVar6,local_48,uVar8);
        }
        else {
          uVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar4);
        }
        FUN_004ae7e0(uVar8,plVar7);
      }
      if ((plVar7 == (longlong *)0x0) || (cVar2 = FUN_0198a580(plVar7), cVar2 != '\x04')) {
LAB_014ca334:
        if ((plVar7 != (longlong *)0x0) && (cVar2 = FUN_0198a580(plVar7), cVar2 == '\x05')) {
          uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
          cVar2 = FUN_01563800(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x12a0),uVar5);
          if (cVar2 != '\0') {
            FUN_0198b6a0(param_2,plVar7);
          }
        }
      }
      else {
        sVar3 = FUN_01d03160(plVar7);
        if ((sVar3 != 0xa5) && ((sVar3 != 0xad && (sVar3 != 0xa8)))) {
          cVar2 = FUN_01d04d40(plVar7);
          if ((cVar2 == '\0') ||
             (((char)plVar7[0x34] != '\x01' || (*(longlong *)(plVar7[0x35] + 8) == 0)))) {
            cVar2 = FUN_01d04d40(plVar7);
            if ((cVar2 == '\0') || ((char)plVar7[0x34] != '\x02')) {
              cVar2 = FUN_01d3fd10(plVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x1a0) + 0x23e0));
              if (((cVar2 == '\0') || (cVar2 = FUN_01d3f280(plVar7), cVar2 != '\0')) &&
                 ((*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x23e0) == '\0' ||
                  ((char)plVar7[0x34] != '\x03')))) {
                if ((sVar3 == 0x90) || (sVar3 == 0x86)) {
LAB_014ca303:
                  (**(code **)(*plVar7 + 0x288))(plVar7,local_40);
                  FUN_0198b6a0(param_2,plVar7);
                }
                else {
                  cVar2 = FUN_01d40010(sVar3);
                  if (((cVar2 == '\0') || (*(char *)((longlong)plVar7 + 0x3d2) != '\0')) &&
                     ((sVar3 != 0x91 && (cVar2 = FUN_01d3fee0(plVar7,1), cVar2 == '\0')))) {
                    cVar2 = FUN_01d3fee0(plVar7,2);
                    if (cVar2 != '\0') {
                      uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
                      cVar2 = FUN_01563870(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x12a0),
                                           plVar7,uVar5);
                      if (cVar2 != '\0') goto LAB_014ca2ef;
                    }
                  }
                  else {
LAB_014ca2ef:
                    if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x23e0) == '\0')
                    goto LAB_014ca303;
                  }
                  if (sVar3 == 4) {
                    (**(code **)(*plVar7 + 0x210))(plVar7,0);
                  }
                }
              }
              else {
                (**(code **)(*plVar7 + 0x288))(plVar7,local_40);
                FUN_0198b6a0(param_2,plVar7);
              }
            }
            else {
              *(undefined1 *)(plVar7[0x35] + 0x116) = 1;
            }
          }
          else {
            FUN_014ca050(param_1,*(undefined8 *)(plVar7[0x35] + 8));
          }
          goto LAB_014ca334;
        }
      }
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar12 = (**(code **)(*plVar6 + 0x28))();
  iVar11 = 0;
  if (-1 < iVar12 + -1) {
    do {
      lVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar11);
      bVar1 = true;
      for (iVar4 = 0; (bool)(bVar1 & iVar4 < *(int *)(lVar9 + 0x10)); iVar4 = iVar4 + 1) {
        plVar7 = (longlong *)FUN_004aeac0(lVar9,iVar4);
        uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
        if ((bVar1) &&
           (cVar2 = FUN_01563800(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x12a0),uVar5),
           cVar2 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      if (bVar1) {
        iVar4 = *(int *)(lVar9 + 0x10);
        iVar10 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar8 = FUN_004aeac0(lVar9,iVar10);
            FUN_0198b6a0(param_2,uVar8);
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar12 = (**(code **)(*plVar6 + 0x28))();
  iVar11 = 0;
  if (-1 < iVar12 + -1) {
    do {
      uVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar11);
      FUN_00410f20(uVar8);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  FUN_00410f20(plVar6);
  FUN_00b95360(param_2);
  FUN_00414560(&local_48,2);
  return;
}

