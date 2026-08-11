/* Ghidra address: 019bc2b0 */
/* Ghidra symbol: FUN_019bc2b0 */


void FUN_019bc2b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40 [2];
  
  local_68 = 0;
  local_70 = 0;
  cVar1 = FUN_01486310(param_1,L"components",&local_48);
  if ((cVar1 != '\0') && (cVar1 = FUN_01486310(param_1,L"wires",local_40), cVar1 != '\0')) {
    iVar9 = *(int *)(*(longlong *)(local_40[0] + 0x10) + 0x10);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar3 = FUN_00f33510(local_40[0],iVar7);
        cVar1 = FUN_004113d0(uVar3,&LAB_00f23b78);
        if (cVar1 != '\0') {
          uVar3 = FUN_00f33510(local_40[0],iVar7);
          uVar3 = FUN_004113f0(uVar3,&LAB_00f23b78);
          cVar1 = FUN_01488350(uVar3,L"connections",&local_50);
          if (cVar1 != '\0') {
            cVar1 = FUN_01488350(local_50,L"start",&local_58);
            if (cVar1 != '\0') {
              uVar3 = FUN_00414480(&local_70);
              cVar1 = FUN_019bf120(local_58,L"component",uVar3);
              if (cVar1 != '\0') {
                iVar10 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
                iVar8 = 0;
                if (-1 < iVar10 + -1) {
                  do {
                    uVar3 = FUN_00f33510(local_48,iVar8);
                    cVar1 = FUN_004113d0(uVar3,&LAB_00f23b78);
                    if (cVar1 != '\0') {
                      uVar3 = FUN_00f33510(local_48,iVar8);
                      uVar3 = FUN_004113f0(uVar3,&LAB_00f23b78);
                      uVar4 = FUN_00414480(&local_68);
                      cVar1 = FUN_019bf120(uVar3,&PTR_DAT_019bc6f0,uVar4);
                      if (cVar1 != '\0') {
                        iVar2 = 0;
                        if (local_70 != 0) {
                          iVar2 = *(int *)(local_70 + -4);
                        }
                        iVar5 = 0;
                        if (local_68 != 0) {
                          iVar5 = *(int *)(local_68 + -4);
                        }
                        uVar6 = iVar2 - iVar5 >> 0x1f;
                        if (((iVar2 - iVar5 ^ uVar6) - uVar6 == 1) &&
                           ((cVar1 = FUN_004563e0(&local_70,local_68,0), cVar1 != '\0' ||
                            (cVar1 = FUN_004563e0(&local_68,local_70,0), cVar1 != '\0')))) {
                          FUN_019bc1c0(local_58,local_68);
                          break;
                        }
                      }
                    }
                    iVar8 = iVar8 + 1;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
              }
            }
            cVar1 = FUN_01488350(local_50,&LAB_019bc704,&local_60);
            if (cVar1 != '\0') {
              uVar3 = FUN_00414480(&local_70);
              cVar1 = FUN_019bf120(local_60,L"component",uVar3);
              if (cVar1 != '\0') {
                iVar10 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
                iVar8 = 0;
                if (-1 < iVar10 + -1) {
                  do {
                    uVar3 = FUN_00f33510(local_48,iVar8);
                    cVar1 = FUN_004113d0(uVar3,&LAB_00f23b78);
                    if (cVar1 != '\0') {
                      uVar3 = FUN_00f33510(local_48,iVar8);
                      uVar3 = FUN_004113f0(uVar3,&LAB_00f23b78);
                      uVar4 = FUN_00414480(&local_68);
                      cVar1 = FUN_019bf120(uVar3,&PTR_DAT_019bc6f0,uVar4);
                      if (cVar1 != '\0') {
                        iVar2 = 0;
                        if (local_70 != 0) {
                          iVar2 = *(int *)(local_70 + -4);
                        }
                        iVar5 = 0;
                        if (local_68 != 0) {
                          iVar5 = *(int *)(local_68 + -4);
                        }
                        uVar6 = iVar2 - iVar5 >> 0x1f;
                        if (((iVar2 - iVar5 ^ uVar6) - uVar6 == 1) &&
                           ((cVar1 = FUN_004563e0(&local_70,local_68,0), cVar1 != '\0' ||
                            (cVar1 = FUN_004563e0(&local_68,local_70,0), cVar1 != '\0')))) {
                          FUN_019bc1c0(local_60,local_68);
                          break;
                        }
                      }
                    }
                    iVar8 = iVar8 + 1;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  FUN_00414560(&local_70,2);
  return;
}

