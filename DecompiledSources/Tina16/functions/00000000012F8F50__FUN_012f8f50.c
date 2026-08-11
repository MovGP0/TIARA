/* Ghidra address: 012f8f50 */
/* Ghidra symbol: FUN_012f8f50 */


void FUN_012f8f50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_64 [2];
  undefined1 local_5c [52];
  undefined8 local_28;
  undefined8 local_20;
  
  local_b0 = auStack_108;
  local_c0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  iVar2 = FUN_006dd6f0(uVar4);
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
  cVar1 = FUN_012e5d00(uVar4,2);
  if (cVar1 == '\0') {
    FUN_0072d730(L"There is no reference curve to this circuit.",0xffffffff,0xffffffff);
  }
  else {
    uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar2 = FUN_006dd6f0(uVar4);
    uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    local_90 = FUN_012e5d70(uVar4);
    uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar2 = FUN_006dd6f0(uVar4);
    uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    iVar2 = FUN_012e5c80(uVar4);
    if (iVar2 != 0) {
      uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      iVar2 = FUN_006dd6f0(uVar4);
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
      iVar2 = FUN_012e6020(uVar4,local_90);
      if (iVar2 == 2) {
        uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        iVar2 = FUN_006dd6f0(uVar4);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
        iVar2 = FUN_012e5c80(uVar4);
        if (iVar2 < 2) {
          uVar4 = FUN_007fc180(&PTR_FUN_012e63b8,1,param_1);
          *(undefined8 *)(param_1 + 0xae8) = uVar4;
          FUN_012e68a0(uVar4,&local_a8);
          if (local_a8 != 0) {
            FUN_00414b50(&local_98,L".refresult");
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                              (*(longlong **)(param_1 + 0x838));
            if (iVar2 == 0) {
              FUN_00416ad0(&local_98,&DAT_012f9768);
            }
            else {
              iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                                (*(longlong **)(param_1 + 0x838));
              if (iVar2 == 1) {
                FUN_00416ad0(&local_98,&DAT_012f977c);
              }
              else {
                iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                                  (*(longlong **)(param_1 + 0x838));
                if (iVar2 == 2) {
                  FUN_00416ad0(&local_98,&DAT_012f9790);
                }
              }
            }
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            lVar5 = FUN_006dd390(uVar4);
            iVar2 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x10),&LAB_012f97a4);
            if (iVar2 == 0) {
              FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_b8);
              lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
              local_e8 = local_98;
              FUN_00416cd0(&local_a0,3,local_b8,*(undefined8 *)(lVar5 + 0x10));
            }
            else {
              FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_c0);
              uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
              lVar5 = FUN_006dd390(uVar4);
              lVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
              local_e8 = *(ulonglong *)(lVar5 + 0x10);
              local_e0 = &LAB_012f97a4;
              local_d8 = *(undefined8 *)(lVar6 + 0x10);
              local_d0 = local_98;
              FUN_00416cd0(&local_a0,6,local_c0,&LAB_012f97a4);
            }
            cVar1 = FUN_00440a20(local_a0,1);
            if (cVar1 != '\0') {
              local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_a0,0x20);
              local_e8 = local_e8 & 0xffffffffffffff00;
              local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
              FUN_01d317c0(local_20,local_5c);
              FUN_01d30e90(local_20,local_64);
              if (*(char *)(param_1 + 0xabd) == '\0') {
                FUN_01d30f00(local_20,&local_80,8);
                FUN_01d30f00(local_20,&local_84,4);
                FUN_01d30f00(local_20,&local_88,4);
              }
              local_70 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,local_20);
              uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
              iVar2 = FUN_006dd6f0(uVar4);
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
              uVar3 = FUN_012e5d70(uVar4);
              local_78 = FUN_01d347d0(*(undefined8 *)(local_70 + 8),uVar3);
              FUN_01cc09f0(local_78,local_a8);
              iVar2 = FUN_01d31a40(local_20);
              if (iVar2 != 0) {
                uVar3 = FUN_01d31a40(local_20);
                FUN_00b047e0(uVar3);
              }
              FUN_00410f20(local_20);
              FUN_00410f20(local_28);
              local_e8 = CONCAT44(local_e8._4_4_,local_88);
              FUN_0130d680(local_a0,local_70,local_80,local_84);
              FUN_00410f20(local_70);
            }
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            FUN_01304bb0(param_1,uVar4);
            uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
            FUN_013056e0(param_1,1,uVar4);
          }
        }
        else {
          FUN_0072d730(L"Check only one reference CURVE!",0xffffffff,0xffffffff);
        }
        goto LAB_012f952b;
      }
    }
    FUN_0072d730(L"Check a reference CURVE! Be sure, reference DATA is not checked.",0xffffffff,
                 0xffffffff);
  }
LAB_012f952b:
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_a8,3);
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  return;
}

