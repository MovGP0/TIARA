/* Ghidra address: 015073c0 */
/* Ghidra symbol: FUN_015073c0 */


void FUN_015073c0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined1 local_678 [256];
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550 [2];
  undefined1 local_53c [256];
  undefined1 local_43c [512];
  undefined1 local_23c [256];
  undefined1 local_13c [256];
  undefined1 local_3c [12];
  
  local_690 = 0;
  local_688 = 0;
  local_578 = 0;
  local_680 = 0;
  local_570 = 0;
  local_568 = 0;
  local_560 = 0;
  local_558 = 0;
  local_550[0] = 0;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(param_1[0x176] + 0x4f0));
  (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x176] + 0x4f0));
  iVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (0 < iVar2) {
    plVar1 = *(longlong **)(param_1[0xfb] + 0x4f0);
    iVar2 = (**(code **)(*plVar1 + 0x28))();
    iVar11 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar11);
        lVar8 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
        FUN_00416910(local_13c,*(undefined8 *)(lVar8 + 8),0xff);
        FUN_010c0760(local_23c,local_13c,local_43c,local_3c);
        if (*(longlong *)(lVar8 + 0x140) == 0) {
          uVar3 = FUN_00b905e0(0,iVar11 + -1);
          uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar3);
          lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          uVar3 = FUN_00b905f0(iVar11 + 1,iVar4 + -1);
          uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar3);
          lVar10 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
          if (*(longlong *)(lVar9 + 0x140) == *(longlong *)(lVar10 + 0x140)) {
            uVar3 = FUN_00b905e0(0,iVar11 + -1);
            uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar3);
            lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
            *(undefined8 *)(lVar8 + 0x140) = *(undefined8 *)(lVar9 + 0x140);
          }
          if (*(longlong *)(lVar8 + 0x140) == 0) {
            FUN_004169a0(local_550,local_23c);
            iVar4 = (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0xb0))
                              (*(longlong **)(param_1[0x176] + 0x4f0),local_550[0]);
            if (iVar4 == -1) {
              FUN_004169a0(&local_558,local_23c);
              iVar4 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_558);
              if (iVar4 == -1) {
                lVar9 = FUN_011079b0(&PTR_FUN_01106460,1);
                *(undefined1 *)(lVar9 + 0x11) = 1;
                *(undefined1 *)(lVar9 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x826);
                FUN_004169a0(lVar9 + 8,local_23c);
              }
              else {
                uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar4);
                lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106460);
                (**(code **)(*plVar6 + 0x98))(plVar6,iVar4);
              }
              FUN_004169a0(&local_560,local_23c);
              (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x80))
                        (*(longlong **)(param_1[0x176] + 0x4f0),local_560,lVar9);
            }
            else {
              uVar7 = (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x30))
                                (*(longlong **)(param_1[0x176] + 0x4f0),iVar4);
              lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106460);
            }
            *(longlong *)(lVar8 + 0x140) = lVar9;
            *(undefined1 *)(lVar8 + 0x11) = *(undefined1 *)(lVar9 + 0x11);
          }
          else {
            iVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6,*(longlong *)(lVar8 + 0x140));
            if (iVar4 != -1) {
              uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar4);
              uVar7 = FUN_004113f0(uVar7,&PTR_FUN_01106460);
              (**(code **)(*plVar6 + 0x18))(plVar6,&local_568,iVar4);
              FUN_00416910(local_23c,local_568,0xff);
              (**(code **)(*plVar6 + 0x98))(plVar6,iVar4);
              FUN_004169a0(&local_570,local_23c);
              (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x80))
                        (*(longlong **)(param_1[0x176] + 0x4f0),local_570,uVar7);
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x28))();
    iVar11 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar7 = (**(code **)(**(longlong **)(param_1[0x176] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0x176] + 0x4f0),iVar11);
        lVar8 = FUN_004113f0(uVar7,&PTR_FUN_01106460);
        (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x10))
                  (*(longlong **)(lVar8 + 0x50),*(undefined8 *)(param_1[0xfb] + 0x4f0));
        iVar4 = 0;
        uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
        lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
        while ((*(longlong *)(lVar9 + 0x140) != lVar8 &&
               (iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar4 < iVar5 + -1))) {
          iVar4 = iVar4 + 1;
          uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
          lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
        }
        *(int *)(lVar8 + 0x3c) = iVar4;
        iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        iVar4 = iVar4 + -1;
        uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
        lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
        while ((*(longlong *)(lVar9 + 0x140) != lVar8 && (0 < iVar4))) {
          iVar4 = iVar4 + -1;
          uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
          lVar9 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
        }
        *(int *)(lVar8 + 0x40) = iVar4;
        if (iVar4 < *(int *)(lVar8 + 0x3c)) {
          *(int *)(lVar8 + 0x40) = *(int *)(lVar8 + 0x3c);
        }
        FUN_00414ff0(local_53c,param_1 + 0x184);
        if (*(int *)(lVar8 + 0x3c) <= *(int *)(lVar8 + 0x40)) {
          iVar4 = (*(int *)(lVar8 + 0x40) - *(int *)(lVar8 + 0x3c)) + 1;
          do {
            FUN_00416780(&local_578,*(undefined2 *)((longlong)param_1 + 0xc42));
            FUN_00416910(local_678,local_578,0xff);
            FUN_004169a0(&local_680,local_53c);
            uVar3 = FUN_004170c0(&LAB_01507c00,local_680,1);
            FUN_004152c0(local_678,local_53c,0xff,uVar3);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_004169a0(&local_688,local_53c);
        (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x78))(*(longlong **)(lVar8 + 0x48),local_688);
        if (*(char *)((longlong)param_1 + 0xc44) != '\0') {
          FUN_00414ff0(local_53c,(longlong)param_1 + 0xc44);
          FUN_004169a0(&local_690,local_53c);
          (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x78))
                    (*(longlong **)(lVar8 + 0x48),local_690);
        }
        iVar11 = iVar11 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = (**(code **)(*plVar6 + 0x28))();
  iVar11 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar11);
      FUN_00410f20(uVar7);
      iVar11 = iVar11 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar6);
  (**(code **)(*(longlong *)param_1[0x176] + 0x268))((longlong *)param_1[0x176],0);
  (**(code **)(*param_1 + 0x608))(param_1,param_1);
  (**(code **)(**(longlong **)(param_1[0x180] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0x180] + 0x4f0),*(undefined8 *)(param_1[0x176] + 0x4f0));
  (**(code **)(*(longlong *)param_1[0x180] + 0x268))((longlong *)param_1[0x180],0);
  (**(code **)(*param_1 + 0x658))(param_1,param_1);
  FUN_00414560(&local_690,3);
  FUN_00414560(&local_578,6);
  return;
}

