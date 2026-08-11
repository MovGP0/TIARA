/* Ghidra address: 009e1640 */
/* Ghidra symbol: FUN_009e1640 */


void FUN_009e1640(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
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
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  uint local_28c;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  short local_24 [14];
  
  local_2b0 = auStack_338;
  local_300 = 0;
  local_308 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_298 = 0;
  local_2a0 = (undefined1 *)0x0;
  FUN_00417580(local_288,&DAT_00432b90);
  *(int *)(param_1 + 0xa8c) = *(int *)(param_1 + 0xa8c) + 1;
  FUN_00416ba0(&local_2b8,param_2,&DAT_009e1b70);
  iVar1 = FUN_00441230(local_2b8,0x1f7,local_288);
  if (iVar1 == 0) {
    do {
      if (local_24[0] == 0) {
        FUN_00414b50(&local_298,local_270);
      }
      else {
        FUN_00416830(&local_298,local_24,0xe);
      }
      FUN_00416ba0(&local_2a0,param_2,local_298);
      if ((local_278 & 0x10) == 0) {
        local_2a8 = FUN_00416740(local_2a0);
        local_28c = thunk_FUN_0414b2cb(local_2a8);
        if (local_28c == 0xffffffff) {
          uVar2 = thunk_FUN_03ce33a6();
          FUN_0044b630(&local_2d0,uVar2,0);
          local_318 = local_2a0;
          FUN_00416cd0(&local_2c8,3,local_2d0,&DAT_009e1ba4);
          uVar3 = FUN_0044d490(&PTR_FUN_00434f90,1,local_2c8);
          FUN_004134c0(uVar3);
        }
        if ((local_28c & 1) != 0) {
          thunk_FUN_040f133e(local_2a8,local_28c & 0xfffffffe);
        }
        iVar1 = thunk_FUN_0418581b(local_2a8);
        if (iVar1 == 0) {
          uVar2 = thunk_FUN_03ce33a6();
          FUN_0044b630(&local_2e0,uVar2,0);
          local_318 = local_2a0;
          FUN_00416cd0(&local_2d8,3,local_2e0,&DAT_009e1ba4);
          uVar3 = FUN_0044d490(&PTR_FUN_00434f90,1,local_2d8);
          FUN_004134c0(uVar3);
        }
      }
      else {
        iVar1 = FUN_00416db0(local_298,&DAT_009e1b80);
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(local_298,&DAT_009e1b90);
          if (iVar1 != 0) {
            FUN_009e1590(&local_2c0,local_2a0);
            FUN_009e1640(param_1,local_2c0);
          }
        }
      }
      iVar1 = FUN_00441290(local_288);
    } while (iVar1 == 0);
    FUN_004412c0(local_288);
  }
  if ((*(char *)(param_1 + 0xaa8) == '\0') || (1 < *(int *)(param_1 + 0xa8c))) {
    local_318 = &LAB_009e1bb4;
    FUN_00416cd0(&local_2e8,3,&LAB_009e1bb4,param_2);
    iVar1 = FUN_004170c0(local_2e8,*(undefined8 *)(param_1 + 0xa80),1);
    if (iVar1 == 0) {
      local_2a8 = FUN_00416740(param_2);
      local_28c = thunk_FUN_0414b2cb(local_2a8);
      if (local_28c == 0xffffffff) {
        uVar2 = thunk_FUN_03ce33a6();
        FUN_0044b630(&local_2f8,uVar2,0);
        local_318 = param_2;
        FUN_00416cd0(&local_2f0,3,local_2f8,&DAT_009e1ba4);
        uVar3 = FUN_0044d490(&PTR_FUN_00434f90,1,local_2f0);
        FUN_004134c0(uVar3);
      }
      if ((local_28c & 1) != 0) {
        thunk_FUN_040f133e(local_2a8,local_28c & 0xfffffffe);
      }
      iVar1 = thunk_FUN_0411ad98(local_2a8);
      if (iVar1 == 0) {
        uVar2 = thunk_FUN_03ce33a6();
        FUN_0044b630(&local_308,uVar2,0);
        local_318 = param_2;
        FUN_00416cd0(&local_300,3,local_308,&DAT_009e1ba4);
        uVar3 = FUN_0044d490(&PTR_FUN_00434f90,1,local_300);
        FUN_004134c0(uVar3);
      }
    }
  }
  *(int *)(param_1 + 0xa8c) = *(int *)(param_1 + 0xa8c) + -1;
  FUN_00414560(&local_308,10);
  FUN_00414480(&local_2b8);
  FUN_00414560(&local_2a0,2);
  FUN_00417740(local_288,&DAT_00432b90);
  return;
}

