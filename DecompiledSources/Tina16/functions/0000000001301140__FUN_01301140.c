/* Ghidra address: 01301140 */
/* Ghidra symbol: FUN_01301140 */


void FUN_01301140(longlong param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong local_c0;
  int local_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_98;
  undefined1 local_8c [8];
  undefined1 local_84 [52];
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_d0 = auStack_128;
  local_e0 = 0;
  local_d8 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_48 = (undefined *)0x0;
  local_50 = 0;
  FUN_00417580(local_84,&DAT_01d2e6d8);
  *(undefined4 *)(param_1 + 0xad0) = 0;
  if (param_4 == 0) {
    FUN_00414480(&local_50);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    if (iVar3 == 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))
                        (*(longlong **)(param_1 + 0x7f0));
      if (cVar2 != '\0') {
        FUN_00414b50(&local_50,L".corner");
      }
      FUN_00416ba0(&local_48,local_50,L".refresult.tr");
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                        (*(longlong **)(param_1 + 0x838));
      if (iVar3 == 1) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))
                          (*(longlong **)(param_1 + 0x7f0));
        if (cVar2 != '\0') {
          FUN_00414b50(&local_50,L".corner");
        }
        FUN_00416ba0(&local_48,local_50,L".refresult.dc");
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                          (*(longlong **)(param_1 + 0x838));
        if (iVar3 == 2) {
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x260))
                            (*(longlong **)(param_1 + 0x7f0));
          if (cVar2 != '\0') {
            FUN_00414b50(&local_50,L".corner");
          }
          FUN_00416ba0(&local_48,local_50,L".refresult.ac");
        }
      }
    }
  }
  else if (param_4 == 1) {
    FUN_00416ba0(&local_48,local_50,L".refresult.tr");
  }
  else if (param_4 == 2) {
    FUN_00416ba0(&local_48,local_50,L".refresult.dc");
  }
  else if (param_4 == 3) {
    FUN_00416ba0(&local_48,local_50,L".refresult.ac");
  }
  if (param_5 != '\0') {
    pcVar1 = *(char **)(param_2 + 0x18);
    if (*pcVar1 == '\0') {
      if (pcVar1[2] == '\0') {
        if (pcVar1[1] != '\0') {
          FUN_00414b50(&local_48,L".refresult.ac");
        }
      }
      else {
        FUN_00414b50(&local_48,L".refresult.dc");
      }
    }
    else {
      FUN_00414b50(&local_48,L".refresult.tr");
    }
  }
  lVar5 = FUN_006dd390(param_2);
  iVar3 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x10),&DAT_013018c4);
  if (iVar3 == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_d8);
    local_108 = *(ulonglong *)(param_2 + 0x10);
    local_100 = local_48;
    FUN_00416cd0(local_40,4,local_d8,&DAT_013018c4);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_e0);
    lVar5 = FUN_006dd390(param_2);
    local_108 = *(ulonglong *)(lVar5 + 0x10);
    local_100 = &DAT_013018c4;
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    local_f0 = local_48;
    FUN_00416cd0(local_40,6,local_e0,&DAT_013018c4);
  }
  cVar2 = FUN_00440a20(local_40[0],1);
  if (cVar2 != '\0') {
    local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_40[0],0x20);
    local_108 = local_108 & 0xffffffffffffff00;
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
    FUN_01d317c0(local_20,local_84);
    FUN_01d30e90(local_20,local_8c);
    if (*(char *)(param_1 + 0xabd) == '\0') {
      FUN_01d30f00(local_20,local_a8,8);
      FUN_01d30f00(local_20,local_ac,4);
      FUN_01d30f00(local_20,local_b0,4);
    }
    local_98 = FUN_01cc3ce0(&PTR_FUN_01cb5bc0,1,local_20);
    local_c0 = *(longlong *)(local_98 + 8);
    iVar3 = *(int *)(local_c0 + 0x10);
    local_b4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_a0 = FUN_01d347d0(local_c0,local_b4);
        if (*(int *)(local_a0 + 0x158) == 0) {
          FUN_01cc0ae0(local_a0,&local_30);
          FUN_00416ba0(&local_30,L"[CURVE] ",local_30);
          if (param_3 == 0) {
            FUN_01304220(param_1,local_30);
          }
          else if (param_3 == 1) {
            *(int *)(param_1 + 0xad0) = *(int *)(param_1 + 0xad0) + 1;
          }
        }
        local_b4 = local_b4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_98);
    iVar3 = FUN_01d31a40(local_20);
    if (iVar3 != 0) {
      uVar4 = FUN_01d31a40(local_20);
      FUN_00b047e0(uVar4);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_e0,2);
  FUN_00417740(local_84,&DAT_01d2e6d8);
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_30);
  return;
}

