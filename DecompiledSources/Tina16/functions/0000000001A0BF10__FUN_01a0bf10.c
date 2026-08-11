/* Ghidra address: 01a0bf10 */
/* Ghidra symbol: FUN_01a0bf10 */


void FUN_01a0bf10(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined7 uVar4;
  longlong lVar3;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  double local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  int local_68;
  undefined1 local_61;
  int local_60;
  undefined1 local_59;
  int local_58;
  undefined1 local_51;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  FUN_00414480(&local_30);
  FUN_00414b50(&local_40,L".OPTIONS DEVICE ");
  FUN_00414b50(&local_48,L".OPTIONS NONLIN ");
  local_1c = 1;
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    FUN_00414480(&local_28);
    uVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 0x27b));
    uVar1 = FUN_00b905e0(uVar1,1000);
    local_50 = FUN_00b905f0(uVar1,10000000);
    FUN_0043f750(&local_28,local_50);
    FUN_00416ba0(&local_30,L"PSP_NPT=",local_28);
    FUN_00414480(&local_28);
  }
  else {
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
      local_90 = 1e-12;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,2,L"ABSTOL=");
    }
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,0x16,L"CHGTOL=");
    }
    if (*(char *)(param_1 + 0xc0) == '\x05') {
      local_98._0_1_ = 1;
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_40,1,L"TEMP=");
      local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_40,6,L"GMIN=");
    }
    else {
      local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,6,L"GMIN=");
    }
    if (*(char *)(param_1 + 0xc0) == '\x05') {
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
      local_90 = 200.0;
      local_88 = 1;
      FUN_01a0ba70(auStack_b8,&local_48,0xb,L"MAXSTEP=");
    }
    else {
      local_51 = *(char *)(param_1 + 0xc0) == '\x01';
      if ((bool)local_51) {
        local_58 = 0x96;
      }
      else {
        local_58 = 100;
      }
      local_4c = local_58;
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
      local_90 = (double)local_58;
      local_88 = 1;
      FUN_01a0ba70(auStack_b8,&local_30,0xb,L"ITL1=");
    }
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_59 = *(char *)(param_1 + 0xc0) == '\x01';
      if ((bool)local_59) {
        local_60 = 0x14;
      }
      else {
        local_60 = 0x32;
      }
      local_4c = local_60;
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
      local_90 = (double)local_60;
      local_88 = 1;
      FUN_01a0ba70(auStack_b8,&local_30,0xc,L"ITL2=");
    }
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
      local_90 = 10.0;
      local_88 = 1;
      FUN_01a0ba70(auStack_b8,&local_30,0x10,L"ITL4=");
    }
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,7,L"PIVREL=");
      local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,8,L"PIVTOL=");
    }
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,5,L"RELTOL=");
    }
    if (*(char *)(param_1 + 0xc0) == '\x05') {
      local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_48,4,L"ABSTOL=");
    }
    else {
      local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
      local_90 = 0.0;
      local_88 = 0;
      FUN_01a0ba70(auStack_b8,&local_30,4,L"VNTOL=");
    }
    if (*(char *)(param_1 + 0xc0) != '\x05') {
      local_61 = *(char *)(param_1 + 0xc0) == '\x02';
      if ((bool)local_61) {
        local_68 = 1;
      }
      else {
        local_68 = 7;
      }
      local_4c = local_68;
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,1);
      local_90 = (double)local_68;
      local_88 = 1;
      FUN_01a0ba70(auStack_b8,&local_30,0x14,L"TRTOL=");
    }
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    if (*(byte *)(param_1 + 0xc0) < 8) {
      bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && (*(char *)(param_1 + 0x371) == '\x02')) {
      FUN_00416ad0(&local_30,L"METHOD=GEAR ");
    }
    lVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x1d3));
    if (lVar3 == 0) {
      if (*(byte *)(param_1 + 0xc0) < 8) {
        bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 1U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        FUN_00416ad0(&local_30,L"NOSTEPDEP ");
      }
    }
  }
  if (*(char *)(param_1 + 0xc0) == '\x05') {
    iVar2 = FUN_00416db0(local_40,L".OPTIONS DEVICE ");
    if (iVar2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_40);
    }
    iVar2 = FUN_00416db0(local_48,L".OPTIONS NONLIN ");
    if (iVar2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_48);
    }
  }
  else if (local_30 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
  }
  else {
    local_98 = &LAB_01a0c8a0;
    FUN_00416cd0(&local_78,3,L".OPTIONS ",local_30);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_78);
  }
  FUN_00414480(&local_78);
  FUN_00414560(&local_48,5);
  return;
}

