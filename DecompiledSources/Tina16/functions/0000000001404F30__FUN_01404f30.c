/* Ghidra address: 01404f30 */
/* Ghidra symbol: FUN_01404f30 */


void FUN_01404f30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
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
  
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x90))(*(longlong **)(param_1 + 0x7b8));
  lVar1 = *(longlong *)(param_1 + 0x7a8);
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))(*(longlong **)(param_1 + 0x7b8),L" ??? ");
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_28);
    FUN_00416cd0(&local_20,3,&DAT_014059a4,local_28,&DAT_014059b8);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))(*(longlong **)(param_1 + 0x7b8),local_20)
    ;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),&local_38);
    FUN_00416cd0(&local_30,3,&DAT_014059a4,local_38,&DAT_014059b8);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))(*(longlong **)(param_1 + 0x7b8),local_30)
    ;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x750),&local_48);
    FUN_00416cd0(&local_40,3,&DAT_014059a4,local_48,&DAT_014059b8);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))(*(longlong **)(param_1 + 0x7b8),local_40)
    ;
    if (DAT_021084b1 == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_68);
      FUN_00416cd0(&local_60,3,&DAT_014059a4,local_68,&DAT_014059b8);
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                (*(longlong **)(param_1 + 0x7b8),local_60);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_58);
      FUN_00416cd0(&local_50,3,&DAT_014059a4,local_58,&DAT_014059b8);
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                (*(longlong **)(param_1 + 0x7b8),local_50);
    }
  }
  iVar3 = *(int *)(lVar1 + 0x10) + -1;
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
        if (iVar2 < 10) {
          FUN_0043f750(&local_78,iVar2);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x768),&local_80);
          puVar4 = &DAT_014059dc;
          FUN_00416cd0(&local_70,4,local_78,&DAT_014059c8,local_80,&DAT_014059dc);
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                    (*(longlong **)(param_1 + 0x7b8),local_70);
        }
        else {
          FUN_0043f750(&local_90,iVar2);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x768),&local_98);
          puVar4 = &DAT_014059dc;
          FUN_00416cd0(&local_88,4,local_90,&LAB_014059f0,local_98,&DAT_014059dc);
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                    (*(longlong **)(param_1 + 0x7b8),local_88);
        }
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_a8);
        FUN_00416cd0(&local_a0,3,&DAT_014059a4,local_a8,&DAT_014059b8,puVar4);
        (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                  (*(longlong **)(param_1 + 0x7b8),local_a0);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x748),&local_b8);
        FUN_00416cd0(&local_b0,3,&DAT_014059a4,local_b8,&DAT_014059b8);
        (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                  (*(longlong **)(param_1 + 0x7b8),local_b0);
      }
      if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 1) {
        if (iVar2 < 10) {
          FUN_0043f750(&local_c8,iVar2);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x768),&local_d0);
          puVar4 = &DAT_014059dc;
          FUN_00416cd0(&local_c0,4,local_c8,&DAT_014059c8,local_d0,&DAT_014059dc);
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                    (*(longlong **)(param_1 + 0x7b8),local_c0);
        }
        else {
          FUN_0043f750(&local_e0,iVar2);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x768),&local_e8);
          puVar4 = &DAT_014059dc;
          FUN_00416cd0(&local_d8,4,local_e0,&LAB_014059f0,local_e8,&DAT_014059dc);
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                    (*(longlong **)(param_1 + 0x7b8),local_d8);
        }
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x750),&local_f8);
        FUN_00416cd0(&local_f0,3,&DAT_014059a4,local_f8,&DAT_014059b8,puVar4);
        (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                  (*(longlong **)(param_1 + 0x7b8),local_f0);
        if (DAT_021084b1 == '\0') {
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_118);
          FUN_00416cd0(&local_110,3,&DAT_014059a4,local_118,&DAT_014059b8);
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                    (*(longlong **)(param_1 + 0x7b8),local_110);
        }
        else {
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_108);
          FUN_00416cd0(&local_100,3,&DAT_014059a4,local_108,&DAT_014059b8);
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x78))
                    (*(longlong **)(param_1 + 0x7b8),local_100);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_118);
  FUN_00414480(&local_110);
  FUN_00414480(&local_108);
  FUN_00414480(&local_100);
  FUN_00414480(&local_f8);
  FUN_00414480(&local_f0);
  FUN_00414480(&local_e8);
  FUN_00414560(&local_e0,2);
  FUN_00414480(&local_d0);
  FUN_00414560(&local_c8,2);
  FUN_00414480(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_80);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

