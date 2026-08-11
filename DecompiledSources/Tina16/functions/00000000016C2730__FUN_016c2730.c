/* Ghidra address: 016c2730 */
/* Ghidra symbol: FUN_016c2730 */


void FUN_016c2730(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_49c;
  longlong local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined1 local_470 [256];
  undefined8 local_370;
  undefined1 local_368 [256];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218 [64];
  undefined1 local_118 [256];
  
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_370 = 0;
  local_260 = 0;
  local_268 = 0;
  local_250 = 0;
  local_258 = 0;
  local_240 = 0;
  local_248 = 0;
  local_230 = 0;
  local_238 = 0;
  local_220 = 0;
  local_228 = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 < 0x15e) {
    if (iVar1 == 0x15d) {
      local_218[0] = 0x524f5803;
      FUN_004169a0(&local_250,local_218);
      FUN_0043f750(&local_258,*(undefined4 *)(param_1 + 0x60));
      FUN_00416ad0(&local_250,local_258);
      FUN_00416910(local_118,local_250,0xff);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      local_49c = 2;
      local_498 = param_1 + 0x60;
    }
    else if (iVar1 == 0x11b) {
      local_218[0] = 0x564e4903;
      FUN_004169a0(&local_220,local_218);
      FUN_0043f750(&local_228,*(undefined4 *)(param_1 + 0x6c));
      FUN_00416ad0(&local_220,local_228);
      FUN_00416910(local_118,local_220,0xff);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      local_49c = 1;
      local_498 = param_1 + 0x6c;
    }
    else if (iVar1 == 0x11c) {
      local_218[0] = 0x444e4103;
      FUN_004169a0(&local_230,local_218);
      FUN_0043f750(&local_238,*(undefined4 *)(param_1 + 0x68));
      FUN_00416ad0(&local_230,local_238);
      FUN_00416910(local_118,local_230,0xff);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      local_49c = 2;
      local_498 = param_1 + 0x68;
    }
    else if (iVar1 == 0x11d) {
      local_218[0] = CONCAT13(local_218[0]._3_1_,0x524f02);
      FUN_004169a0(&local_240,local_218);
      FUN_0043f750(&local_248,*(undefined4 *)(param_1 + 100));
      FUN_00416ad0(&local_240,local_248);
      FUN_00416910(local_118,local_240,0xff);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      local_49c = 2;
      local_498 = param_1 + 100;
    }
  }
  else if (iVar1 == 0x17e) {
    local_218[0] = 0x46554203;
    FUN_004169a0(&local_260,local_218);
    FUN_0043f750(&local_268,*(undefined4 *)(param_1 + 0x5c));
    FUN_00416ad0(&local_260,local_268);
    FUN_00416910(local_118,local_260,0xff);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    local_49c = 1;
    local_498 = param_1 + 0x5c;
  }
  else if (iVar1 == 0x17f) goto LAB_016c2f06;
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  FUN_016c2000(*(undefined8 *)(param_1 + 0xa0),local_218,
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x60),uVar3,local_49c,local_498);
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x9a9) == '\0') {
    lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x50),0);
    uVar3 = uVar3 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),uVar3,0
                 ,0,*(undefined8 *)(lVar2 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x50),1);
    uVar3 = uVar3 & 0xffffffffffffff00;
    FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),uVar3,0
                 ,0,*(undefined8 *)(lVar2 + 8),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    iVar1 = *(int *)(param_2 + 8);
    if (((iVar1 == 0x11c) || (iVar1 == 0x11d)) || (iVar1 == 0x15d)) {
      FUN_016c2310(param_1,&local_370,param_2,0);
      FUN_00416910(local_470,local_370,0xff);
      uVar3 = uVar3 & 0xffffffffffffff00;
      FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),uVar3
                   ,0,0,local_470,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
      FUN_016c2310(param_1,&local_478,param_2,1);
      FUN_00416910(local_470,local_478,0xff);
      uVar3 = uVar3 & 0xffffffffffffff00;
      FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),uVar3
                   ,0,0,local_470,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
      FUN_016c2310(param_1,&local_480,param_2,2);
      FUN_00416910(local_470,local_480,0xff);
      FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),
                   uVar3 & 0xffffffffffffff00,0,0,local_470,
                   *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    }
    else {
      FUN_016c2310(param_1,&local_488,param_2,0);
      FUN_00416910(local_470,local_488,0xff);
      uVar3 = uVar3 & 0xffffffffffffff00;
      FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),uVar3
                   ,0,0,local_470,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
      FUN_016c2310(param_1,&local_490,param_2,1);
      FUN_00416910(local_470,local_490,0xff);
      FUN_016bd780(*(undefined8 *)(param_1 + 0xa0),local_368,0,*(undefined8 *)(param_1 + 0xb0),
                   uVar3 & 0xffffffffffffff00,0,0,local_470,
                   *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x9a9));
    }
  }
LAB_016c2f06:
  FUN_00414560(&local_490,4);
  FUN_00414480(&local_370);
  FUN_00414560(&local_268,10);
  return;
}

