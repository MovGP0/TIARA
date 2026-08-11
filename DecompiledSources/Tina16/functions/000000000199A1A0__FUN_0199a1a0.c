/* Ghidra address: 0199a1a0 */
/* Ghidra symbol: FUN_0199a1a0 */


void FUN_0199a1a0(longlong param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  iVar8 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58);
  if (param_2 != 0) {
    do {
      for (; iVar8 < *(int *)(param_1 + 0x6c); iVar8 = iVar8 + 1) {
        plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar8);
        sVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (sVar1 == 0x96) {
          plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar8);
          (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
          iVar2 = FUN_00416db0(param_2,local_30);
          if (iVar2 == 0) break;
        }
      }
      if (iVar8 < *(int *)(param_1 + 0x6c)) {
        plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar8);
        sVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (sVar1 == 0x96) {
          plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar8);
          (**(code **)(*plVar4 + 0x288))(plVar4,&local_38);
          iVar2 = FUN_00416db0(param_2,local_38);
          if (iVar2 == 0) {
            plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar8);
            lVar5 = (**(code **)(*plVar4 + 0x250))(plVar4,0);
            iVar2 = *(int *)(lVar5 + 0x10);
            iVar9 = 0;
            if (-1 < iVar2 + -1) {
              do {
                lVar6 = FUN_004aeac0(lVar5,iVar9);
                if (((lVar6 != 0) && (iVar9 < *(int *)(param_3 + 0x10))) &&
                   (lVar6 = FUN_004aeac0(param_3,iVar9), lVar6 != 0)) {
                  uVar7 = FUN_004aeac0(lVar5,iVar9);
                  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x18))
                                    (*(longlong **)(param_1 + 0xd0),uVar7);
                  *(undefined4 *)(param_1 + 0x50) = uVar3;
                  plVar4 = (longlong *)FUN_004aeac0(param_3,iVar9);
                  uVar3 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
                  *(undefined4 *)(param_1 + 0x74) = uVar3;
                  *(undefined4 *)(param_1 + 0x4c) = 0;
                  if (-1 < *(int *)(param_1 + 0x74)) {
                    FUN_01997020(param_1,*(undefined4 *)(param_1 + 0x50),
                                 *(undefined4 *)(param_1 + 0x4c));
                    FUN_01998310(param_1);
                  }
                }
                iVar9 = iVar9 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x6c));
  }
  FUN_00414560(&local_38,2);
  return;
}

