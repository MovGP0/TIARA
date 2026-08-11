/* Ghidra address: 0083d700 */
/* Ghidra symbol: FUN_0083d700 */


void FUN_0083d700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040d200(param_3,0x40,0);
  cVar1 = FUN_004239d0(&local_38,param_1,param_2);
  if (cVar1 == '\0') {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = *param_2;
    param_3[3] = param_2[1];
  }
  else {
    FUN_00423a60(&local_48,param_1,param_2);
    local_50 = local_48;
    local_4c = local_44;
    local_58 = local_48;
    local_54 = local_34;
    local_60 = local_48;
    local_5c = local_2c;
    local_b8 = &local_60;
    cVar1 = FUN_0083d680(auStack_d8,param_3,&local_50,&local_58);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_3 + 1) = local_38;
    }
    local_68 = local_38;
    local_64 = local_44;
    local_70 = local_30;
    local_6c = local_44;
    local_78 = local_40;
    local_74 = local_44;
    local_b8 = &local_78;
    cVar1 = FUN_0083d680(auStack_d8,param_3 + 2,&local_68,&local_70);
    if (cVar1 != '\0') {
      *(undefined4 *)((longlong)param_3 + 0x1c) = local_34;
    }
    local_80 = local_40;
    local_7c = local_34;
    local_88 = local_40;
    local_84 = local_2c;
    local_90 = local_40;
    local_8c = local_3c;
    local_b8 = &local_90;
    cVar1 = FUN_0083d680(auStack_d8,param_3 + 4,&local_80,&local_88);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_3 + 4) = local_30;
    }
    local_98 = local_48;
    local_94 = local_3c;
    local_a0 = local_38;
    local_9c = local_3c;
    local_a8 = local_30;
    local_a4 = local_3c;
    local_b8 = &local_a8;
    cVar1 = FUN_0083d680(auStack_d8,param_3 + 6,&local_98,&local_a0);
    if (cVar1 != '\0') {
      *(undefined4 *)((longlong)param_3 + 0x34) = local_2c;
    }
  }
  return;
}

