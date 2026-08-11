/* Ghidra address: 00fb3e30 */
/* Ghidra symbol: FUN_00fb3e30 */


void FUN_00fb3e30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(double *)(param_1 + 0x838) = 1.0 / *(double *)(param_1 + 0xd60);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 2000),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x768),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x770),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7f0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x798),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),0);
  FUN_0043e130(&local_20,*(undefined8 *)(param_1 + 0xd70));
  iVar2 = FUN_004170c0(L"ATTINY26",local_20,1);
  if (iVar2 == 0) {
    FUN_0043e130(&local_28,*(undefined8 *)(param_1 + 0xd70));
    iVar2 = FUN_004170c0(L"ATTINY24",local_28,1);
    if (iVar2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
                (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xbf0));
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x840 + (longlong)iVar2 * 4);
      FUN_0043e130(&local_30,*(undefined8 *)(param_1 + 0xd70));
      iVar2 = FUN_004170c0(L"ATMEGA",local_30,1);
      if (iVar2 == 0) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),&DAT_00fb5418);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),&DAT_00fb542c);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7f0),0);
      }
      else {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),&DAT_00fb53dc);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),&DAT_00fb53f0);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7f0),&DAT_00fb5404);
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
                (*(longlong **)(param_1 + 0x720),*(undefined4 *)(param_1 + 0xbf0));
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x8a0 + (longlong)iVar2 * 4);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),&DAT_00fb5398);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),&DAT_00fb53ac);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7f0),0);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
              (*(longlong **)(param_1 + 0x708),*(undefined4 *)(param_1 + 0xbf0));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x860 + (longlong)iVar2 * 4);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),L"PB1 non-inverted PB0 inverted");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e8),L"PB3 non-inverted PB2 inverted");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7f0),0);
  }
  FUN_0043e130(&local_38,*(undefined8 *)(param_1 + 0xd70));
  iVar2 = FUN_004170c0(L"ATTINY26",local_38,1);
  if (iVar2 == 0) {
    FUN_0043e130(&local_58,*(undefined8 *)(param_1 + 0xd70));
    iVar2 = FUN_004170c0(L"ATTINY24",local_58,1);
    if (iVar2 == 0) {
      FUN_0043e130(&local_78,*(undefined8 *)(param_1 + 0xd70));
      iVar2 = FUN_004170c0(L"ATMEGA",local_78,1);
      if (iVar2 == 0) {
        FUN_0043e130(&local_80,*(undefined8 *)(param_1 + 0xd70));
        iVar2 = FUN_004170c0(&DAT_00fb5440,local_80,1);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x854);
          iVar2 = *(int *)(param_1 + 0xc04);
          if (iVar2 == 1) {
            *(undefined4 *)(param_1 + 0x818) = 0x100;
          }
          else if (iVar2 == 2) {
            *(undefined4 *)(param_1 + 0x818) = 0x200;
          }
          else if (iVar2 == 3) {
            *(undefined4 *)(param_1 + 0x818) = 0x400;
          }
          else {
            *(undefined4 *)(param_1 + 0x818) = 0x100;
          }
          FUN_00b90440(*(undefined8 *)(param_1 + 0x780),*(undefined8 *)(param_1 + 0xc18));
          (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
                    (*(longlong **)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0xc04));
          (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
                    (*(longlong **)(param_1 + 0x710),*(undefined4 *)(param_1 + 0xc08));
          FUN_0043f750(&local_d8,*(undefined4 *)(param_1 + 0xbf4));
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_d8);
          FUN_0043f750(&local_e0,*(undefined4 *)(param_1 + 0xbf8));
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_e0);
          FUN_0043f750(&local_e8,*(undefined4 *)(param_1 + 0xbfc));
          FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_e8);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 2000),1);
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                            (*(longlong **)(param_1 + 0x6e0));
          (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))
                    (*(longlong **)(param_1 + 2000),uVar3);
          *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0x818);
          goto LAB_00fb4d74;
        }
      }
      *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x854);
      *(undefined4 *)(param_1 + 0x818) = 0x10000;
      (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))
                (*(longlong **)(param_1 + 0x7a8),*(undefined4 *)(param_1 + 0xc04));
      FUN_00fb6220(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0xc04);
      *(int *)(param_1 + 0x814) = iVar2;
      if ((((iVar2 == 5) || (iVar2 == 6)) || (iVar2 == 7)) || ((iVar2 == 0xe || (iVar2 == 0xf)))) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x798),1);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
                  (*(longlong **)(param_1 + 0x798),*(undefined4 *)(param_1 + 0xc08));
        *(undefined1 *)(param_1 + 0x811) = 1;
      }
      else if (((iVar2 == 1) || (iVar2 == 2)) || ((iVar2 == 3 || ((iVar2 == 10 || (iVar2 == 0xb)))))
              ) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),1);
        (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
                  (*(longlong **)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0xc08));
        *(undefined1 *)(param_1 + 0x811) = 0;
      }
      else if ((iVar2 == 8) || (iVar2 == 9)) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),1);
        (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
                  (*(longlong **)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0xc08));
        *(undefined1 *)(param_1 + 0x811) = 0;
      }
      else {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),1);
        (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))
                  (*(longlong **)(param_1 + 0x7c8),*(undefined4 *)(param_1 + 0xc08));
      }
      if ((((iVar2 == 8) || (iVar2 == 10)) || (iVar2 == 0xc)) || (iVar2 == 0xe)) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x808),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x800),1);
        FUN_0043f750(&local_88,*(undefined4 *)(param_1 + 0xc00));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x808),local_88);
        *(undefined1 *)(param_1 + 0x812) = 1;
        *(undefined1 *)(param_1 + 0x813) = 0;
        *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0xc00);
      }
      else if (((iVar2 == 4) || (iVar2 == 9)) || ((iVar2 == 0xb || (iVar2 == 0xf)))) {
        *(undefined1 *)(param_1 + 0x812) = 0;
        *(undefined1 *)(param_1 + 0x813) = 1;
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
        FUN_0043f750(&local_90,*(undefined4 *)(param_1 + 0xbf4));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_90);
        FUN_0043f750(&local_98,*(undefined4 *)(param_1 + 0xbf8));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_98);
        FUN_0043f750(&local_a0,*(undefined4 *)(param_1 + 0xbfc));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_a0);
        *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0xbf4);
      }
      else {
        *(undefined1 *)(param_1 + 0x812) = 0;
        *(undefined1 *)(param_1 + 0x813) = 0;
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),1);
        FUN_0043f750(&local_a8,*(undefined4 *)(param_1 + 0xbf4));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_a8);
        FUN_0043f750(&local_b0,*(undefined4 *)(param_1 + 0xbf8));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_b0);
        FUN_0043f750(&local_b8,*(undefined4 *)(param_1 + 0xbfc));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_b8);
        (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),1);
        if ((iVar2 == 1) || (iVar2 == 5)) {
          *(undefined4 *)(param_1 + 0x824) = 0x100;
          (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),0)
          ;
          FUN_00b8fd60(&local_c0,
                       (double)(*(int *)(param_1 + 0x824) * *(int *)(param_1 + 0x820)) /
                       *(double *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_c0);
          (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1)
          ;
        }
        else if ((iVar2 == 2) || (iVar2 == 6)) {
          *(undefined4 *)(param_1 + 0x824) = 0x200;
          (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),0)
          ;
          FUN_00b8fd60(&local_c8,
                       (double)(*(int *)(param_1 + 0x824) * *(int *)(param_1 + 0x820)) /
                       *(double *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_c8);
          (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1)
          ;
        }
        else if ((iVar2 == 3) || (iVar2 == 7)) {
          *(undefined4 *)(param_1 + 0x824) = 0x400;
          (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),0)
          ;
          FUN_00b8fd60(&local_d0,
                       (double)(*(int *)(param_1 + 0x824) * *(int *)(param_1 + 0x820)) /
                       *(double *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_d0);
          (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1)
          ;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x8c0);
      *(undefined4 *)(param_1 + 0x818) = 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
                (*(longlong **)(param_1 + 0x7b0),*(undefined4 *)(param_1 + 0xc04));
      FUN_00fb6c10(param_1,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
                (*(longlong **)(param_1 + 0x790),*(undefined4 *)(param_1 + 0xc08));
      FUN_0043f750(&local_60,*(undefined4 *)(param_1 + 0xbf4));
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_60);
      FUN_0043f750(&local_68,*(undefined4 *)(param_1 + 0xbf8));
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_68);
      FUN_0043f750(&local_70,*(undefined4 *)(param_1 + 0xbfc));
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_70);
      *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0xbfc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x818) = 0x100;
    (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
              (*(longlong **)(param_1 + 0x7b0),*(undefined4 *)(param_1 + 0xc04));
    FUN_00fb6c10(param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
              (*(longlong **)(param_1 + 0x790),*(undefined4 *)(param_1 + 0xc08));
    FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0xbf4));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_40);
    FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0xbf8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_48);
    FUN_0043f750(&local_50,*(undefined4 *)(param_1 + 0xbfc));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7b8),local_50);
    *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0xbfc);
  }
