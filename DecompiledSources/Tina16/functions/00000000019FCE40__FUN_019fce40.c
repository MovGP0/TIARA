/* Ghidra address: 019fce40 */
/* Ghidra symbol: FUN_019fce40 */


void FUN_019fce40(longlong param_1,undefined2 param_2,longlong *param_3)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar4;
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
  undefined8 local_50 [2];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  local_140 = 0;
  local_148 = 0;
  local_138 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0xc0) == '\0') {
LAB_019fd06d:
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_68)
    ;
    FUN_019ee820(param_1,&local_60,param_2,local_68,CONCAT44(uVar4,0xb));
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_60);
  }
  else {
    sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (sVar2 != 0x93) goto LAB_019fd06d;
    *(undefined1 *)(param_1 + 0x8c) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_58)
    ;
    FUN_019ee820(param_1,local_50,0x15,local_58,CONCAT44(uVar4,0xb));
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
              (*(longlong **)(param_1 + 0x20),local_50[0]);
  }
  FUN_019f0400(param_1,&local_78,0,0);
  FUN_019f0400(param_1,&local_80,1,0);
  FUN_019f0400(param_1,&local_88,2,0);
  FUN_019f0400(param_1,&local_90,3,0);
  FUN_00416cd0(&local_70,8,&DAT_019fd914,local_78,&DAT_019fd914,local_80,&DAT_019fd914,local_88,
               &DAT_019fd914,local_90);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_70);
  uVar3 = FUN_019ed630(param_1,4,0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar3 = FUN_00b90650(uVar3,1.0 / *(double *)(param_1 + 0x1b3));
    uVar3 = FUN_00b90620(uVar3,0x3eb0c6f7a0b5ed8d);
  }
  FUN_016b9450(&local_98,uVar3);
  FUN_00416880(local_20,local_98);
  uVar3 = FUN_019ed630(param_1,3,0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar3 = FUN_00b90650(uVar3,1.0 / *(double *)(param_1 + 0x1b3));
    uVar3 = FUN_00b90620(uVar3,0x3eb0c6f7a0b5ed8d);
  }
  FUN_016b9450(&local_a0,uVar3);
  FUN_00416880(&local_28,local_a0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (sVar2 == 0x93) {
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        FUN_00414b50(&local_38,L" VARS: ");
      }
      else {
        FUN_00414b50(&local_38,L" PARAMS: ");
      }
      FUN_019ed1f0(param_1,&local_b0,2,0);
      FUN_019ed1f0(param_1,&local_b8,1,0);
      FUN_00416cd0(&local_a8,10,L"  SW",local_38,L"RON=",local_20[0],L" ROFF=",local_28,L" VH=",
                   local_b0,L" VT=",local_b8);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_a8);
      goto LAB_019fd7d6;
    }
  }
  sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar2 == 0x20) {
    FUN_019ed1f0(param_1,&local_c0,2,0);
    FUN_019ed1f0(param_1,&local_c8,1,0);
    FUN_00416cd0(&local_30,8,L"RON=",local_20[0],L" ROFF=",local_28,L" VON=",local_c0,L" VOFF=",
                 local_c8);
    cVar1 = FUN_019f3400(param_1,param_3,L"VSWITCH",local_30,&local_3c);
    if (cVar1 == '\0') {
      FUN_0043f750(&local_d8,*(undefined4 *)(param_1 + 0x38));
      FUN_00416ba0(&local_d0,L" S_VSWITCH_",local_d8);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_d0);
      FUN_0043f750(&local_e8,*(undefined4 *)(param_1 + 0x38));
      FUN_00416cd0(&local_e0,5,L".MODEL S_VSWITCH_",local_e8,L" VSWITCH (",local_30,&DAT_019fdaa4);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),local_e0);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      FUN_00416ba0(&local_f0,L"VSWITCH|",local_30);
      (**(code **)(*param_3 + 0x78))(param_3,local_f0);
    }
    else {
      FUN_0043f750(&local_100,local_3c + 1);
      FUN_00416ba0(&local_f8,L" S_VSWITCH_",local_100);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_f8);
    }
  }
  else {
    FUN_019ed1f0(param_1,&local_108,2,0);
    FUN_019ed1f0(param_1,&local_110,1,0);
    FUN_00416cd0(&local_30,8,L"RON=",local_20[0],L" ROFF=",local_28,L" VH=",local_108,L" VT=",
                 local_110);
    cVar1 = FUN_019f3400(param_1,param_3,L"VHYSTSWITCH",local_30,&local_3c);
    if (cVar1 == '\0') {
      FUN_0043f750(&local_120,*(undefined4 *)(param_1 + 0x3c));
      FUN_00416ba0(&local_118,L" S_VSWITCH_",local_120);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_118);
      FUN_0043f750(&local_130,*(undefined4 *)(param_1 + 0x3c));
      FUN_00416cd0(&local_128,5,L".MODEL S_VSWITCH_",local_130,L" SW (",local_30,&DAT_019fdaa4);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),local_128)
      ;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      FUN_00416ba0(&local_138,L"VHYSTSWITCH|",local_30);
      (**(code **)(*param_3 + 0x78))(param_3,local_138);
    }
    else {
      FUN_0043f750(&local_148,local_3c + 1);
      FUN_00416ba0(&local_140,L" S_VSWITCH_",local_148);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_140);
    }
  }
LAB_019fd7d6:
  if (*(char *)(param_1 + 0xc0) == '\0') {
    sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (sVar2 == 0x93) {
      cVar1 = FUN_019edff0(param_1,5,0);
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),L" OFF")
        ;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),&LAB_019fdb50);
      }
    }
  }
  FUN_00414560(&local_148,0x15);
  FUN_00414590(&local_a0,2);
  FUN_00414560(&local_90,9);
  FUN_00414560(&local_38,4);
  return;
}

