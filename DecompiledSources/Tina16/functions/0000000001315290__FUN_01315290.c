/* Ghidra address: 01315290 */
/* Ghidra symbol: FUN_01315290 */


void FUN_01315290(undefined8 param_1,char *param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8,
                 undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  undefined8 local_res18;
  ulonglong local_res20;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_60 = param_1;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  sVar3 = 0;
  if (*param_2 != '\0') {
    sVar3 = 1;
    if (param_8 == '\0') {
      FUN_013151a0(auStack_128,local_30,0x61);
      local_108 = CONCAT71(local_108._1_7_,param_10);
      local_100 = local_res20;
      local_f8 = param_5;
      local_f0 = local_30[0];
      local_e8 = param_11;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0x1c7;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_01349310(0,0,local_60,0);
      sVar3 = 1;
    }
    else {
      FUN_013151a0(auStack_128,&local_38,0x61);
      local_108 = param_5;
      local_100 = local_38;
      local_f8 = 0;
      local_f0 = CONCAT71(local_f0._1_7_,param_8);
      local_e8 = local_res18;
      uVar2 = FUN_01309b50(&DAT_01307998,1,0,local_res20);
      cVar1 = FUN_01313d60(uVar2,6,*PTR_DAT_02005310,param_11);
      if (cVar1 != '\0') {
        local_108 = 0;
        local_100 = local_100 & 0xffffffffffffff00;
        FUN_0130ea10(uVar2,1,6,*PTR_DAT_02005310);
      }
      FUN_00410f20(uVar2);
    }
  }
  sVar4 = sVar3;
  if (param_2[1] != '\0') {
    sVar4 = sVar3 + 1;
    if (param_8 == '\0') {
      FUN_013151a0(auStack_128,&local_40,sVar3 + 0x61);
      local_108 = param_5;
      local_100 = local_40;
      local_f8 = param_11;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,0x1c7);
      local_d0 = 0;
      local_c8 = local_c8 & 0xffffff00;
      FUN_01394040(0,local_60,param_10,local_res20);
    }
    else {
      FUN_013151a0(auStack_128,&local_48,sVar3 + 0x61);
      local_108 = param_5;
      local_100 = local_48;
      local_f8 = 0;
      local_f0 = CONCAT71(local_f0._1_7_,param_8);
      local_e8 = local_res18;
      uVar2 = FUN_01309b50(&DAT_01307998,1,0,local_res20);
      cVar1 = FUN_01313d60(uVar2,8,*PTR_DAT_02005310,param_11);
      if (cVar1 != '\0') {
        local_108 = 0;
        local_100 = local_100 & 0xffffffffffffff00;
        FUN_0130ea10(uVar2,1,8,*PTR_DAT_02005310);
      }
      FUN_00410f20(uVar2);
    }
  }
  if (param_2[2] != '\0') {
    if (param_8 == '\0') {
      FUN_013151a0(auStack_128,&local_50,sVar4 + 0x61);
      local_108 = param_5;
      local_100 = local_50;
      local_f8 = param_11;
      local_f0 = 0;
      local_e8 = 0;
      FUN_01324990(0,local_60,param_10,local_res20);
    }
    else {
      FUN_013151a0(auStack_128,&local_58,sVar4 + 0x61);
      local_108 = param_5;
      local_100 = local_58;
      local_f8 = 0;
      local_f0 = CONCAT71(local_f0._1_7_,param_8);
      local_e8 = local_res18;
      uVar2 = FUN_01309b50(&DAT_01307998,1,0,local_res20);
      cVar1 = FUN_01313d60(uVar2,1,*PTR_DAT_02005310,param_11);
      if (cVar1 != '\0') {
        local_108 = 0;
        local_100 = local_100 & 0xffffffffffffff00;
        FUN_0130ea10(uVar2,1,1,*PTR_DAT_02005310);
      }
      FUN_00410f20(uVar2);
    }
  }
  FUN_00414560(&local_58,6);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res18,5);
  return;
}

