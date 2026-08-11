/* Ghidra address: 01700890 */
/* Ghidra symbol: FUN_01700890 */


undefined1
FUN_01700890(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
            undefined1 param_5,longlong param_6,longlong param_7)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_289;
  undefined8 local_288;
  int local_27c;
  undefined1 local_278 [4];
  int local_274;
  longlong local_270;
  undefined8 *local_268;
  longlong local_260;
  undefined1 local_251;
  longlong local_250;
  undefined1 local_248 [512];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_20;
  
  local_2b0 = auStack_348;
  local_310 = 0;
  local_300 = 0;
  local_308 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_288 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(param_6);
  local_251 = 0;
  local_20 = (undefined8 *)0x0;
  local_270 = 0;
  local_260 = FUN_019a4600();
  FUN_0160b7f0(local_res8,*(longlong *)(local_260 + 0x200) + 0x20);
  if (param_7 == 0) {
    uVar5 = FUN_017105e0(0);
    local_328 = &local_288;
    local_250 = FUN_016ff140(uVar5,local_res8,local_res18,param_5);
  }
  else {
    local_328 = &local_288;
    local_250 = FUN_016ff140(param_7,local_res8,local_res18,param_5);
  }
  if (local_250 != 0) {
    if (param_6 == 0) {
      FUN_015fcb30(&param_6,PTR_DAT_02004770);
    }
    uVar5 = FUN_00442620(local_248,param_6);
    FUN_015fcc20(uVar5,&local_48,local_260,0);
    local_40 = FUN_0154bb80(&DAT_01546f18,1);
    FUN_0156c6e0(local_40,local_250);
    local_20 = (undefined8 *)FUN_015ec7f0(local_40,param_6,local_48);
    local_27c = FUN_01566d20(local_40);
    iVar4 = FUN_00416db0(local_288,L"<AutoShape>");
    if (iVar4 != 0) {
      sVar3 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_288);
      local_274 = (int)sVar3;
      if (local_274 < 0) {
        local_2c0 = local_288;
        local_2b8 = 0x11;
        FUN_00442f70(&local_298,L"Shape: %s not found in the library! Default shape created.",
                     &local_2c0,0);
        FUN_016fe230(local_298);
        FUN_016feb60(&local_2c8,local_res8);
        local_270 = FUN_019a26a0(local_20,local_2c8);
      }
      else {
        uVar5 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,local_274);
        local_270 = FUN_00c3f320(uVar5);
      }
    }
    if (local_27c == 4) {
      local_268 = (undefined8 *)FUN_01776df0(&PTR_FUN_017649b8,1,local_res20);
      *(undefined8 **)(local_res20 + 0x1a8) = local_268;
      *(undefined1 *)(local_res20 + 0x1a0) = 4;
      FUN_016feb60(&local_2d0,local_res8);
      (**(code **)*local_268)(local_268,local_2d0);
      if (local_270 == 0) {
        FUN_01768c30(local_268,local_res10);
      }
      else {
        FUN_01768da0(local_268,local_270);
      }
      FUN_01777c80(local_268,local_40);
    }
    else {
      local_268 = (undefined8 *)FUN_01771870(&PTR_FUN_01763148,1,local_res20);
      *(undefined8 **)(local_res20 + 0x1a8) = local_268;
      *(undefined1 *)(local_res20 + 0x1a0) = 3;
      FUN_016feb60(&local_2d8,local_res8);
      (**(code **)*local_268)(local_268,local_2d8);
      if (local_270 == 0) {
        FUN_01768c30(local_268,local_res10);
      }
      else {
        FUN_01768da0(local_268,local_270);
      }
      puVar1 = local_268;
      FUN_01774e00(local_268,local_40);
      local_328 = (undefined8 *)&local_289;
      cVar2 = FUN_015f5c70(param_6,local_res20,0xffff,local_278);
      if (cVar2 != '\0') {
        *(undefined4 *)(puVar1 + 0x24) = 3;
      }
    }
    cVar2 = FUN_01d3f210(local_res20);
    if (cVar2 != '\0') {
      FUN_015fea90(&local_2a0,param_6,local_res20,&local_2a8);
      if (*(longlong *)(*(longlong *)(local_res20 + 0x1a8) + 0x58) == 0) {
        cVar2 = FUN_01609210(local_2a8);
        if (cVar2 == '\0') {
          cVar2 = FUN_01609390(local_2a8);
          if (cVar2 == '\0') {
            cVar2 = FUN_01609310(local_2a8);
            if (cVar2 == '\0') {
              cVar2 = FUN_016096e0(local_2a8);
              if (cVar2 != '\0') {
                FUN_0160a130(&local_310);
                (**(code **)(**(longlong **)(local_res20 + 0x1a8) + 0x10))
                          (*(longlong **)(local_res20 + 0x1a8),local_310);
              }
            }
            else {
              FUN_00415dd0(&local_308,local_2a8,0);
              FUN_0160a9a0(&local_300,local_308);
              (**(code **)(**(longlong **)(local_res20 + 0x1a8) + 0x10))
                        (*(longlong **)(local_res20 + 0x1a8),local_300);
            }
          }
          else {
            FUN_00415dd0(&local_2f8,local_2a8,0);
            FUN_0160a710(&local_2f0,local_2f8);
            (**(code **)(**(longlong **)(local_res20 + 0x1a8) + 0x10))
                      (*(longlong **)(local_res20 + 0x1a8),local_2f0);
          }
        }
        else {
          FUN_00415dd0(&local_2e8,local_2a8,0);
          FUN_0160a650(&local_2e0,local_2e8);
          (**(code **)(**(longlong **)(local_res20 + 0x1a8) + 0x10))
                    (*(longlong **)(local_res20 + 0x1a8),local_2e0);
        }
      }
    }
    local_251 = 1;
    if (local_20 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*local_20)(local_20);
      FUN_00418590(uVar5,&DAT_01984da0);
    }
    uVar5 = local_40;
    local_38 = local_40;
    local_40 = 0;
    FUN_00410f20(uVar5);
    uVar5 = FUN_00442620(local_248,param_6);
    FUN_015fcd60(local_48,uVar5,0);
    FUN_015fcbd0(PTR_DAT_02004770,0);
    FUN_00410f20(local_250);
  }
  FUN_00414480(&local_310);
  FUN_004144d0(&local_308);
  FUN_00414480(&local_300);
  FUN_004144d0(&local_2f8);
  FUN_00414480(&local_2f0);
  FUN_004144d0(&local_2e8);
  FUN_00414560(&local_2e0,4);
  FUN_00414560(&local_2a8,3);
  FUN_00414480(&local_288);
  FUN_00414560(&local_res8,2);
  FUN_00414480(&param_6);
  return local_251;
}

