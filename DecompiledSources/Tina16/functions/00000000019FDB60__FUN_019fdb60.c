/* Ghidra address: 019fdb60 */
/* Ghidra symbol: FUN_019fdb60 */


void FUN_019fdb60(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_fffffffffffffe78;
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
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [6];
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_78);
  FUN_019ee820(param_1,local_70,0x15,local_78,CONCAT44(uVar3,0xb));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_70[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x1c8))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_019f0400(param_1,&local_88,iVar4,0);
      FUN_00416ba0(&local_80,&DAT_019fe570,local_88);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_80)
      ;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar1 == 0x34) {
    FUN_00414b50(&local_60,L"SW_SPST");
    if (*(char *)(param_1 + 0xc0) == '\x04') {
      FUN_00416cd0(&local_90,3,&DAT_019fe570,local_60,L" VARS: ");
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_90)
      ;
    }
    else {
      FUN_00416cd0(&local_98,3,&DAT_019fe570,local_60,L" PARAMS: ");
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_98)
      ;
    }
  }
  else {
    sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (sVar1 == 0x3b) {
      FUN_00414b50(&local_60,L"SW_SPDT");
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        FUN_00416cd0(&local_a0,3,&DAT_019fe570,local_60,L" VARS: ");
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_a0);
      }
      else {
        FUN_00416cd0(&local_a8,3,&DAT_019fe570,local_60,L" PARAMS: ");
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_a8);
      }
    }
    else {
      FUN_00414b50(&local_60,L"TctrlSW");
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        FUN_00416cd0(&local_b0,3,&DAT_019fe570,local_60,L" VARS: ");
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_b0);
      }
      else {
        FUN_00416cd0(&local_b8,3,&DAT_019fe570,local_60,L" PARAMS: ");
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_b8);
      }
    }
  }
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if ((sVar1 == 0x34) ||
     (sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58)),
     sVar1 == 0x3b)) {
    uVar6 = FUN_019ed630(param_1,3,0);
    uVar7 = FUN_019ed630(param_1,2,0);
  }
  else {
    uVar6 = FUN_019ed630(param_1,7,0);
    uVar7 = FUN_019ed630(param_1,6,0);
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar6 = FUN_00b90620(uVar6,0x3eb0c6f7a0b5ed8d);
  }
  FUN_016b9450(&local_c0,uVar6);
  FUN_00416880(local_50,local_c0);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar7 = FUN_00b90620(uVar7,1.0 / *(double *)(param_1 + 0x1b3));
  }
  FUN_016b9450(&local_c8,uVar7);
  FUN_00416880(&local_58,local_c8);
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if ((sVar1 == 0x34) ||
     (sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58)),
     sVar1 == 0x3b)) {
    uVar3 = FUN_019edff0(param_1,1,0);
    FUN_0043f750(&local_d8,uVar3);
    FUN_00416cd0(&local_d0,6,L"DCstate=",local_d8,L" Roff=",local_58,L" Ron=",local_50[0]);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_d0);
  }
  else {
    uVar3 = FUN_019edff0(param_1,1,0);
    FUN_0043f750(&local_e8,uVar3);
    uVar6 = FUN_019ed630(param_1,2,0);
    FUN_016b9450(&local_f0,uVar6);
    FUN_00416880(&local_f8,local_f0);
    uVar6 = FUN_019ed630(param_1,3,0);
    FUN_016b9450(&local_100,uVar6);
    FUN_00416880(&local_108,local_100);
    uVar3 = FUN_019edff0(param_1,4,0);
    FUN_0043f750(&local_110,uVar3);
    uVar6 = FUN_019ed630(param_1,5,0);
    FUN_016b9450(&local_118,uVar6);
    FUN_00416880(&local_120,local_118);
    FUN_00416cd0(&local_e0,0xe,L"DCstate=",local_e8,L" Roff=",local_58,L" Ron=",local_50[0],L" Ton="
                 ,local_f8,L" Toff=",local_108,L" Periodic=",local_110,L" Period=",local_120);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_e0);
  }
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0xc0) & 0x1f)
            & 0x30U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_01a022a0(param_1,local_60);
  }
  FUN_00414480(&local_120);
  FUN_004144d0(&local_118);
  FUN_00414560(&local_110,2);
  FUN_004144d0(&local_100);
  FUN_00414480(&local_f8);
  FUN_004144d0(&local_f0);
  FUN_00414560(&local_e8,4);
  FUN_00414590(&local_c8,2);
  FUN_00414560(&local_b8,10);
  FUN_00414560(&local_60,3);
  return;
}

