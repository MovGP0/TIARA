/* Ghidra address: 016a36e0 */
/* Ghidra symbol: FUN_016a36e0 */


void FUN_016a36e0(longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338 [16];
  undefined1 local_328 [261];
  undefined1 local_223 [11];
  undefined1 local_218 [256];
  byte local_118 [256];
  
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_348 = 0;
  local_358 = 0;
  local_350 = 0;
  local_340 = 0;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x234) = param_4;
  iVar1 = FUN_004170c0(&DAT_016a3bac,*param_2,1);
  if (0 < iVar1) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(char *)(param_1 + 0x231) == '\0') {
        FUN_0040e840(local_328,*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240));
        FUN_00415020(local_223,local_328,10);
        FUN_00414ff0(local_338,&DAT_016a3bb0);
        FUN_00415110(local_338,local_223,0xb);
        FUN_004169a0(&local_340,local_338);
        uVar2 = FUN_004170c0(&DAT_016a3bac,*param_2,1);
        FUN_00416ea0(local_340,param_2,uVar2);
        *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240);
      }
    }
    else {
      FUN_004154b0(&local_350,param_1 + 0x18,0);
      FUN_004156b0(&local_348,&DAT_016a3bc0,local_350);
      FUN_00416880(&local_358,local_348);
      uVar2 = FUN_004170c0(&DAT_016a3bac,*param_2,1);
      FUN_00416ea0(local_358,param_2,uVar2);
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    uVar2 = FUN_004170c0(&DAT_016a3bac,*param_2,1);
    FUN_00416e20(param_2,uVar2,1);
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  iVar1 = FUN_004170c0(&DAT_016a3bd0,*param_2,1);
  if ((0 < iVar1) && (local_118[0] != 0)) {
    FUN_00414ff0(local_218,local_118);
    FUN_004169a0(&local_360,local_218);
    uVar2 = FUN_004170c0(&DAT_016a3bd0,*param_2,1);
    FUN_00416ea0(local_360,param_2,uVar2);
    uVar2 = FUN_004170c0(&DAT_016a3bd0,*param_2,1);
    FUN_00416e20(param_2,uVar2,1);
    FUN_00414ff0(param_1 + 0x118,local_218);
  }
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x9aa) != '\0') &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_01b20020(&local_368,*(undefined8 *)(param_1 + 0x10),&DAT_016a3bf4);
    FUN_00416cd0(param_2,6,*param_2,&DAT_016a3be0,local_368,&DAT_016a3c04,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1a8) + 0x38),
                 &PTR_DAT_016a3c18);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220));
  if (iVar1 != 0) {
    FUN_00416910(local_218,*(undefined8 *)(param_1 + 0x220),0xff);
    FUN_004169a0(&local_370,local_218);
    FUN_00416cd0(param_2,4,*param_2,&DAT_016a3c2c,local_370,&LAB_016a3c40);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_004169a0(&local_378,param_1 + 0x18);
    FUN_00416cd0(param_2,4,*param_2,&DAT_016a3c2c,local_378,&LAB_016a3c40);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00414560(&local_378,5);
  FUN_00414590(&local_350,2);
  FUN_00414480(&local_340);
  return;
}

