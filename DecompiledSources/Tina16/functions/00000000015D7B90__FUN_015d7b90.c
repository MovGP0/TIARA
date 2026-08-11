/* Ghidra address: 015d7b90 */
/* Ghidra symbol: FUN_015d7b90 */


void FUN_015d7b90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 char param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_res20;
  undefined1 auStack_378 [32];
  char *local_358;
  char *local_350;
  undefined8 local_348;
  undefined1 *local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 *local_2e0;
  char local_2c1;
  int local_2c0;
  uint local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [16];
  uint local_298;
  undefined8 local_290;
  char local_21;
  undefined8 local_20;
  
  local_2e0 = auStack_378;
  local_348 = 0;
  local_338 = 0;
  local_340 = (undefined1 *)0x0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_308 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_20 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_6);
  FUN_00417580(local_2a8,&DAT_00432b90);
  local_358 = &local_2c1;
  FUN_015d7070(*(undefined8 *)(param_1 + 0x80),&local_2b0,local_res20,param_2);
  iVar2 = FUN_00416db0(local_res20,local_2b0);
  if (((iVar2 == 0) && (iVar2 = FUN_004170c0(&DAT_015d8448,local_res20,1), iVar2 == 0)) &&
     (iVar2 = FUN_004170c0(&DAT_015d8458,local_res20,1), iVar2 == 0)) {
    iVar2 = FUN_015bf5c0(local_2b0,*(undefined4 *)(param_1 + 0x90),local_2a8);
    if (iVar2 == 0) {
      FUN_015bf7d0(&local_2e8,local_2b0);
      local_358 = param_6;
      FUN_015d78e0(auStack_378,local_2a8,local_2e8,param_3);
      FUN_015bf620(local_2a8);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x90) & 0x10) == 0) {
      local_2bc = *(uint *)(param_1 + 0x90);
    }
    else {
      local_2bc = *(int *)(param_1 + 0x90) - 0x10;
    }
    iVar2 = FUN_015bf5c0(local_2b0,local_2bc,local_2a8);
    if (iVar2 == 0) {
      do {
        if (((local_2bc & local_298) != 0) ||
           (((local_298 == 0 && ((local_2bc & 0x20) != 0)) &&
            (((local_2bc & 1) != 0 && (((local_2bc & 2) != 0 && ((local_2bc & 4) != 0)))))))) {
          FUN_015bf7d0(&local_2f0,local_2b0);
          local_358 = param_6;
          FUN_015d78e0(auStack_378,local_2a8,local_2f0,param_3);
        }
        iVar2 = FUN_015bf5f0(local_2a8);
      } while (iVar2 == 0);
      FUN_015bf620(local_2a8);
    }
    if (((*(uint *)(param_1 + 0x90) & 0x10) != 0) || (param_5 != '\0')) {
      FUN_00441640(&local_2b8,local_2b0);
      FUN_015c1220(&local_2f8,local_2b8,0,param_6);
      iVar2 = FUN_004170c0(param_2,local_2f8,1);
      if ((iVar2 == 0) && (local_2c1 != '\0')) {
        FUN_015bf040(&local_2b8,param_2);
      }
      FUN_00416ba0(&local_300,local_2b8,&DAT_015d8448);
      iVar2 = FUN_015bf5c0(local_300,0x16,local_2a8);
      if (iVar2 == 0) {
        do {
          if ((((local_298 & 0x10) != 0) &&
              (iVar2 = FUN_00416db0(local_290,&DAT_015d8468), iVar2 != 0)) &&
             (iVar2 = FUN_00416db0(local_290,&DAT_015d8478), iVar2 != 0)) {
            local_21 = '\x01';
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))();
            local_2c0 = 0;
            if (-1 < iVar2 + -1) {
              do {
                FUN_00416ba0(&local_308,local_2b8,local_290);
                (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
                          (*(longlong **)(param_1 + 0x98),&local_310,local_2c0);
                cVar1 = FUN_015d4f30(*(undefined8 *)(param_1 + 0x80),local_308,local_310,
                                     (local_298 & 0x10) != 0);
                if (cVar1 != '\0') {
                  local_21 = '\0';
                  break;
                }
                local_2c0 = local_2c0 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            if (local_21 != '\0') {
              if ((*(uint *)(param_1 + 0x90) & 0x10) == 0) {
LAB_015d81c9:
                if (param_5 != '\0') {
                  iVar2 = FUN_004170c0(&DAT_015d848c,local_res20,1);
                  if ((iVar2 < 1) && (iVar2 = FUN_004170c0(&DAT_015d849c,local_res20,1), iVar2 < 1))
                  {
                    FUN_00416ba0(&local_348,local_2b8,local_290);
                    local_358 = (char *)CONCAT71(local_358._1_7_,1);
                    local_350 = param_6;
                    FUN_015d7b90(param_1,local_348,param_3,local_res20);
                  }
                  else {
                    iVar2 = FUN_004170c0(&DAT_015d8448,local_res20,1);
                    if ((0 < iVar2) ||
                       (iVar2 = FUN_004170c0(&DAT_015d8458,local_res20,1), 0 < iVar2)) {
                      FUN_00416ba0(&local_338,local_2b8,local_290);
                      FUN_015bf710(&local_340,local_2b0);
                      local_358 = (char *)CONCAT71(local_358._1_7_,1);
                      local_350 = param_6;
                      FUN_015d7b90(param_1,local_338,param_3,local_340);
                    }
                  }
                }
              }
              else {
                FUN_00416ba0(&local_318,local_2b8,local_290);
                uVar3 = FUN_00416740(local_318);
                uVar4 = FUN_00416740(local_2b0);
                cVar1 = FUN_015bf330(uVar3,uVar4,1);
                if (cVar1 == '\0') {
                  local_358 = ".";
                  FUN_00416cd0(&local_320,3,local_2b8,local_290);
                  uVar3 = FUN_00416740(local_320);
                  uVar4 = FUN_00416740(local_2b0);
                  cVar1 = FUN_015bf330(uVar3,uVar4,1);
                  if (cVar1 == '\0') goto LAB_015d81c9;
                }
                local_358 = param_6;
                cVar1 = FUN_015d78e0(auStack_378,local_2a8,local_2b8,param_3);
                if (cVar1 != '\0') {
                  FUN_00441920(&local_328,local_res20);
                  FUN_00414b50(&local_res20,local_328);
                  FUN_00416ba0(&local_330,local_2b8,local_290);
                  local_358 = (char *)CONCAT71(local_358._1_7_,1);
                  local_350 = param_6;
                  FUN_015d7b90(param_1,local_330,param_3,local_res20);
                }
              }
            }
          }
          iVar2 = FUN_015bf5f0(local_2a8);
        } while (iVar2 == 0);
        FUN_015bf620(local_2a8);
      }
    }
  }
  FUN_00414560(&local_348,0xd);
  FUN_00414560(&local_2b8,2);
  FUN_00417740(local_2a8,&DAT_00432b90);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_6);
  return;
}

