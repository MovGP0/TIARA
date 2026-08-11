/* Ghidra address: 010cc470 */
/* Ghidra symbol: FUN_010cc470 */


void FUN_010cc470(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  double dVar6;
  char local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  char local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  char local_40;
  undefined8 local_38;
  double local_30;
  
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  pcVar4 = local_58;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pcVar4 = *param_1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 8;
  }
  uVar1 = *param_2;
  local_60._4_1_ = (byte)(uVar1 >> 0x20);
  bVar2 = local_60._4_1_;
  local_60 = uVar1;
  if (local_58[0] == '\0') {
    local_f9 = '\0';
    local_f8 = local_50;
    FUN_010cb960(local_50,&local_68,&local_70);
    if (local_70 < (double)(int)-(uint)bVar2) {
      local_60 = local_60 & 0xffffffffffffff00;
    }
  }
  else if (local_58[0] == '\x01') {
    local_f9 = '\x01';
    local_60._2_1_ = (char)(uVar1 >> 0x10);
    bVar5 = local_60._2_1_ == '\x01';
    if ((bVar5) && (local_40 == '\0')) {
      FUN_010c7a80(local_58);
    }
    dVar6 = local_30;
    if (local_60._2_1_ == '\0') {
      local_f8 = local_50;
      local_f0 = local_48;
      FUN_010cb960(local_50,&local_68,&local_70);
      FUN_010cb960(local_48,&local_78,&local_80);
      dVar6 = local_30;
      local_e8 = local_38;
      local_e0 = local_30;
      FUN_010cb960(local_38,&local_88,&local_90);
      FUN_010cb960(dVar6,&local_98,&local_a0);
      if (local_70 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
      if (local_80 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
      if (local_90 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
      if (local_a0 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
    }
    else {
      local_e8 = local_38;
      local_e0 = local_30;
      FUN_010cb960(local_38,&local_88,&local_90);
      FUN_010cb960(dVar6,&local_98,&local_a0);
      local_f8 = local_50;
      local_f0 = local_48;
      FUN_010cb960(local_50,&local_68,&local_70);
      FUN_010cb960(local_48,&local_78,&local_80);
      if (local_70 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
      if (local_80 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
      if (local_90 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
      if (local_a0 < (double)(int)-(uint)bVar2) {
        local_60 = local_60 & 0xffffffffffffff00;
      }
    }
  }
  if ((char)local_60 == '\0') {
    if (local_f9 == '\0') {
      dVar6 = (double)FUN_0040c850(local_70);
      if (20.0 <= dVar6) {
        FUN_010cbe50(local_68,local_70,&local_c8,bVar2);
      }
      else {
        FUN_010cc2f0(local_68,local_70,&local_c8,bVar2);
      }
      FUN_00414ad0(param_3,local_c8);
    }
    else {
      dVar6 = (double)FUN_0040c850(local_90 - 20.0);
      if (18.0 < dVar6) {
        FUN_010cc0f0(&local_60,local_68,local_70,local_78,local_80,local_88,local_90,local_e0,
                     local_98,local_a0,local_f9,param_3,bVar2);
      }
      else if (local_60._2_1_ == '\0') {
        FUN_010cc2f0(local_68,local_70,&local_c8,bVar2);
        FUN_010cc2f0(local_78,local_80,&local_d0,bVar2);
        FUN_010cbf20(&local_60,local_c8,local_d0,0,param_3);
      }
      else {
        FUN_010cc2f0(local_88,local_90,&local_c8,bVar2);
        if (local_60._1_1_ == '\0') {
          local_30 = local_30 * 57.29577951308232;
          FUN_010cb960(local_30,&local_98,&local_a0);
        }
        FUN_010cc2f0(local_98,local_a0,&local_d0,bVar2);
        FUN_010cbf20(&local_60,local_c8,local_d0,1,param_3);
      }
    }
  }
  else if ((char)local_60 == '\x01') {
    if (local_f9 == '\0') {
      dVar6 = (double)FUN_0040c850(local_70);
      if (20.0 <= dVar6) {
        FUN_010cbe50(local_68,local_70,&local_c8,bVar2);
      }
      else {
        FUN_010cbda0(local_f8,&local_c8,bVar2);
      }
      FUN_00414ad0(param_3,local_c8);
    }
    else {
      dVar6 = (double)FUN_0040c850(local_70);
      if (dVar6 < 20.0) {
        dVar6 = (double)FUN_0040c850(local_80);
        if (dVar6 < 20.0) {
          if (local_60._2_1_ == '\0') {
            FUN_010cbda0(local_f8,&local_c8,bVar2);
            FUN_010cbda0(local_f0,&local_d0,bVar2);
            FUN_010cbf20(&local_60,local_c8,local_d0,0,param_3);
          }
          else {
            FUN_010cbda0(local_e8,&local_c8,bVar2);
            FUN_010cbda0(local_e0,&local_d0,bVar2);
            FUN_010cbf20(&local_60,local_c8,local_d0,1,param_3);
          }
          goto code_r0x010cccd4;
        }
      }
      FUN_010cc0f0(&local_60,local_68,local_70,local_78,local_80,local_88,local_90,local_e0,local_98
                   ,local_a0,local_f9,param_3,bVar2);
    }
  }
  else if ((char)local_60 == '\x02') {
    FUN_010cc0f0(&local_60,local_68,local_70,local_78,local_80,local_88,local_90,local_e0,local_98,
                 local_a0,local_f9,param_3,bVar2);
  }
code_r0x010cccd4:
  FUN_00414560(&local_d0,6);
  return;
}

