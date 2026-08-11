/* Ghidra address: 019f06f0 */
/* Ghidra symbol: FUN_019f06f0 */


void FUN_019f06f0(longlong param_1,char param_2,undefined2 param_3,undefined8 param_4,
                 undefined *param_5,char param_6,byte param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res20;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  char local_a3;
  undefined2 local_a2;
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
  undefined8 local_40 [2];
  undefined *local_30;
  undefined *local_28;
  undefined *local_20 [2];
  
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
  local_40[0] = 0;
  local_20[0] = (undefined *)0x0;
  local_28 = (undefined *)0x0;
  local_30 = (undefined *)0x0;
  local_res20 = param_4;
  local_a3 = param_2;
  local_a2 = param_3;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  if (*(int *)(param_1 + 0x30) % 5 == 0) {
    if (*(char *)(param_1 + 0xc0) == '\x04') {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),L".PRINT");
    }
    else if (*(char *)(param_1 + 0xc0) == '\x05') {
      if ((param_7 & 1) == 0) {
        if ((param_7 & 2) == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),L".PRINT DC");
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),L".PRINT AC");
        }
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),L".PRINT TRAN");
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),L".PROBE");
    }
  }
  if (local_a3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),local_40);
    local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffff00000000);
    FUN_019ee820(param_1,local_20,local_a2,local_40[0]);
    iVar2 = FUN_00416db0(local_res20,&DAT_019f103c);
    if ((iVar2 == 0) && (*(char *)(param_1 + 0xc0) == '\x05')) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x210))
                        (*(longlong **)(param_1 + 0x58),0);
      FUN_019f0600(auStack_f8,&local_48,uVar3,&param_5);
      FUN_00414b50(&local_28,local_48);
      FUN_00416ba0(&local_28,param_5,local_28);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x210))
                        (*(longlong **)(param_1 + 0x58),1);
      FUN_019f0600(auStack_f8,&local_50,uVar3,&param_5);
      FUN_00414b50(&local_30,local_50);
      FUN_00416ba0(&local_30,param_5,local_30);
      local_d8 = &DAT_019f105c;
      local_d0 = local_28;
      local_c8 = &DAT_019f106c;
      local_c0 = local_30;
      local_b8 = &DAT_019f107c;
      FUN_00416cd0(&local_58,7,&DAT_019f104c,local_res20);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_58)
      ;
    }
    else {
      local_d8 = &DAT_019f105c;
      local_d0 = param_5;
      local_c8 = local_20[0];
      local_c0 = &DAT_019f107c;
      FUN_00416cd0(&local_60,6,&DAT_019f104c,local_res20);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_60)
      ;
    }
  }
  else if (local_a3 == '\x01') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x210))(*(longlong **)(param_1 + 0x58),0)
    ;
    FUN_019f0600(auStack_f8,&local_68,uVar3,&param_5);
    FUN_00414b50(&local_28,local_68);
    cVar1 = FUN_019f0460(auStack_f8,local_28);
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0xc0) != '\x05')) {
      local_d8 = local_28;
      local_d0 = &DAT_019f109c;
      FUN_00416cd0(&local_28,4,&DAT_019f108c,param_5);
    }
    else {
      FUN_00416ba0(&local_28,param_5,local_28);
    }
    if (param_6 == '\0') {
      local_d8 = &DAT_019f105c;
      local_d0 = local_28;
      local_c8 = &DAT_019f107c;
      FUN_00416cd0(&local_78,5,&DAT_019f104c,local_res20);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_78)
      ;
    }
    else {
      local_d8 = &DAT_019f107c;
      FUN_00416cd0(&local_70,3,&LAB_019f10ac,local_28);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_70)
      ;
    }
  }
  else if (local_a3 == '\x02') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x210))(*(longlong **)(param_1 + 0x58),0)
    ;
    FUN_019f0600(auStack_f8,&local_80,uVar3,&param_5);
    FUN_00414b50(&local_28,local_80);
    cVar1 = FUN_019f0460(auStack_f8,local_28);
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0xc0) != '\x05')) {
      local_d8 = local_28;
      local_d0 = &DAT_019f109c;
      FUN_00416cd0(&local_28,4,&DAT_019f108c,param_5);
    }
    else {
      FUN_00416ba0(&local_28,param_5,local_28);
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x210))(*(longlong **)(param_1 + 0x58),1)
    ;
    FUN_019f0600(auStack_f8,&local_88,uVar3,&param_5);
    FUN_00414b50(&local_30,local_88);
    cVar1 = FUN_019f0460(auStack_f8,local_30);
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0xc0) != '\x05')) {
      local_d8 = local_30;
      local_d0 = &DAT_019f109c;
      FUN_00416cd0(&local_30,4,&DAT_019f108c,param_5);
    }
    else {
      FUN_00416ba0(&local_30,param_5,local_30);
    }
    if (param_6 == '\0') {
      local_d8 = &DAT_019f105c;
      local_d0 = local_28;
      local_c8 = &DAT_019f106c;
      local_c0 = local_30;
      local_b8 = &DAT_019f107c;
      FUN_00416cd0(&local_98,7,&DAT_019f104c,local_res20);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_98)
      ;
    }
    else {
      local_d8 = &DAT_019f107c;
      FUN_00416cd0(&local_90,3,&LAB_019f10ac,local_30);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_90)
      ;
    }
  }
  else if (local_a3 == '\x03') {
    FUN_00416ba0(&local_a0,&DAT_019f104c,local_res20);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_a0);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (*(int *)(param_1 + 0x30) % 5 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
  }
  FUN_00414560(&local_a0,0xd);
  FUN_00414560(&local_30,3);
  FUN_00414560(&local_res20,2);
  return;
}

