/* Ghidra address: 0129e4d0 */
/* Ghidra symbol: FUN_0129e4d0 */


void FUN_0129e4d0(undefined1 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [32];
  double local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 *local_160;
  longlong local_158;
  int local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100 [2];
  longlong local_f0;
  uint local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_9e;
  undefined8 local_96;
  ushort local_76;
  undefined1 local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  
  local_120 = auStack_198;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_a8 = 0;
  local_100[0] = 0;
  FUN_00417580(&local_9e,&DAT_01d0ba10);
  local_50 = FUN_00410e60(&DAT_0129e2f0,1);
  if (local_50 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = local_50 + 0x10;
  }
  FUN_0041b840(local_100,lVar6);
  *(undefined8 *)(local_50 + 0x40) = param_3;
  FUN_00417c40(&local_9e,param_2 + 0xe98,&DAT_01d0ba10);
  if (*(char *)(param_2 + 0x4c8) != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x4e8) + 0x288))
              (*(longlong **)(param_2 + 0x4e8),&local_a8);
    local_58 = FUN_01cc5ec0(*(undefined8 *)(local_50 + 0x40),local_a8,1);
    if (local_58 != 0) {
      local_178 = *(double *)(param_2 + 0x3a8) - 1.0;
      local_170 = 0;
      local_168 = *(undefined8 *)(param_2 + 0xd0);
      FUN_017ce930(param_2,1,0,0);
      local_48 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*(undefined8 *)(local_50 + 0x40));
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*(undefined8 *)(local_50 + 0x40));
      *(undefined8 *)(local_50 + 0x38) = uVar4;
      local_d8 = 0;
      *(undefined8 *)(local_50 + 0x30) = 0;
      local_dc = 0;
      iVar5 = local_76 + 1;
      do {
        local_178 = (double)CONCAT44(local_178._4_4_,local_dc);
        local_170 = CONCAT71(local_170._1_7_,local_70);
        local_168 = param_2 + 0x5d8;
        local_160 = &local_d8;
        local_158 = local_50 + 0x30;
        cVar3 = FUN_0129de90(local_9e,local_96,0,local_76);
        if (cVar3 != '\0') {
          (**(code **)(*local_48 + 0x18))(local_48,local_58,*(undefined8 *)(local_50 + 0x30),0);
          (**(code **)(*local_48 + 0x88))(local_48,local_50 + 0x28,local_50 + 0x18);
          local_d0 = *(undefined8 *)(local_50 + 0x30);
          if (local_50 == 0) {
            local_178 = 0.0;
          }
          else {
            local_178 = (double)(local_50 + 0x48);
          }
          local_170 = *(undefined8 *)(param_2 + 0xd0);
          local_168 = *(longlong *)(param_2 + 0x1b0);
          FUN_016f8860(param_2,param_1,8,local_d0);
        }
        local_dc = local_dc + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_00410f20(local_48);
      FUN_00410f20(*(undefined8 *)(local_50 + 0x38));
    }
  }
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x4f8) + 0x10);
  local_13c = iVar5 + -1;
  local_e0 = 0;
  if (-1 < local_13c) {
    do {
      local_13c = iVar5;
      uVar2 = local_e0;
      local_f0 = *(longlong *)(param_2 + 0xd0);
      local_108 = *(longlong *)(param_2 + 0x4f8);
      if (*(uint *)(local_108 + 0x10) <= local_e0) {
        FUN_00594f90();
      }
      lVar6 = (longlong)(int)local_e0;
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(local_108 + 8) + lVar6 * 8) + 0x18);
      (**(code **)(*plVar1 + 0x288))(plVar1,&local_128);
      FUN_00416ba0(&local_a8,local_128,&DAT_0129edb8);
      local_58 = FUN_01cc5ec0(*(undefined8 *)(local_50 + 0x40),local_a8,1);
      if (local_58 != 0) {
        local_110 = *(longlong *)(param_2 + 0x4f8);
        if (*(uint *)(local_110 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(local_110 + 8) + lVar6 * 8) + 0x18);
        (**(code **)(*plVar1 + 0x288))(plVar1,&local_130);
        local_178 = (double)((ulonglong)local_178 & 0xffffffffffffff00);
        local_170 = 0;
        local_168 = CONCAT71(local_168._1_7_,1);
        local_160 = (undefined8 *)((ulonglong)local_160 & 0xffffffffffffff00);
        FUN_01cc2930(*(undefined8 *)(local_f0 + 8),local_130,0,1);
        local_48 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*(undefined8 *)(local_50 + 0x40));
        uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,*(undefined8 *)(local_50 + 0x40));
        *(undefined8 *)(local_50 + 0x38) = uVar4;
        local_d8 = 0;
        *(undefined8 *)(local_50 + 0x30) = 0;
        local_dc = 0;
        iVar5 = local_76 + 1;
        do {
          local_178 = (double)CONCAT44(local_178._4_4_,local_dc);
          local_170 = CONCAT71(local_170._1_7_,local_70);
          local_168 = param_2 + 0x5d8;
          local_160 = &local_d8;
          local_158 = local_50 + 0x30;
          cVar3 = FUN_0129de90(local_9e,local_96,0,local_76);
          if (cVar3 != '\0') {
            (**(code **)(*local_48 + 0x18))(local_48,local_58,*(undefined8 *)(local_50 + 0x30),0);
            (**(code **)(*local_48 + 0x88))(local_48,local_50 + 0x28,local_50 + 0x18);
            local_d0 = *(undefined8 *)(local_50 + 0x30);
            local_118 = *(longlong *)(param_2 + 0x4f8);
            if (*(uint *)(local_118 + 0x10) <= local_e0) {
              FUN_00594f90();
            }
            plVar1 = *(longlong **)
                      (*(longlong *)(*(longlong *)(local_118 + 8) + (longlong)(int)local_e0 * 8) +
                      0x18);
            (**(code **)(*plVar1 + 0x288))(plVar1,&local_138);
            FUN_00416ad0(&local_138,L"_Out");
            local_60 = FUN_01cc5ec0(*(undefined8 *)(local_50 + 0x40),local_138);
            if (local_60 != 0) {
              (**(code **)(**(longlong **)(local_50 + 0x38) + 0x18))
                        (*(longlong **)(local_50 + 0x38),local_60,*(undefined8 *)(local_50 + 0x30),0
                        );
              (**(code **)(**(longlong **)(local_50 + 0x38) + 0x88))
                        (*(longlong **)(local_50 + 0x38),local_50 + 0x28,local_b8);
              FUN_00c44b60(local_c8,local_b8);
              FUN_01cc47e0(local_f0,local_d0);
              uVar4 = FUN_00c44590(local_c8);
              uVar7 = FUN_00c445d0(local_c8);
              FUN_01cc48a0(local_f0,0,uVar4,uVar7);
            }
          }
          local_dc = local_dc + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        FUN_00410f20(local_48);
        FUN_00410f20(*(undefined8 *)(local_50 + 0x38));
      }
      local_e0 = local_e0 + 1;
      local_13c = local_13c + -1;
      iVar5 = local_13c;
    } while (local_13c != 0);
  }
  FUN_00414560(&local_138,3);
  FUN_0041b800(local_100);
  FUN_00414480(&local_a8);
  FUN_00417740(&local_9e,&DAT_01d0ba10);
  return;
}

