/* Ghidra address: 015d4f30 */
/* Ghidra symbol: FUN_015d4f30 */


undefined1 FUN_015d4f30(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [32];
  char *local_f8;
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
  undefined1 *local_60;
  char local_51;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  char local_31;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_60 = auStack_118;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_30 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  FUN_00414b50(&local_40,param_2);
  FUN_00414b50(&local_48,param_3);
  local_21 = 0;
  iVar2 = FUN_00416db0(local_48,&DAT_015d555c);
  if (iVar2 == 0) {
    local_21 = 1;
  }
  else {
    if ((param_4 != '\0') &&
       (FUN_015c1190(&local_40,param_2,*(undefined8 *)(param_1 + 0x78)), local_48 != 0)) {
      local_4c = 0;
      if (local_48 != 0) {
        local_4c = *(int *)(local_48 + -4);
      }
      if (*(short *)(local_48 + -2 + (longlong)local_4c * 2) != 0x2a) {
        FUN_015c1190(&local_68,local_48,*(undefined8 *)(param_1 + 0x78));
        FUN_00414b50(&local_48,local_68);
      }
    }
    iVar2 = FUN_004170c0(&DAT_015d5570,local_48,1);
    if (iVar2 < 1) {
      local_f8 = &local_31;
      FUN_015d7070(param_1,&local_30,local_48,*(undefined8 *)(param_1 + 0x78));
    }
    else {
      FUN_00414b50(&local_30,local_48);
      local_31 = '\0';
    }
    if (local_31 == '\0') {
      FUN_00414b50(&local_48,local_30);
      FUN_015bf7d0(&local_a8,local_40);
      FUN_015bf270(&local_a0,local_a8);
      FUN_015bf7d0(&local_b8,local_48);
      FUN_015bf270(&local_b0,local_b8);
      iVar2 = FUN_00416db0(local_a0,local_b0);
      if (iVar2 == 0) {
        uVar3 = FUN_00416740(local_40);
        uVar4 = FUN_00416740(local_48);
        local_21 = FUN_015bf330(uVar3,uVar4,1);
      }
      else {
        FUN_015bf710(&local_c0,local_48);
        iVar2 = FUN_00416db0(local_c0,&DAT_015d555c);
        if (iVar2 == 0) {
          local_20[0] = 0;
          FUN_015bf7d0(&local_c8,local_40);
          FUN_015bf270(local_20,local_c8);
          local_50 = 0;
          if (local_48 != 0) {
            local_50 = *(int *)(local_48 + -4);
          }
          FUN_00416dc0(&local_d0,local_20[0],1,local_50 + -3);
          FUN_015bf7d0(&local_e0,local_48);
          FUN_015bf270(&local_d8,local_e0);
          iVar2 = FUN_00416db0(local_d0,local_d8);
          local_51 = iVar2 == 0;
          FUN_00414480(local_20);
          if (local_51 != '\0') {
            local_21 = 1;
          }
        }
        else {
          local_21 = 0;
        }
      }
    }
    else {
      FUN_015c1190(&local_78,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x78));
      FUN_015bf6d0(&local_70,local_78,local_40);
      FUN_00414b50(&local_40,local_70);
      iVar2 = FUN_004170c0(&DAT_015d5580,local_48,1);
      if (iVar2 == 0) {
        iVar2 = FUN_004170c0(&LAB_015d5590,local_48,1);
        if (iVar2 == 0) {
          FUN_015bf710(&local_80,local_40);
          FUN_00414b50(&local_40,local_80);
        }
      }
      FUN_015bf710(&local_48,local_30);
      if (local_40 == 0) {
        FUN_015d4e80(auStack_118,&local_88,param_2);
        FUN_00414b50(&local_40,local_88);
      }
      uVar3 = FUN_00416740(local_40);
      uVar4 = FUN_00416740(local_48);
      cVar1 = FUN_015bf330(uVar3,uVar4,1);
      if (cVar1 == '\0') {
        uVar3 = FUN_00416740(local_40);
        FUN_015c1190(&local_98,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x78));
        FUN_015bf6d0(&local_90,local_98,local_48);
        uVar4 = FUN_00416740(local_90);
        cVar1 = FUN_015bf330(uVar3,uVar4,1);
        if (cVar1 == '\0') {
          local_21 = 0;
          goto LAB_015d54ae;
        }
      }
      local_21 = 1;
    }
  }
LAB_015d54ae:
  FUN_00414560(&local_e0,0x10);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return local_21;
}

