/* Ghidra address: 013e8810 */
/* Ghidra symbol: FUN_013e8810 */


void FUN_013e8810(longlong param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined1 *local_3a0;
  undefined8 *local_390;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_369;
  byte local_368 [80];
  undefined1 local_318 [760];
  undefined8 local_20;
  
  local_3a0 = auStack_3d8;
  local_3b8 = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_20 = 0;
  uVar2 = (ulonglong)*param_2;
  if (0x4f < uVar2) {
    uVar2 = 0x50;
  }
  local_369 = (undefined1)uVar2;
  pbVar3 = local_368;
  for (; param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
  }
  FUN_004154b0(&local_3a8,&local_369,0);
  FUN_00416880(&local_3b0,local_3a8);
  FUN_0040cf10(local_318,local_3b0,0);
  FUN_00409900();
  FUN_0040c9e0(local_318);
  FUN_00409900();
  FUN_013e87b0(auStack_3d8);
  while( true ) {
    FUN_013e87b0(auStack_3d8);
    FUN_00416dc0(&local_3b8,local_20,1,2);
    iVar1 = FUN_00416db0(local_3b8,&LAB_013e8af4);
    if (iVar1 == 0) break;
    local_378 = FUN_00b8f030(local_20);
    FUN_013e87b0(auStack_3d8);
    local_380 = FUN_00b8f030(local_20);
    local_390 = (undefined8 *)FUN_004095c0(0x10);
    *local_390 = local_378;
    local_390[1] = local_380;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x788),local_390);
    FUN_00848a70(*(undefined8 *)(param_1 + 0x6d0),
                 *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) * 2);
    if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) <= *(int *)(param_1 + 0x778)) {
      FUN_00848a70(*(longlong *)(param_1 + 0x6d0),*(int *)(param_1 + 0x778));
    }
  }
  FUN_0040d150(local_318);
  FUN_00409900();
  FUN_00414560(&local_3b8,2);
  FUN_004144d0(&local_3a8);
  FUN_00414480(&local_20);
  return;
}

