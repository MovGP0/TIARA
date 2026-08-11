/* Ghidra address: 016be470 */
/* Ghidra symbol: FUN_016be470 */


void FUN_016be470(longlong param_1,byte *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 auStack_3e8 [32];
  undefined *local_3c8;
  byte *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [8];
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined1 local_378 [8];
  undefined1 *local_370;
  byte local_363;
  char local_362;
  undefined1 local_361;
  undefined8 local_360;
  undefined8 local_358;
  undefined *local_350;
  ulonglong local_348;
  int local_33c;
  uint local_338;
  int local_334;
  byte local_32f;
  char local_32e;
  byte local_32d;
  byte local_32c [256];
  byte local_22c [256];
  undefined4 local_12c;
  undefined8 local_128 [33];
  
  local_370 = auStack_3e8;
  local_3b0 = 0;
  local_3b8 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_348 = 0;
  local_350 = (undefined *)0x0;
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_22c;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar2 = FUN_00414f50(local_22c,&DAT_016bf06c,(ulonglong)local_22c[0] + 1);
  if (iVar2 == 0) {
    uVar3 = FUN_00409570(0x78);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined1 *)(param_1 + 0x41) = 1;
    local_362 = '\0';
    local_334 = *(int *)(*(longlong *)(param_1 + 0xa40) + 0x10);
    local_3c8 = (undefined *)((ulonglong)local_3c8 & 0xffffffffffffff00);
    local_3c0 = local_32c;
    cVar1 = FUN_016babb0(param_1,1,L"TIME_SCALE_FACTOR",&DAT_016bf0a0);
    if (cVar1 != '\0') {
      if (param_3 == '\0') {
        local_358 = FUN_016bade0(param_1);
        FUN_004144d0(&local_348);
      }
      else {
        FUN_016bdd70(param_1,&local_348,&local_358,0);
      }
      local_378[0] = 0;
      local_3c8 = (undefined *)local_348;
      local_3c0 = *(byte **)(param_1 + 0x10);
      uVar3 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_378,local_358);
      *(undefined8 *)(*(longlong *)(param_1 + 0xa40) + 0x20) = uVar3;
    }
    local_3c8 = (undefined *)((ulonglong)local_3c8 & 0xffffffffffffff00);
    local_3c0 = local_32c;
    cVar1 = FUN_016babb0(param_1,1,L"VALUE_SCALE_FACTOR",&DAT_016bf0a0);
    if (cVar1 != '\0') {
      if (param_3 == '\0') {
        local_360 = FUN_016bade0(param_1);
        FUN_004144d0(&local_350);
      }
      else {
        FUN_016bdd70(param_1,&local_350,&local_360,0);
      }
      local_378[0] = 0;
      local_3c8 = local_350;
      local_3c0 = *(byte **)(param_1 + 0x10);
      uVar3 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_378,local_360);
      *(undefined8 *)(*(longlong *)(param_1 + 0xa40) + 0x28) = uVar3;
    }
    while (cVar1 = FUN_016b9d70(param_1), cVar1 == '\0') {
      local_3c8 = (undefined *)((ulonglong)local_3c8 & 0xffffffffffffff00);
      local_3c0 = local_32c;
      cVar1 = FUN_016babb0(param_1,1,L"REPEAT|ENDREPEAT|FILE",&DAT_016bf0a0);
      if (cVar1 == '\0') {
        local_361 = FUN_016ba100(param_1,0x2b);
        if (param_3 == '\0') {
          local_358 = FUN_016bade0(param_1);
          FUN_004144d0(&local_348);
          local_360 = FUN_016bade0(param_1);
          FUN_004144d0(&local_350);
        }
        else {
          FUN_016bdd70(param_1,&local_348,&local_358,0);
          FUN_016bdd70(param_1,&local_350,&local_360,0);
        }
        if (local_362 == '\0') {
          local_378[0] = 0;
          local_398[0] = 0;
          local_3c8 = (undefined *)local_348;
          local_3c0 = *(byte **)(param_1 + 0x10);
          uVar3 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_398,local_358);
          local_398[0] = 0;
          local_3c8 = local_350;
          local_3c0 = *(byte **)(param_1 + 0x10);
          local_3c8 = (undefined *)FUN_016a5390(&PTR_FUN_016a0e58,1,local_398,local_360);
          local_3c0 = (byte *)CONCAT71(local_3c0._1_7_,local_361);
          uVar3 = FUN_016a58c0(&PTR_FUN_016a1500,1,local_378,uVar3);
          (**(code **)(**(longlong **)(param_1 + 0xa40) + 0x50))
                    (*(longlong **)(param_1 + 0xa40),uVar3);
        }
      }
      else {
        iVar2 = FUN_00414f50(local_32c,&DAT_016bf130,(ulonglong)local_32c[0] + 1);
        if (iVar2 == 0) {
          FUN_016ba220(param_1,local_32c,&DAT_016bf135,1);
          FUN_004169a0(&local_380,local_32c);
          FUN_016bbb90(param_1,local_380);
          FUN_00415560(local_128,*(undefined8 *)(param_1 + 0xd90),0xff);
          local_12c = *(undefined4 *)(param_1 + 0x990);
          FUN_004169a0(&local_388,local_32c);
          FUN_016bb4f0(param_1,local_388,0);
          while (cVar1 = FUN_016bb790(param_1), cVar1 == '\0') {
            FUN_016bb7d0(param_1,&local_390,0);
            FUN_00414bf0(param_1 + 0xd90,local_390);
            *(undefined4 *)(param_1 + 0x990) = 1;
            FUN_016b9d20(param_1);
            FUN_016b9d80(param_1);
            local_361 = FUN_016ba100(param_1,0x2b);
            local_358 = FUN_016bade0(param_1);
            local_360 = FUN_016bade0(param_1);
            if (local_362 == '\0') {
              local_378[0] = 0;
              local_398[0] = 0;
              local_3c8 = (undefined *)0x0;
              local_3c0 = *(byte **)(param_1 + 0x10);
              uVar3 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_398,local_358);
              local_398[0] = 0;
              local_3c8 = (undefined *)0x0;
              local_3c0 = *(byte **)(param_1 + 0x10);
              local_3c8 = (undefined *)FUN_016a5390(&PTR_FUN_016a0e58,1,local_398,local_360);
              local_3c0 = (byte *)CONCAT71(local_3c0._1_7_,local_361);
              uVar3 = FUN_016a58c0(&PTR_FUN_016a1500,1,local_378,uVar3);
              (**(code **)(**(longlong **)(param_1 + 0xa40) + 0x50))
                        (*(longlong **)(param_1 + 0xa40),uVar3);
            }
          }
          FUN_004154b0(param_1 + 0xd90,local_128,0);
          *(undefined4 *)(param_1 + 0x990) = local_12c;
          FUN_016bbca0(param_1);
        }
        else {
          iVar2 = FUN_00414f50(local_32c,"\tENDREPEAT",(ulonglong)local_32c[0] + 1);
          if (iVar2 == 0) {
            cVar1 = FUN_016be410(param_1,&local_363,&local_338,&local_33c);
            if (cVar1 == '\0') {
              local_378[0] = 0;
              FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_378,0xffffffff);
            }
            else if (local_363 == 1) {
              if (local_362 != '\0') {
                local_33c = 1;
              }
              FUN_016a60b0(*(undefined8 *)(param_1 + 0xa40),local_338,local_33c);
            }
            else {
              if (local_362 == '\0') {
                local_362 = '\x01';
                *(uint *)(*(longlong *)(param_1 + 0xa40) + 0x30) = (local_338 - local_334) + 1;
              }
              FUN_016a60b0(*(undefined8 *)(param_1 + 0xa40),local_338,1);
            }
          }
          else {
            local_3c8 = &DAT_016bf0a0;
            local_3c0 = (byte *)((ulonglong)local_3c0 & 0xffffffffffffff00);
            FUN_016ba960(param_1,local_32c,1,L"FOR|FOREVER");
            iVar2 = FUN_00414f50(local_32c,&DAT_016bf184,(ulonglong)local_32c[0] + 1);
            if (iVar2 == 0) {
              local_33c = FUN_016baff0(param_1,0xffffffff,0x7fffffff);
              if (local_33c == -1) {
                local_363 = 2;
              }
              else {
                local_363 = 1;
              }
            }
            else {
              local_33c = 0;
              local_363 = 2;
            }
            cVar1 = FUN_016be3c0(param_1,local_363,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0xa40) + 0x10),local_33c);
            if (cVar1 == '\0') {
              local_378[0] = 0;
              FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_378,0xffffffff);
            }
          }
        }
      }
    }
    FUN_004095f0(*(undefined8 *)(param_1 + 0x48));
    if (*(char *)(param_1 + 0x41) != '\x01') {
      local_378[0] = 0;
      FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_378,0xffffffff);
    }
  }
  else {
    iVar2 = FUN_00414f50(local_22c,&DAT_016bf188,(ulonglong)local_22c[0] + 1);
    if (iVar2 == 0) {
      local_32f = 6;
    }
    else {
      iVar2 = FUN_00414f50(local_22c,&DAT_016bf18c,(ulonglong)local_22c[0] + 1);
      if (iVar2 == 0) {
        local_32f = 7;
      }
      else {
        iVar2 = FUN_00414f50(local_22c,&DAT_016bf192,(ulonglong)local_22c[0] + 1);
        if (iVar2 == 0) {
          local_32f = 5;
        }
        else {
          local_32f = 6;
        }
      }
    }
    local_32e = '\x02';
    cVar1 = '\x02';
    local_32d = 1;
    do {
      FUN_0040e840(local_128,local_32d + 3);
      FUN_004154b0(&local_3a8,local_128,0);
      FUN_004156b0(&local_3a0,&LAB_016bf1a4,local_3a8);
      FUN_00415560(local_128,local_3a0);
      FUN_016bdfc0(param_1,local_128);
      local_32d = local_32d + 1;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    local_32d = local_32e + 1;
    if (local_32d <= local_32f) {
      cVar1 = (local_32f - local_32d) + '\x01';
      do {
        FUN_0040e840(local_128,local_32d + 3);
        FUN_004154b0(&local_3b8,local_128,0);
        FUN_004156b0(&local_3b0,&LAB_016bf1a4,local_3b8);
        FUN_00415560(local_128,local_3b0);
        FUN_016be0b0(param_1,local_128);
        local_32d = local_32d + 1;
        cVar1 = cVar1 + -1;
      } while (cVar1 != '\0');
    }
  }
  FUN_00414590(&local_3b8,4);
  FUN_004144d0(&local_390);
  FUN_00414560(&local_388,2);
  FUN_00414590(&local_350,2);
  return;
}

