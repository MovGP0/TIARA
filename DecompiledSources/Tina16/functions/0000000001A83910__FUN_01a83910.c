/* Ghidra address: 01a83910 */
/* Ghidra symbol: FUN_01a83910 */


undefined8 FUN_01a83910(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_438 [32];
  undefined8 local_418;
  undefined8 local_408;
  undefined1 *local_400;
  longlong local_3f0;
  longlong *local_3e8;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_340;
  undefined8 local_338 [95];
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_400 = auStack_438;
  local_408 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = 0;
  local_378 = 0;
  local_380 = 0;
  local_388 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_39 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_38);
  local_3e8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = 0;
  if (local_39 == '\x02') {
    local_30 = FUN_004aeac0(local_38,0);
    local_3f0 = FUN_004aeac0(local_38,0);
    (**(code **)(**(longlong **)(local_3f0 + 200) + 0x10))
              (*(longlong **)(local_3f0 + 200),*(undefined8 *)(local_3f0 + 0xe0),0);
    FUN_00414b50(&local_378,*(undefined8 *)(*(longlong *)(local_3f0 + 0xf8) + 0xd8));
    iVar2 = FUN_004170c0(&DAT_01a83d4c,local_378,1);
    if (0 < iVar2) {
      iVar2 = FUN_004170c0(&DAT_01a83d4c,local_378,1);
      FUN_00416dc0(&local_378,local_378,1,iVar2 + -1);
    }
    iVar2 = FUN_004170c0(&DAT_01a83d5c,local_378,1);
    if (0 < iVar2) {
      iVar2 = FUN_004170c0(&DAT_01a83d5c,local_378,1);
      FUN_00416dc0(&local_378,local_378,1,iVar2 + -1);
    }
    FUN_01cc0ae0(*(undefined8 *)(local_3f0 + 0xe0),&local_408);
    local_418 = local_408;
    FUN_00416cd0(&local_380,3,local_378,&DAT_01a83d6c);
    (**(code **)(*local_3e8 + 0x78))(local_3e8,local_380);
    while( true ) {
      cVar1 = (**(code **)(**(longlong **)(local_3f0 + 200) + 0x30))
                        (*(longlong **)(local_3f0 + 200),local_338,&local_340,0);
      if (cVar1 == '\0') break;
      FUN_00414480(&local_28);
      FUN_00448450(&local_28,local_338[0],PTR_DAT_02004830);
      FUN_00414480(local_20);
      FUN_00448450(local_20,local_340,PTR_DAT_02004830);
      local_418 = local_20[0];
      FUN_00416cd0(&local_380,3,local_28);
      FUN_00414480(local_20);
      FUN_00414480(&local_28);
      (**(code **)(*local_3e8 + 0x78))(local_3e8,local_380);
    }
    (**(code **)(*local_3e8 + 0x100))(local_3e8,local_res10[0]);
  }
  FUN_00410f20(local_38);
  FUN_00410f20(local_3e8);
  FUN_00414480(&local_408);
  FUN_00414560(&local_388,6);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_30;
}

