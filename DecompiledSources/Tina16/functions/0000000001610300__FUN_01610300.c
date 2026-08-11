/* Ghidra address: 01610300 */
/* Ghidra symbol: FUN_01610300 */


void FUN_01610300(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_2a8 [32];
  ulonglong local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined1 local_270;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 *local_240;
  int *local_230;
  int *local_228;
  int local_21c;
  longlong local_210;
  longlong local_208;
  undefined1 local_1fd;
  int local_1fc;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  char local_1ba;
  char local_1b9;
  int local_1b8 [36];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  int local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_d4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  int local_a8 [32];
  uint local_28;
  int local_24;
  undefined8 local_20;
  
  local_240 = auStack_2a8;
  local_258 = 0;
  local_260 = 0;
  local_250 = 0;
  local_248 = 0;
  local_c8 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_208 = *(longlong *)(param_1 + 0xb0);
  local_210 = *(longlong *)(param_1 + 0xc0);
  local_108 = 0;
  local_1b9 = '\0';
  local_24 = 0;
  local_b0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_b8 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01d34d40(*(undefined8 *)(local_208 + 8));
  FUN_01d34d40(*(undefined8 *)(local_210 + 8));
  local_1d8 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
  local_c0 = FUN_00409570(0x100);
  _SCAMS_GetDiagramData(local_1d8,&local_20,&local_f4,&local_f8);
  if (local_f8 == 1) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC AMS: curve memory size exceeds limit!");
    FUN_004134c0(uVar3);
  }
  if (0x1f400000 < local_f4) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC AMS: curve memory size exceeds limit!");
    FUN_004134c0(uVar3);
  }
  if (0 < local_f4) {
    local_f0 = FUN_01610130(&local_20,&local_24);
    if (0x20 < local_f0) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Number of SystemC AMS signals exceeds limit");
      FUN_004134c0(uVar3);
    }
    local_d4 = 0;
    if (-1 < local_f0 + -1) {
      local_228 = local_a8;
      local_230 = local_1b8;
      iVar4 = local_f0;
      do {
        iVar1 = FUN_01610130(&local_20,&local_24);
        *local_228 = iVar1;
        iVar1 = FUN_01610130(&local_20,&local_24);
        *local_230 = iVar1;
        FUN_01610090(&local_248,&local_20,&local_24);
        FUN_00416880(&local_118,local_248);
        FUN_01610090(&local_250,&local_20,&local_24);
        FUN_00416880(&local_110,local_250);
        (**(code **)(*local_b0 + 0x78))(local_b0,local_110);
        local_230 = local_230 + 1;
        local_228 = local_228 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_1c8 = local_20;
    local_e8 = local_24;
    local_21c = 0;
    local_d4 = 0;
    if (-1 < local_f0 + -1) {
      local_230 = local_a8;
      iVar4 = local_f0;
      do {
        local_20 = local_1c8;
        local_24 = local_e8;
        (**(code **)(*local_b0 + 0x18))(local_b0,&local_110,local_d4);
        iVar2 = FUN_00416db0(local_110,L"sigInput");
        iVar1 = local_21c;
        if (iVar2 == 0) {
          local_1b9 = '\x01';
        }
        if (*local_230 == 0xb) {
          FUN_0043f750(&local_260,local_d4 + 1);
          local_288 = local_260;
          FUN_00416cd0(&local_258,3,local_110);
          local_288 = local_288 & 0xffffffffffffff00;
          local_280 = 0;
          local_278 = 1;
          local_270 = 0;
          FUN_01cc2930(*(undefined8 *)(local_208 + 8),local_258,0);
        }
        else {
          local_21c = local_21c + 1;
          FUN_01cc34d0(*(undefined8 *)(local_210 + 8),local_110,iVar1,0);
        }
        while (local_24 < local_f4 + -1) {
          local_1e0 = FUN_01610160(&local_20,&local_24);
          local_1f0 = (double)FUN_015f6560(local_1e0);
          if (local_1b9 != '\0') {
            local_1f0 = local_1f0 * 1000.0;
          }
          local_28 = FUN_01610100(&local_20,&local_24);
          local_28 = local_28 & 0xff;
          local_1ba = FUN_016101f0(auStack_2a8,local_d4,&local_1d0);
          if (local_1ba != '\0') {
            local_100 = *local_230;
            if ((local_100 != 0xb) && (local_100 != 1)) {
              uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC AMS: processing curve error");
              FUN_004134c0(uVar3);
            }
            local_e4 = FUN_0160f890(local_100);
            FUN_01610190(&local_20,&local_24,local_e4);
            if (local_100 == 0xb) {
              FUN_00409a70(local_c0,&local_1f8,(longlong)local_e4);
              FUN_01cc4620(local_208,local_1f0);
              FUN_01cc46b0(local_208,0,local_1f8);
            }
            else if (local_100 == 1) {
              local_1fc = 0;
              FUN_00409a70(local_c0,&local_1fc,(longlong)local_e4);
              local_1fd = 0 < local_1fc;
              FUN_01cc56d0(local_210,local_21c + -1,local_1f0);
            }
            else {
              uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC AMS: processing curve error");
              FUN_004134c0(uVar3);
            }
          }
          local_20 = local_1d0;
          local_24 = local_ec;
          if (local_d4 == 0) {
            local_108 = local_108 + 1;
          }
        }
        local_d4 = local_d4 + 1;
        local_230 = local_230 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)(param_1 + 0x1418) = local_108;
  }
  FUN_00410f20(local_b0);
  FUN_00410f20(local_b8);
  FUN_004095f0(local_c0);
  FUN_00414560(&local_260,2);
  FUN_00414590(&local_250,2);
  FUN_004144d0(&local_128);
  FUN_00414560(&local_120,3);
  FUN_00414480(&local_c8);
  FUN_00414480(local_res10);
  return;
}

