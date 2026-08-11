/* Ghidra address: 016cc920 */
/* Ghidra symbol: FUN_016cc920 */


void FUN_016cc920(byte *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined1 local_328 [256];
  undefined1 local_228 [256];
  byte local_128 [264];
  
  local_360 = 0;
  local_378 = 0;
  local_368 = 0;
  local_370 = 0;
  local_350 = 0;
  local_358 = 0;
  local_340 = 0;
  local_348 = 0;
  local_330 = 0;
  local_338 = 0;
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = FUN_016b97f0(&DAT_016b45f0,1,0);
  FUN_016a3690(*(undefined8 *)(lVar2 + 0x10),&DAT_016ccc1c);
  *(undefined8 *)(lVar2 + 0x20) = 0x2000130100000200;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  FUN_004154b0(&local_338,local_128,0);
  FUN_016b9120(&local_330,local_338);
  FUN_00415560(local_128,local_330,0xff);
  FUN_004169a0(&local_348,local_128);
  FUN_0043eb50(&local_340,local_348);
  FUN_00416910(local_128,local_340,0xff);
  FUN_004169a0(&local_358,local_128);
  FUN_0043e130(&local_350,local_358);
  FUN_00415dd0(lVar2 + 0xd90,local_350,0);
  *(undefined4 *)(lVar2 + 0x990) = 1;
  FUN_016b9d20(lVar2);
  FUN_016b9d80(lVar2);
  (**(code **)(*param_2 + 0x90))(param_2);
  while( true ) {
    cVar1 = FUN_016b9d70(lVar2);
    if (cVar1 != '\0') break;
    FUN_016ba960(lVar2,local_228,0,&DAT_016ccc68,&DAT_016ccc6c,0);
    FUN_016ba960(lVar2,local_328,0,&DAT_016ccc68,&DAT_016ccc6c,0);
    FUN_004154b0(&local_368,local_228,0);
    FUN_004154b0(&local_370,local_328,0);
    FUN_00415980(&local_360,3,local_368,&LAB_016ccc98,local_370);
    FUN_00416880(&local_378,local_360);
    (**(code **)(*param_2 + 0x80))(param_2,local_378);
  }
  FUN_00410f20(lVar2);
  FUN_00414480(&local_378);
  FUN_00414590(&local_370,3);
  FUN_00414560(&local_358,4);
  FUN_00414590(&local_338,2);
  return;
}

