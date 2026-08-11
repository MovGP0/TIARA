/* Ghidra address: 01a8b160 */
/* Ghidra symbol: FUN_01a8b160 */


void FUN_01a8b160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  int local_40;
  int local_3c;
  undefined1 local_38 [24];
  
  local_60 = 0;
  local_58 = 0;
  iVar4 = FUN_006d5fd0(*(undefined8 *)(param_1 + 0xa68),param_4,param_5);
  bVar2 = true;
  if (-1 < iVar4) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x10);
    uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
    cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01ac9770);
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x10);
      lVar8 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
      if (lVar8 != 0) {
        iVar5 = (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x28))(*(longlong **)(lVar8 + 0xd8));
        if (0 < iVar5) {
          lVar8 = (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x30))
                            (*(longlong **)(lVar8 + 0xd8),0);
          iVar5 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x28))(*(longlong **)(lVar8 + 0x80));
          if (0 < iVar5) {
            uVar7 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))
                              (*(longlong **)(lVar8 + 0x80),0);
            cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01aae560);
            if (cVar3 == '\0') {
              uVar7 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))
                                (*(longlong **)(lVar8 + 0x80),0);
              cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01aaff18);
              if (cVar3 == '\0') {
                lVar8 = 0;
              }
              else {
                lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))
                                  (*(longlong **)(lVar8 + 0x80),0);
                lVar8 = *(longlong *)(lVar8 + 0x88);
              }
            }
            else {
              lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))
                                (*(longlong **)(lVar8 + 0x80),0);
              lVar8 = *(longlong *)(lVar8 + 0xd0);
            }
            if (lVar8 != 0) {
              FUN_01cc37d0(*(undefined8 *)(lVar8 + 8),&local_60);
              FUN_00441920(&local_58,local_60);
              if (local_58 != 0) {
                iVar5 = FUN_00416db0(local_58,*(undefined8 *)(param_1 + 0x1078));
                if ((iVar5 != 0) || (bVar2 = false, *(int *)(param_1 + 0x1074) != iVar4)) {
                  uVar7 = FUN_007ffaf0(param_1);
                  uVar6 = FUN_008077f0(uVar7);
                  (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x290))
                            (*(longlong **)(param_1 + 0xfd8),local_38,uVar6,local_58,0);
                  FUN_0064e030(*(undefined8 *)(param_1 + 0xfd8),0xff000018);
                  FUN_006d6170(*(undefined8 *)(param_1 + 0xa68),local_48,iVar4);
                  local_50 = FUN_00498310(local_40 + -10,local_3c + -2);
                  uVar9 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0xa68),&local_50);
                  local_50._4_4_ = (undefined4)(uVar9 >> 0x20);
                  uVar6 = local_50._4_4_;
                  local_50 = uVar9;
                  FUN_00429ca0(local_38,uVar9 & 0xffffffff,uVar6);
                  (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x270))
                            (*(longlong **)(param_1 + 0xfd8),local_38,local_58);
                  FUN_00414ad0(param_1 + 0x1078,local_58);
                  bVar2 = false;
                }
              }
            }
          }
        }
      }
    }
  }
  *(int *)(param_1 + 0x1074) = iVar4;
  if (bVar2) {
    FUN_0065f800(*(undefined8 *)(param_1 + 0xfd8));
    FUN_00414480(param_1 + 0x1078);
  }
  FUN_00414560(&local_60,2);
  return;
}

