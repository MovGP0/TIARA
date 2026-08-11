/* Ghidra address: 00fb7bc0 */
/* Ghidra symbol: FUN_00fb7bc0 */


void FUN_00fb7bc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
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
  undefined8 local_30 [3];
  
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x770),0);
  FUN_0043e130(local_30,*(undefined8 *)(param_1 + 0xd70));
  iVar2 = FUN_004170c0(L"ATTINY",local_30[0],1);
  if (iVar2 == 0) {
    FUN_0043e130(&local_68,*(undefined8 *)(param_1 + 0xd70));
    iVar2 = FUN_004170c0(L"ATMEGA",local_68,1);
    if (iVar2 == 0) {
      FUN_0043e130(&local_70,*(undefined8 *)(param_1 + 0xd70));
      iVar2 = FUN_004170c0(&LAB_00fb8764,local_70,1);
      if (iVar2 == 0) {
        dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x780));
        iVar2 = FUN_0040c770((dVar5 * 0.5 * *(double *)(param_1 + 0xd60)) /
                             (double)*(int *)(param_1 + 0x820));
        iVar2 = *(int *)(param_1 + 0x824) - iVar2;
        while ((iVar2 < 0 && (*(int *)(param_1 + 0x820) < *(int *)(param_1 + 0x81c)))) {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                            (*(longlong **)(param_1 + 0x6e0));
          if (4 < iVar3) break;
          plVar1 = *(longlong **)(param_1 + 0x6e0);
          iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
          (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                            (*(longlong **)(param_1 + 0x6e0));
          iVar2 = *(int *)(param_1 + 0x840 + (longlong)iVar2 * 4);
          *(int *)(param_1 + 0x820) = iVar2;
          uVar7 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                               1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
          FUN_00b8fd60(&local_b0,uVar7,*PTR_DAT_02005310,0,1);
          FUN_00416ba0(&local_a8,L"Max Period: ",local_b0);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_a8);
          uVar7 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                               1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820))
          ;
          FUN_00b8fd60(&local_c0,uVar7,*PTR_DAT_02005310,0,1);
          FUN_00416ba0(&local_b8,L"Max Duty Cycle: ",local_c0);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_b8);
          iVar2 = FUN_0040c770((dVar5 * 0.5 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820));
          iVar2 = *(int *)(param_1 + 0x824) - iVar2;
        }
        FUN_0064de00(*(undefined8 *)(param_1 + 0x770),0);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))(*(longlong **)(param_1 + 2000),uVar4)
        ;
        if (iVar2 < 0) {
          FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Duty cyle error");
        }
        else {
          FUN_0043f750(&local_c8,iVar2);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_c8);
          FUN_0043f750(&local_d0,iVar2);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_d0);
          *(int *)(param_1 + 0xbf4) = iVar2;
          *(int *)(param_1 + 0xc00) = iVar2;
        }
        goto LAB_00fb8610;
      }
    }
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x780));
    dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
    if (dVar5 < dVar6) {
      if (*(char *)(param_1 + 0x811) == '\0') {
        iVar2 = FUN_0040c770(((dVar5 * *(double *)(param_1 + 0xd60)) /
                             (double)*(int *)(param_1 + 0x820)) / 2.0);
        iVar2 = *(int *)(param_1 + 0x824) - iVar2;
      }
      else {
        iVar2 = FUN_0040c770((dVar5 * *(double *)(param_1 + 0xd60)) /
                             (double)*(int *)(param_1 + 0x820));
        iVar2 = *(int *)(param_1 + 0x824) - iVar2;
      }
      while ((iVar2 < 0 && (*(int *)(param_1 + 0x820) < *(int *)(param_1 + 0x81c)))) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        if (4 < iVar3) break;
        plVar1 = *(longlong **)(param_1 + 0x6e0);
        iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        iVar2 = *(int *)(param_1 + 0x840 + (longlong)iVar2 * 4);
        *(int *)(param_1 + 0x820) = iVar2;
        uVar7 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
        FUN_00b8fd60(&local_80,uVar7,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_78,L"Max Period: ",local_80);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_78);
        uVar7 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820));
        FUN_00b8fd60(&local_90,uVar7,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_88,L"Max Duty Cycle: ",local_90);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_88);
        if (*(char *)(param_1 + 0x811) == '\0') {
          iVar2 = FUN_0040c770(((dVar5 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820)) / 2.0);
          iVar2 = *(int *)(param_1 + 0x824) - iVar2;
        }
        else {
          iVar2 = FUN_0040c770((dVar5 * *(double *)(param_1 + 0xd60)) /
                               (double)*(int *)(param_1 + 0x820));
          iVar2 = *(int *)(param_1 + 0x824) - iVar2;
        }
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x770),0);
      if (iVar2 < 0) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Duty cyle error");
      }
      else {
        FUN_0043f750(&local_98,iVar2);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_98);
        FUN_0043f750(&local_a0,iVar2);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_a0);
        *(int *)(param_1 + 0xbf4) = iVar2;
        *(int *)(param_1 + 0xc00) = iVar2;
      }
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Duty cycle error");
    }
  }
  else {
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x780));
    dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
    if (dVar5 < dVar6) {
      iVar2 = FUN_0040c770((dVar5 * *(double *)(param_1 + 0xd60)) /
                           (double)*(int *)(param_1 + 0x820));
      iVar2 = *(int *)(param_1 + 0x824) - iVar2;
      while ((iVar2 < 0 && (*(int *)(param_1 + 0x820) < *(int *)(param_1 + 0x81c)))) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                          (*(longlong **)(param_1 + 0x708));
        if (0xe < iVar3) break;
        plVar1 = *(longlong **)(param_1 + 0x708);
        iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + 1);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                          (*(longlong **)(param_1 + 0x708));
        iVar2 = *(int *)(param_1 + 0x860 + (longlong)iVar2 * 4);
        *(int *)(param_1 + 0x820) = iVar2;
        uVar7 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)iVar2);
        FUN_00b8fd60(&local_40,uVar7,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_38,L"Max Period: ",local_40);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_38);
        uVar7 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),
                             1.0 / *(double *)(param_1 + 0xd60),(double)*(int *)(param_1 + 0x820));
        FUN_00b8fd60(&local_50,uVar7,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_48,L"Max Duty Cycle: ",local_50);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_48);
        iVar2 = FUN_0040c770((dVar5 * *(double *)(param_1 + 0xd60)) /
                             (double)*(int *)(param_1 + 0x820));
        iVar2 = *(int *)(param_1 + 0x824) - iVar2;
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x770),0);
      if (iVar2 < 0) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Duty cyle error");
      }
      else {
        *(int *)(param_1 + 0xbf4) = iVar2;
        *(int *)(param_1 + 0xc00) = iVar2;
        FUN_0043f750(&local_58,iVar2);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_58);
        FUN_0043f750(&local_60,iVar2);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_60);
      }
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x770),L"Duty cycle error");
    }
  }
LAB_00fb8610:
  FUN_00414560(&local_d0,0x15);
  return;
}

