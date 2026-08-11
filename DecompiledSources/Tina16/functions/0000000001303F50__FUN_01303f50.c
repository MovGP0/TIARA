/* Ghidra address: 01303f50 */
/* Ghidra symbol: FUN_01303f50 */


void FUN_01303f50(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  if (lVar5 != 0) {
    uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    FUN_013056e0(param_1,0,uVar6);
  }
  uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  iVar1 = FUN_006dd6f0(uVar6);
  uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))(*(longlong **)(param_1 + 0x8b0));
  FUN_012e5890(uVar6,uVar2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10);
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
      iVar3 = FUN_012e58b0();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))
                            (*(longlong **)(param_1 + 0x8b0));
          if (iVar4 == 0) {
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
            FUN_012e5f50(uVar6,iVar8,1);
          }
          else {
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))
                              (*(longlong **)(param_1 + 0x8b0));
            if (iVar4 == 1) {
              uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
              iVar4 = FUN_012e6020(uVar6,iVar8);
              if (iVar4 == 1) {
                uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                FUN_012e5f50(uVar6,iVar8,1);
              }
              else {
                uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                FUN_012e5f50(uVar6,iVar8,0);
              }
            }
            else {
              iVar4 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))
                                (*(longlong **)(param_1 + 0x8b0));
              if (iVar4 == 2) {
                uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                iVar4 = FUN_012e6020(uVar6,iVar8);
                if (iVar4 == 2) {
                  uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                  FUN_012e5f50(uVar6,iVar8,1);
                }
                else {
                  uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                  FUN_012e5f50(uVar6,iVar8,0);
                }
              }
              else {
                iVar4 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))
                                  (*(longlong **)(param_1 + 0x8b0));
                if (iVar4 == 3) {
                  uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                  iVar4 = FUN_012e6020(uVar6,iVar8);
                  if (iVar4 == 0) {
                    uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                    FUN_012e5f50(uVar6,iVar8,1);
                  }
                  else {
                    uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar7);
                    FUN_012e5f50(uVar6,iVar8,0);
                  }
                }
              }
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_01304bb0(param_1,uVar6);
  uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_013056e0(param_1,1,uVar6);
  return;
}

