/* Ghidra address: 00fb8770 */
/* Ghidra symbol: FUN_00fb8770 */


void FUN_00fb8770(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  FUN_0043e130(local_30,*(undefined8 *)(param_1 + 0xd70));
  iVar2 = FUN_004170c0(L"ATTINY",local_30[0],1);
  if (iVar2 == 0) {
    FUN_0043e130(&local_80,*(undefined8 *)(param_1 + 0xd70));
    iVar2 = FUN_004170c0(L"ATMEGA",local_80,1);
    if (iVar2 == 0) {
      FUN_0043e130(&local_88,*(undefined8 *)(param_1 + 0xd70));
      iVar2 = FUN_004170c0(&DAT_00fb9318,local_88,1);
      if (iVar2 == 0) goto code_r0x00fb91f7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
    dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
    if (*(char *)(param_1 + 0x811) == '\0') {
      iVar2 = FUN_0040c770(((dVar4 * *(double *)(param_1 + 0xd60)) /
                           (double)*(int *)(param_1 + 0x820)) / 2.0 - 1.0);
    }
    else {
      iVar2 = FUN_0040c770((dVar4 * *(double *)(param_1 + 0xd60)) /
                           (double)*(int *)(param_1 + 0x820) - 1.0);
    }
    if (7 < *(int *)(param_1 + 0x814)) {
      while ((iVar2 < *(int *)(param_1 + 0x824) && (1 < *(int *)(param_1 + 0x820)))) {
        plVar1 = *(longlong **)(param_1 + 0x6e0);
        iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + -1);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        iVar2 = *(int *)(param_1 + 0x840 + (longlong)iVar2 * 4);
        *(int *)(param_1 + 0x820) = iVar2;
        uVar5 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
        FUN_00b8fd60(&local_98,uVar5,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_90,L"Max Period: ",local_98);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_90);
        uVar5 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820));
        FUN_00b8fd60(&local_a8,uVar5,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_a0,L"Max Duty Cycle: ",local_a8);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_a0);
        if (*(char *)(param_1 + 0x811) == '\0') {
          iVar2 = FUN_0040c770(((dVar4 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820)) / 2.0 - 1.0);
        }
        else {
          iVar2 = FUN_0040c770((dVar4 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820) - 1.0);
        }
      }
      while (((*(int *)(param_1 + 0x824) <= iVar2 &&
              (*(int *)(param_1 + 0x820) < *(int *)(param_1 + 0x81c))) &&
             (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                                (*(longlong **)(param_1 + 0x6e0)), iVar3 < 5))) {
        plVar1 = *(longlong **)(param_1 + 0x6e0);
        iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        iVar2 = *(int *)(param_1 + 0x840 + (longlong)iVar2 * 4);
        *(int *)(param_1 + 0x820) = iVar2;
        uVar5 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
        FUN_00b8fd60(&local_b8,uVar5,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_b0,L"Max Period: ",local_b8);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_b0);
        uVar5 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820));
        FUN_00b8fd60(&local_c8,uVar5,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_c0,L"Max Duty Cycle: ",local_c8);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_c0);
        if (*(char *)(param_1 + 0x811) == '\0') {
          iVar2 = FUN_0040c770(((dVar4 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820)) / 2.0 - 1.0);
        }
        else {
          iVar2 = FUN_0040c770((dVar4 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820) - 1.0);
        }
      }
    }
    FUN_0064de00(*(undefined8 *)(param_1 + 0x768),0);
    if (iVar2 < *(int *)(param_1 + 0x824)) {
      FUN_0043f750(&local_d0,iVar2);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_d0);
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x768),L"PWM period error");
    }
  }
  else {
    dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
    iVar2 = FUN_0040c770((dVar4 * *(double *)(param_1 + 0xd60)) / (double)*(int *)(param_1 + 0x820)
                         - 1.0);
    while ((iVar2 < *(int *)(param_1 + 0x818) / 2 && (1 < *(int *)(param_1 + 0x820)))) {
      plVar1 = *(longlong **)(param_1 + 0x708);
      iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + -1);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      iVar2 = *(int *)(param_1 + 0x860 + (longlong)iVar2 * 4);
      *(int *)(param_1 + 0x820) = iVar2;
      uVar5 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                           1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
      FUN_00b8fd60(&local_40,uVar5,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_38,L"Max Period: ",local_40);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_38);
      uVar5 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                           1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820));
      FUN_00b8fd60(&local_50,uVar5,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_48,L"Max Duty Cycle: ",local_50);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_48);
      iVar2 = FUN_0040c770((dVar4 * *(double *)(param_1 + 0xd60)) /
                           (double)*(int *)(param_1 + 0x820) - 1.0);
    }
    while (((*(int *)(param_1 + 0x818) <= iVar2 &&
            (*(int *)(param_1 + 0x820) < *(int *)(param_1 + 0x81c))) &&
           (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                              (*(longlong **)(param_1 + 0x708)), iVar3 < 0xf))) {
      plVar1 = *(longlong **)(param_1 + 0x708);
      iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      iVar2 = *(int *)(param_1 + 0x860 + (longlong)iVar2 * 4);
      *(int *)(param_1 + 0x820) = iVar2;
      uVar5 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                           1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
      FUN_00b8fd60(&local_60,uVar5,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_58,L"Max Period: ",local_60);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_58);
      uVar5 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                           1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820));
      FUN_00b8fd60(&local_70,uVar5,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_68,L"Max Duty Cycle: ",local_70);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_68);
      iVar2 = FUN_0040c770((dVar4 * *(double *)(param_1 + 0xd60)) /
                           (double)*(int *)(param_1 + 0x820) - 1.0);
    }
    FUN_0064de00(*(undefined8 *)(param_1 + 0x768),0);
    if (iVar2 < *(int *)(param_1 + 0x818)) {
      *(int *)(param_1 + 0x824) = iVar2;
      FUN_0043f750(&local_78,iVar2);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_78);
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x768),L"PWM period error");
    }
  }
code_r0x00fb91f7:
  FUN_00414560(&local_d0,0x15);
  return;
}

