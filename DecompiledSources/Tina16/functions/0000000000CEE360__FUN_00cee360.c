/* Ghidra address: 00cee360 */
/* Ghidra symbol: FUN_00cee360 */


undefined8
FUN_00cee360(undefined8 param_1,longlong param_2,undefined8 param_3,short param_4,undefined8 param_5
            )

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_res18;
  short local_res20;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_d8;
  longlong local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_30[0] = 0;
  local_48 = 0;
  local_78[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  local_60 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_d8 = param_1;
  local_d0 = param_2;
  FUN_00414610(param_3);
  if (local_d0 == 0) {
    FUN_00414480(local_d8);
  }
  else {
    FUN_00cebde0(&local_48,param_5,local_d0);
    if (local_res20 == 0x38) {
      FUN_008786a0(local_d8,local_48);
    }
    else {
      FUN_00cee2e0(auStack_118,&local_80,0x20,0x7e);
      FUN_004194b0(local_78,local_80,&DAT_0086e978);
      FUN_00cee2e0(auStack_118,&local_88,0x21,0x3c);
      FUN_004194b0(&local_50,local_88,&DAT_0086e978);
      FUN_00878df0(&local_50,0x3e);
      FUN_00cee2e0(auStack_118,&local_90,0x40,0x5e);
      FUN_00878d40(&local_50,local_90,0,0xffffffff);
      FUN_00cee2e0(auStack_118,&local_98,0x60,0x7e);
      FUN_00878d40(&local_50,local_98,0,0xffffffff);
      FUN_00874520(&local_a0);
      FUN_00877e10(&local_58,local_res18,local_a0);
      FUN_00416780(&local_a8,local_res20);
      local_f8 = &DAT_00cee938;
      local_f0 = local_a8;
      local_e8 = &DAT_00cee938;
      FUN_00416cd0(&local_38,5,&DAT_00cee924,param_5);
      FUN_00414b50(&local_60,&DAT_00cee948);
      FUN_00ced780(&local_b0,local_d0);
      iVar5 = FUN_00416db0(local_b0,local_d0);
      if (iVar5 != 0) {
        uVar6 = FUN_00879300(0x3d,local_78[0],0);
        FUN_00878f90(local_78,1,uVar6);
      }
      local_3c = 0;
      if (local_48 != 0) {
        local_3c = (int)*(undefined8 *)(local_48 + -8);
      }
      local_c4 = 0;
      FUN_00414480(local_30);
      local_40 = -1;
      iVar5 = local_c4;
      if (local_c4 < local_3c) {
        do {
          while ((iVar2 = local_c4, local_c4 < local_3c &&
                 (bVar3 = *(char *)(local_48 + local_c4) - 8,
                 bVar3 < 0x20 && (1 << (bVar3 & 0x1f) & 0x1000026U) != 0))) {
            local_c4 = local_c4 + 1;
          }
          bVar1 = false;
          while ((local_c4 < local_3c &&
                 (bVar3 = *(char *)(local_48 + local_c4) - 8,
                 0x1f < bVar3 || (1 << (bVar3 & 0x1f) & 0x1000026U) == 0))) {
            cVar4 = FUN_00879350(local_48,local_c4,local_78[0]);
            if ((cVar4 == '\0') || (cVar4 = FUN_00879350(local_48,local_c4,local_58), cVar4 != '\0')
               ) {
              bVar1 = true;
            }
            local_c4 = local_c4 + 1;
          }
          if (bVar1) {
            if (local_40 == -1) {
              local_f8 = (undefined *)0x0;
              FUN_008785a0(&local_b8,local_48,iVar5,iVar2 - iVar5);
              FUN_00416ad0(local_30,local_b8);
              local_40 = iVar2;
            }
          }
          else {
            if (local_40 != -1) {
              FUN_00cedb30(auStack_118,iVar5);
            }
            local_f8 = (undefined *)0x0;
            FUN_008785a0(&local_c0,local_48,iVar5,local_c4 - iVar5);
            FUN_00416ad0(local_30,local_c0);
          }
          iVar5 = local_c4;
        } while (local_c4 < local_3c);
      }
      if (local_40 != -1) {
        FUN_00cedb30(auStack_118,local_c4);
      }
      FUN_00414ad0(local_d8,local_30[0]);
    }
  }
  FUN_00414560(&local_c0,4);
  FUN_0041b800(&local_a0);
  FUN_00417840(&local_98,&DAT_0086e978,5);
  FUN_00414480(&local_60);
  FUN_00417840(&local_58,&DAT_0086e978,3);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res18);
  return local_d8;
}

