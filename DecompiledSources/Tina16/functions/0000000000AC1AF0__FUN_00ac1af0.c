/* Ghidra address: 00ac1af0 */
/* Ghidra symbol: FUN_00ac1af0 */


void FUN_00ac1af0(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                 undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_428 [32];
  undefined4 local_408;
  undefined4 local_400;
  uint *local_3f8;
  uint *local_3f0;
  undefined4 local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0 [2];
  uint local_3b0;
  uint local_3ac;
  undefined1 local_3a8 [120];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [728];
  
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0[0] = 0;
  local_3e4 = param_2;
  local_3e0 = param_3;
  local_3dc = param_4;
  FUN_00417600(local_3a8,&DAT_004013d8,0x26);
  if (param_1[7] == 0) {
    FUN_00468530(local_318,0xff439eb2,0xfffffffffffffffc);
    FUN_00468530(local_2e8,0xff439eb2,0xfffffffffffffffc);
    FUN_00468530(local_330,0xff439eb2,0xfffffffffffffffc);
    FUN_00468530(local_300,0xff439eb2,0xfffffffffffffffc);
  }
  else {
    FUN_00a5c200(param_1[7],local_3a8);
  }
  local_408 = (undefined4)param_1[9];
  local_400 = *(undefined4 *)((longlong)param_1 + 0xf4);
  local_3f8 = (uint *)(param_1 + 0x1f);
  FUN_00a57610(local_3a8,local_3e4,local_3e0,*(undefined4 *)((longlong)param_1 + 0x44));
  if (*(char *)((longlong)param_1 + 0xbc) == '\0') {
    if (*(char *)((longlong)param_1 + 0xbd) == '\0') {
      local_3b0 = *(uint *)((longlong)param_1 + 0xdc);
      if (((int)local_3b0 < 1) || ((int)param_1[0x1c] < 1)) {
        local_3ac = *(uint *)(param_1 + 0x1c);
        if ((int)local_3ac < 1) {
          if ((int)local_3b0 < 1) {
            local_3ac = param_5;
            local_3b0 = local_3dc;
            local_408 = *(undefined4 *)((longlong)param_1 + 0x10c);
            local_400 = *(undefined4 *)((longlong)param_1 + 0x114);
            local_3f8 = &local_3b0;
            local_3f0 = &local_3ac;
            FUN_00a620f0(local_3dc,param_5,(int)param_1[0x22],(int)param_1[0x23]);
            *(undefined1 *)(param_1 + 0x1b) = param_6;
          }
          else {
            local_3b0 = FUN_00ac1aa0(auStack_428,local_3b0,0xe,0x10);
            local_3ac = thunk_FUN_03f3ed25(local_3b0,param_5,local_3dc);
            local_3ac = FUN_00ac1aa0(auStack_428,local_3ac,0xd,0xf);
            *(undefined1 *)(param_1 + 0x1b) = param_6;
          }
        }
        else {
          local_3ac = FUN_00ac1aa0(auStack_428,local_3ac,0xd,0xf);
          local_3b0 = thunk_FUN_03f3ed25(local_3ac,local_3dc,param_5);
          local_3b0 = FUN_00ac1aa0(auStack_428,local_3b0,0xe,0x10);
          *(undefined1 *)(param_1 + 0x1b) = param_6;
        }
      }
      else {
        local_3ac = *(uint *)(param_1 + 0x1c);
        local_3b0 = *(uint *)((longlong)param_1 + 0xdc);
        local_3ac = FUN_00ac1aa0(auStack_428,local_3ac,0xd,0xf);
        local_3b0 = FUN_00ac1aa0(auStack_428,local_3b0,0xe,0x10);
        *(undefined1 *)(param_1 + 0x1b) = 1;
      }
    }
    else {
      uVar1 = thunk_FUN_03f3ed25(local_3e0,(int)param_1[0x1c],100);
      local_3ac = FUN_00ac1aa0(auStack_428,uVar1,0xd,0xf);
      local_3b0 = *(uint *)((longlong)param_1 + 0xdc);
      if ((int)local_3b0 < 1) {
        local_3b0 = thunk_FUN_03f3ed25(local_3ac,local_3dc,param_5);
      }
      local_3b0 = FUN_00ac1aa0(auStack_428,local_3b0,0xe,0x10);
    }
  }
  else {
    uVar1 = thunk_FUN_03f3ed25(local_3e4,*(undefined4 *)((longlong)param_1 + 0xdc),100);
    local_3b0 = FUN_00ac1aa0(auStack_428,uVar1,0xe,0x10);
    local_3ac = *(uint *)(param_1 + 0x1c);
    if ((int)local_3ac < 1) {
      local_3ac = thunk_FUN_03f3ed25(local_3b0,param_5,local_3dc);
    }
    else if (*(char *)((longlong)param_1 + 0xbd) != '\0') {
      local_3ac = thunk_FUN_03f3ed25(local_3e0,local_3ac,100);
    }
    local_3ac = FUN_00ac1aa0(auStack_428,local_3ac,0xd,0xf);
  }
  (**(code **)(*param_1 + 0xd8))(param_1,local_3b0);
  (**(code **)(*param_1 + 0xd0))(param_1,local_3ac);
  if ((char)param_1[0x1b] != '\0') {
    FUN_00467e90(local_3c0,local_318);
    iVar2 = FUN_004170c0(&LAB_00ac2088,local_3c0[0],1);
    if (iVar2 < 1) {
      FUN_00467e90(&local_3c8,local_2e8);
      iVar2 = FUN_004170c0(&LAB_00ac2088,local_3c8,1);
      if (iVar2 < 1) {
        FUN_00467e90(&local_3d0,local_330);
        iVar2 = FUN_004170c0(&LAB_00ac2088,local_3d0,1);
        if (iVar2 < 1) {
          FUN_00467e90(&local_3d8,local_300);
          iVar2 = FUN_004170c0(&LAB_00ac2088,local_3d8,1);
          if (iVar2 < 1) goto code_r0x00ac2006;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
code_r0x00ac2006:
  FUN_00414560(&local_3d8,4);
  FUN_00417840(local_3a8,&DAT_004013d8,0x26);
  return;
}