LAB_00fb4d74:
  FUN_00b8fd60(&local_f8,*(undefined8 *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
  FUN_00416cd0(&local_f0,3,L"Fosc: ",local_f8,&DAT_00fb5470);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_f0);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x81c));
  FUN_00b8fd60(&local_108,uVar4,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_100,L"Max Period: ",local_108);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_100);
  uVar4 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x81c));
  FUN_00b8fd60(&local_118,uVar4,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_110,L"Max Duty Cycle: ",local_118);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_110);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x778),*(undefined8 *)(param_1 + 0xc10));
  FUN_00fb8770(param_1,param_2);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x780),*(undefined8 *)(param_1 + 0xc18));
  FUN_00fb7bc0(param_1,param_2);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x840));
  FUN_00b8fd60(&local_120,uVar4,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,local_120);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x844));
  FUN_00b8fd60(&local_128,uVar4,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,1,local_128);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x848));
  FUN_00b8fd60(&local_130,uVar4,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,2,local_130);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x84c));
  FUN_00b8fd60(&local_138,uVar4,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,3,local_138);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x850));
  FUN_00b8fd60(&local_140,uVar4,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,4,local_140);
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x854));
  FUN_00b8fd60(&local_148,uVar4,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,5,local_148);
  iVar2 = 1;
  do {
    dVar5 = (double)FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),
                                 1.0 / *(double *)(param_1 + 0xd60),
                                 (double)*(int *)(param_1 + 0x840 + (longlong)iVar2 * 4));
    if (*(double *)(param_1 + 0xc10) == dVar5) {
      (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))(*(longlong **)(param_1 + 2000),iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  FUN_00414560(&local_148,0x26);
  return;
}

