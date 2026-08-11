/* Ghidra address: 01a017e0 */
/* Ghidra symbol: FUN_01a017e0 */


void FUN_01a017e0(longlong param_1,undefined2 param_2,longlong *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar3;
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
  int local_24;
  undefined8 local_20 [2];
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  local_118 = 0;
  local_120 = 0;
  local_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_40 = 0;
  local_20[0] = 0;
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0xc0) & 0x1f)
            & 3U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_40)
    ;
    FUN_019ee820(param_1,&local_38,param_2,local_40,CONCAT44(uVar3,0xb));
    FUN_019f0400(param_1,&local_48,0,0);
    FUN_019f0400(param_1,&local_50,1,0);
    FUN_019f0400(param_1,&local_58,2,0);
    FUN_019f0400(param_1,&local_60,3,0);
    FUN_019ed1f0(param_1,&local_68,1,1);
    FUN_019ed1f0(param_1,&local_70,2,1);
    FUN_019ed1f0(param_1,&local_78,3,1);
    FUN_019ed1f0(param_1,&local_80,4,1);
    FUN_019ed1f0(param_1,&local_88,5,1);
    FUN_00416cd0(&local_30,0x13,local_38,&DAT_01a02050,local_48,&DAT_01a02050,local_50,&DAT_01a02050
                 ,local_58,&DAT_01a02050,local_60,L"  LEN=",local_68,&DAT_01a0207c,local_70,
                 &DAT_01a02090,local_78,&DAT_01a020a4,local_80,&DAT_01a020b8,local_88);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_30);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_a0)
    ;
    FUN_019ee820(param_1,&local_98,0xe,local_a0,CONCAT44(uVar3,0xb));
    FUN_019f0400(param_1,&local_a8,0,0);
    FUN_019f0400(param_1,&local_b0,1,0);
    FUN_019f0400(param_1,&local_b8,2,0);
    FUN_019f0400(param_1,&local_c0,3,0);
    FUN_00416cd0(&local_90,9,local_98,&DAT_01a02050,local_a8,&DAT_01a02050,local_b0,&DAT_01a02050,
                 local_b8,&DAT_01a02050,local_c0);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_90);
    FUN_019ed1f0(param_1,&local_c8,1,1);
    FUN_019ed1f0(param_1,&local_d0,2,1);
    FUN_019ed1f0(param_1,&local_d8,3,1);
    FUN_019ed1f0(param_1,&local_e0,4,1);
    FUN_019ed1f0(param_1,&local_e8,5,1);
    FUN_00416cd0(local_20,10,L"LEN=",local_c8,&DAT_01a0207c,local_d0,&DAT_01a02090,local_d8,
                 &DAT_01a020a4,local_e0,&DAT_01a020b8,local_e8);
    cVar1 = FUN_019f3400(param_1,param_3,L"LOSSY",local_20[0],&local_24);
    if (cVar1 == '\0') {
      FUN_0043f750(&local_f8,*(undefined4 *)(param_1 + 0x34));
      FUN_00416ba0(&local_f0,L" O_LOSSY_",local_f8);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_f0);
      FUN_0043f750(&local_108,*(undefined4 *)(param_1 + 0x34));
      FUN_00416cd0(&local_100,5,L".MODEL O_LOSSY_",local_108,L" LTRA (",local_20[0],&DAT_01a02164);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),local_100)
      ;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      FUN_00416ba0(&local_110,L"LOSSY|",local_20[0]);
      (**(code **)(*param_3 + 0x78))(param_3,local_110);
    }
    else {
      FUN_0043f750(&local_120,local_24 + 1);
      FUN_00416ba0(&local_118,L" O_LOSSY_",local_120);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_118)
      ;
    }
  }
  FUN_00414560(&local_120,0x1f);
  FUN_00414480(local_20);
  return;
}

