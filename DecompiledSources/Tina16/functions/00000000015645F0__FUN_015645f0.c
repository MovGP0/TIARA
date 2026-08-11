/* Ghidra address: 015645f0 */
/* Ghidra symbol: FUN_015645f0 */


void FUN_015645f0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_2e8 [32];
  int *local_2c8;
  undefined8 local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_280;
  int local_278;
  undefined1 local_270;
  undefined8 local_268;
  char local_260;
  undefined4 local_258;
  longlong local_240;
  char local_232;
  undefined1 local_231;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  int local_210 [2];
  undefined1 local_208 [4];
  int local_204;
  int local_200;
  int local_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0 [3];
  longlong local_1c8;
  uint local_1bc;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198 [36];
  undefined1 local_72 [37];
  undefined1 local_4d [45];
  
  local_230 = 0;
  local_1f8 = 0;
  local_1e0[0] = 0;
  local_220 = 0;
  local_228 = 0;
  local_198[0] = 0;
  local_240 = FUN_00e11bc0(&DAT_00e10ee8,1);
  *(undefined8 *)(local_240 + 8) = *(undefined8 *)(param_1 + 0x748);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  local_1fc = 0;
  if (-1 < iVar7 + -1) {
    do {
      local_1c8 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),local_1fc);
      local_1b8 = *(longlong **)(local_1c8 + 0x40);
      (**(code **)(*local_1b8 + 0x288))(local_1b8,&local_1f8);
      uVar2 = FUN_01d03160(local_1b8);
      local_1bc = (uint)uVar2;
      local_2c8 = local_210;
      FUN_00e0f2a0(*(undefined8 *)(param_1 + 0x938),&local_228,*(undefined8 *)(param_1 + 0xa20),
                   *(undefined8 *)(local_1c8 + 0x40));
      iVar3 = FUN_01563d30(auStack_2e8);
      local_231 = iVar3 == 0x800;
      if ((iVar3 == 0x800) || (iVar3 == 4)) {
        local_232 = '\x01';
      }
      else {
        local_232 = '\0';
      }
      iVar3 = *(int *)(*(longlong *)(local_1c8 + 0x28) + 0x10);
      local_200 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_1f0 = FUN_01571ee0(*(undefined8 *)(local_1c8 + 0x28),local_200);
          local_1e4 = *(undefined4 *)(local_1f0 + 0x30);
          (**(code **)(*local_1b8 + 0x298))(local_1b8,&local_230,local_200);
          FUN_0043e1a0(&local_220,local_230);
          if ((local_1b8[0xa5] == 0) ||
             (cVar1 = FUN_00e11d20(local_240,local_200,local_1c8), cVar1 == '\0')) {
            uVar4 = FUN_00e14780(*(undefined8 *)(param_1 + 0x9c8),local_1e4);
            if (((*(int *)(local_1f0 + 0x54) == 2) || (*(int *)(local_1f0 + 0x54) == 3)) &&
               ((cVar1 = FUN_01563730(param_1,*(undefined8 *)(local_1c8 + 0x40)), cVar1 != '\0' &&
                (cVar1 = FUN_01563c40(param_1,local_1c8,local_1e4), cVar1 != '\0')))) {
              local_2c8 = &local_204;
              local_2c0 = 0;
              cVar1 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),uVar4,2,&local_218);
              if (cVar1 != '\0') {
                if (local_204 < 0) {
                  uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"pAnalogComp: Internal error");
                  FUN_004134c0(uVar6);
                }
                cVar1 = FUN_01d404e0(local_228,local_208);
                if (cVar1 == '\0') {
LAB_0156493f:
                  local_260 = '\0';
                }
                else {
                  iVar5 = FUN_00416db0(local_220,&DAT_01564df8);
                  if (iVar5 != 0) goto LAB_0156493f;
                  local_260 = '\x01';
                }
                if (local_260 != '\0') {
                  local_1a8 = 2;
                  local_1b0 = 0x41cdcd6500000000;
                }
                local_2c8 = (int *)CONCAT44(local_2c8._4_4_,0x40a);
                local_2c0 = CONCAT44(local_2c0._4_4_,local_1e4);
                local_2b8 = local_4d;
                local_2b0 = local_72;
                local_2a8 = local_1a0;
                local_2a0 = local_1a4;
                local_298 = local_19c;
                local_290 = local_1a8;
                local_288 = local_1b0;
                local_280 = local_218;
                local_278 = local_204;
                local_270 = local_231;
                local_268 = local_198[0];
                local_258 = 1;
                uVar6 = FUN_0154b690(&DAT_01546698,1,*(undefined8 *)(local_1c8 + 0x40),local_200);
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x9c0),uVar6);
                if (local_232 != '\0') {
                  local_2c8 = (int *)CONCAT44(local_2c8._4_4_,0x40a);
                  local_2c0 = CONCAT44(local_2c0._4_4_,local_1e4);
                  local_2b8 = local_4d;
                  local_2b0 = local_72;
                  local_2a8 = local_1a0;
                  local_2a0 = local_1a4;
                  local_298 = local_19c;
                  local_290 = 2;
                  local_288 = 0x41cdcd6500000000;
                  local_280 = local_218;
                  local_278 = local_204;
                  local_270 = local_231;
                  local_268 = local_198[0];
                  local_260 = '\x01';
                  local_258 = 0;
                  uVar6 = FUN_0154b690(&DAT_01546698,1,*(undefined8 *)(local_1c8 + 0x40),local_200);
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x9c0),uVar6);
                }
              }
            }
            if ((((*(int *)(local_1f0 + 0x54) == 1) || (*(int *)(local_1f0 + 0x54) == 3)) &&
                (cVar1 = FUN_01563700(param_1,*(undefined8 *)(local_1c8 + 0x40)), cVar1 != '\0')) &&
               (cVar1 = FUN_01563c40(param_1,local_1c8,local_1e4), cVar1 != '\0')) {
              local_2c8 = &local_204;
              local_2c0 = 0;
              cVar1 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),uVar4,2,&local_218);
              if (cVar1 != '\0') {
                FUN_00414b50(local_1e0,L"AD added to node ");
                if (local_204 < 0) {
                  uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"pAnalogComp: Internal error");
                  FUN_004134c0(uVar6);
                }
                local_2c8 = (int *)CONCAT44(local_2c8._4_4_,0x40b);
                local_2c0 = CONCAT44(local_2c0._4_4_,local_1e4);
                local_2b8 = local_4d;
                local_2b0 = local_72;
                local_2a8 = local_1a0;
                local_2a0 = local_1a4;
                local_298 = local_19c;
                local_290 = local_1a8;
                local_288 = local_1b0;
                local_280 = local_218;
                local_278 = local_204;
                local_270 = local_231;
                local_268 = local_198[0];
                local_260 = local_232;
                local_258 = 1;
                uVar6 = FUN_0154b690(&DAT_01546698,1,*(undefined8 *)(local_1c8 + 0x40),local_200);
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0x9c0),uVar6);
              }
            }
          }
          local_200 = local_200 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_1fc = local_1fc + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(local_240);
  FUN_00414560(&local_230,3);
  FUN_00414480(&local_1f8);
  FUN_00414480(local_1e0);
  FUN_00414480(local_198);
  return;
}

