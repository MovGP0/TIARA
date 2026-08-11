/* Ghidra address: 012d6bf0 */
/* Ghidra symbol: FUN_012d6bf0 */


void FUN_012d6bf0(undefined8 param_1,char *param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8,
                 undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  undefined8 local_res18;
  ulonglong local_res20;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  uint local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_90 = param_1;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  sVar3 = 0;
  if (*param_2 != '\0') {
    if (param_2[9] != '\0') {
      FUN_004414c0(&local_20,local_res18,L".corner.tr.xml");
      FUN_0044f850(&local_38,param_6);
      FUN_00441d00(local_30,local_38,local_20);
      FUN_00414b50(&local_20,local_30[0]);
      local_138 = local_20;
      FUN_00416cd0(&local_20,3,param_7,&DAT_012d743c);
      FUN_01293950(local_90,local_20);
    }
    sVar3 = 1;
    if (param_8 == '\0') {
      FUN_012d6af0(auStack_158,&local_40,0x61);
      local_138 = CONCAT71(local_138._1_7_,param_10);
      local_130 = local_res20;
      local_128 = param_5;
      local_120 = local_40;
      local_118 = param_11;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0x1c7;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_01349310(0,0,local_90,0);
      sVar3 = 1;
    }
    else {
      FUN_012d6af0(auStack_158,&local_48,0x61);
      local_138 = param_5;
      local_130 = local_48;
      local_128 = 0;
      local_120 = CONCAT71(local_120._1_7_,param_8);
      local_118 = local_res18;
      uVar2 = FUN_012cf740(&DAT_012cd510,1,0,local_res20);
      cVar1 = FUN_012d5850(uVar2,6,*PTR_DAT_02005310,param_11);
      if (cVar1 != '\0') {
        local_138 = 0;
        local_130 = local_130 & 0xffffffffffffff00;
        FUN_012d2550(uVar2,1,6,*PTR_DAT_02005310);
      }
      FUN_00410f20(uVar2);
    }
  }
  sVar4 = sVar3;
  if (param_2[1] != '\0') {
    if (param_2[10] != '\0') {
      FUN_004414c0(&local_20,local_res18,L".corner.ac.xml");
      FUN_0044f850(&local_58,param_6);
      FUN_00441d00(&local_50,local_58,local_20);
      FUN_00414b50(&local_20,local_50);
      local_138 = local_20;
      FUN_00416cd0(&local_20,3,param_7,&DAT_012d743c);
      FUN_01293950(local_90,local_20);
    }
    sVar4 = sVar3 + 1;
    if (param_8 == '\0') {
      FUN_012d6af0(auStack_158,&local_60,sVar3 + 0x61);
      local_138 = param_5;
      local_130 = local_60;
      local_128 = param_11;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = CONCAT44(local_108._4_4_,0x1c7);
      local_100 = 0;
      local_f8 = local_f8 & 0xffffff00;
      FUN_01394040(0,local_90,param_10,local_res20);
    }
    else {
      FUN_012d6af0(auStack_158,&local_68,sVar3 + 0x61);
      local_138 = param_5;
      local_130 = local_68;
      local_128 = 0;
      local_120 = CONCAT71(local_120._1_7_,param_8);
      local_118 = local_res18;
      uVar2 = FUN_012cf740(&DAT_012cd510,1,0,local_res20);
      cVar1 = FUN_012d5850(uVar2,8,*PTR_DAT_02005310,param_11);
      if (cVar1 != '\0') {
        local_138 = 0;
        local_130 = local_130 & 0xffffffffffffff00;
        FUN_012d2550(uVar2,1,8,*PTR_DAT_02005310);
      }
      FUN_00410f20(uVar2);
    }
  }
  if (param_2[2] != '\0') {
    if (param_2[0xb] != '\0') {
      FUN_004414c0(&local_20,local_res18,L".corner.dc.xml");
      FUN_0044f850(&local_78,param_6);
      FUN_00441d00(&local_70,local_78,local_20);
      FUN_00414b50(&local_20,local_70);
      local_138 = local_20;
      FUN_00416cd0(&local_20,3,param_7,&DAT_012d743c);
      FUN_01293950(local_90,local_20);
    }
    if (param_8 == '\0') {
      FUN_012d6af0(auStack_158,&local_80,sVar4 + 0x61);
      local_138 = param_5;
      local_130 = local_80;
      local_128 = param_11;
      local_120 = 0;
      local_118 = 0;
      FUN_01324990(0,local_90,param_10,local_res20);
    }
    else {
      FUN_012d6af0(auStack_158,&local_88,sVar4 + 0x61);
      local_138 = param_5;
      local_130 = local_88;
      local_128 = 0;
      local_120 = CONCAT71(local_120._1_7_,param_8);
      local_118 = local_res18;
      uVar2 = FUN_012cf740(&DAT_012cd510,1,0,local_res20);
      cVar1 = FUN_012d5850(uVar2,1,*PTR_DAT_02005310,param_11);
      if (cVar1 != '\0') {
        local_138 = 0;
        local_130 = local_130 & 0xffffffffffffff00;
        FUN_012d2550(uVar2,1,1,*PTR_DAT_02005310);
      }
      FUN_00410f20(uVar2);
    }
  }
  FUN_00414560(&local_88,0xc);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res18,5);
  return;
}

