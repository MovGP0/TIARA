/* Ghidra address: 01a103b0 */
/* Ghidra symbol: FUN_01a103b0 */


void FUN_01a103b0(longlong param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong local_res10;
  undefined2 local_res18;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined2 local_290 [4];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 *local_250;
  undefined4 local_244;
  undefined4 local_240;
  int local_23c;
  undefined4 local_238;
  char local_231;
  undefined8 local_230;
  byte local_228 [256];
  byte local_128 [256];
  longlong local_28;
  undefined8 local_20 [2];
  
  local_250 = auStack_358;
  local_320 = 0;
  local_318 = 0;
  local_300 = 0;
  local_310 = 0;
  local_308 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2d0 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_298 = 0;
  local_280 = 0;
  local_288 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_258 = 0;
  local_260 = 0;
  local_28 = 0;
  local_230 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  if (local_res10 != 0) {
    cVar1 = FUN_004575a0(&local_res10,&DAT_01a10cb8,0);
    if (cVar1 != '\0') {
      FUN_00414480(local_20);
      local_238 = 0;
      if (local_res10 != 0) {
        local_238 = *(undefined4 *)(local_res10 + -4);
      }
      FUN_00416dc0(local_20,local_res10,2,local_238);
      FUN_00414b50(&local_res10,local_20[0]);
      FUN_00414480(local_20);
    }
    local_128[0] = 0;
    local_23c = 0;
    if (local_res10 != 0) {
      local_23c = *(int *)(local_res10 + -4);
    }
    if (local_23c < 0x47) {
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        FUN_00416ba0(&local_318,L"+ VARS: ",local_res10);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_318);
      }
      else {
        FUN_00416ba0(&local_320,L"+ PARAMS: ",local_res10);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_320);
      }
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),L"+ VARS:");
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),L"+ PARAMS:");
      }
      local_231 = '\x01';
      FUN_0043ea00(&local_28,local_res10);
      while (local_28 != 0) {
        uVar2 = FUN_004170c0(&DAT_01a10d04,local_28,1);
        FUN_00416dc0(&local_260,local_28,1,uVar2);
        FUN_0043ea00(&local_258,local_260);
        FUN_00416910(local_228,local_258,0xff);
        uVar2 = FUN_004170c0(&DAT_01a10d04,local_28,1);
        FUN_00416e20(&local_28,1,uVar2);
        FUN_0043ea00(&local_268,local_28);
        FUN_00414b50(&local_28,local_268);
        FUN_00416780(&local_270,local_res18);
        iVar3 = FUN_004170c0(local_270,local_28,1);
        if (iVar3 < 1) {
          local_240 = 0;
          if (local_28 != 0) {
            local_240 = *(undefined4 *)(local_28 + -4);
          }
          FUN_00416dc0(&local_230,local_28,1,local_240);
          FUN_004169a0(&local_2a0,local_228);
          local_290[0] = local_res18;
          FUN_00457c30(&local_230,&local_2a8,local_290,0);
          FUN_00416ad0(&local_2a0,local_2a8);
          FUN_00416910(local_228,local_2a0,0xff);
          local_244 = 0;
          if (local_28 != 0) {
            local_244 = *(undefined4 *)(local_28 + -4);
          }
          FUN_00416e20(&local_28,1,local_244);
        }
        else {
          FUN_00416780(&local_278,local_res18);
          uVar2 = FUN_004170c0(local_278,local_28,1);
          FUN_00416dc0(&local_230,local_28,1,uVar2);
          FUN_004169a0(&local_280,local_228);
          local_290[0] = local_res18;
          FUN_00457c30(&local_230,&local_288,local_290,0);
          FUN_00416ad0(&local_280,local_288);
          FUN_00416910(local_228,local_280,0xff);
          FUN_00416780(&local_298,local_res18);
          uVar2 = FUN_004170c0(local_298,local_28,1);
          FUN_00416e20(&local_28,1,uVar2);
        }
        FUN_0043ea00(&local_2b0,local_28);
        FUN_00414b50(&local_28,local_2b0);
        if ((uint)local_128[0] + (uint)local_228[0] < 0x47) {
          FUN_004154b0(&local_2c0,local_128,0);
          FUN_004154b0(&local_2c8,local_228,0);
          local_338 = local_2c8;
          FUN_00415980(&local_2b8,3,local_2c0,&DAT_01a10d14);
          FUN_00415560(local_128,local_2b8,0xff);
        }
        else {
          if (local_231 == '\0') {
            FUN_004154b0(&local_2d8,local_128,0);
            FUN_004156b0(&local_2d0,&DAT_01a10d24,local_2d8);
            FUN_00416880(&local_2e0,local_2d0);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                      (*(longlong **)(param_1 + 0x20),local_2e0);
          }
          else {
            FUN_004169a0(&local_2e8,local_128);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                      (*(longlong **)(param_1 + 0x20),local_2e8);
            local_231 = '\0';
          }
          FUN_004154b0(&local_2f8,local_228,0);
          FUN_004156b0(&local_2f0,&DAT_01a10d14,local_2f8);
          FUN_00415560(local_128,local_2f0,0xff);
        }
      }
      if (local_128[0] != 0) {
        FUN_004154b0(&local_308,local_128,0);
        FUN_004156b0(&local_300,&DAT_01a10d24,local_308);
        FUN_00416880(&local_310,local_300);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_310);
      }
    }
  }
  FUN_00414560(&local_320,3);
  FUN_00414590(&local_308,4);
  FUN_00414560(&local_2e8,2);
  FUN_00414590(&local_2d8,5);
  FUN_00414560(&local_2b0,4);
  FUN_00414560(&local_288,7);
  FUN_00414480(&local_230);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_res10);
  return;
}

