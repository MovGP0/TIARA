/* Ghidra address: 01407990 */
/* Ghidra symbol: FUN_01407990 */


void FUN_01407990(longlong param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined1 *local_3a0;
  longlong local_398;
  undefined8 local_388;
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
  FUN_01407930(auStack_3d8);
  FUN_01407930(auStack_3d8);
  FUN_01407930(auStack_3d8);
  FUN_01407930(auStack_3d8);
  local_398 = *(longlong *)(param_1 + 0x7a8);
  FUN_01407930(auStack_3d8);
  iVar1 = FUN_00416db0(local_20,&DAT_01407da4);
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(local_20,&DAT_01407db4);
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(local_20,&DAT_01407dc4);
      if (iVar1 != 0) {
        FUN_014078b0(param_1,0x46b);
        goto LAB_01407cbe;
      }
    }
  }
  iVar1 = FUN_00416db0(local_20,&DAT_01407da4);
  if (iVar1 == 0) {
    DAT_021084b0 = 1;
  }
  else {
    DAT_021084b0 = 0;
    iVar1 = FUN_00416db0(local_20,&DAT_01407db4);
    if (iVar1 == 0) {
      DAT_021084b1 = 1;
    }
    iVar1 = FUN_00416db0(local_20,&DAT_01407dc4);
    if (iVar1 == 0) {
      DAT_021084b1 = 0;
    }
  }
  while( true ) {
    FUN_01407930(auStack_3d8);
    FUN_00416dc0(&local_3b8,local_20,1,2);
    iVar1 = FUN_00416db0(local_3b8,&LAB_01407dd4);
    if (iVar1 == 0) break;
    local_378 = FUN_00b8f030(local_20);
    FUN_01407930(auStack_3d8);
    local_380 = FUN_00b8f030(local_20);
    FUN_01407930(auStack_3d8);
    local_388 = FUN_00b8f030(local_20);
    FUN_01d3c230(local_398,local_378,local_380,local_388);
    FUN_00848a70(*(undefined8 *)(param_1 + 0x6d8),(ulonglong)*(uint *)(local_398 + 0x10) * 3);
    if (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4e0) <= *(int *)(param_1 + 0x7c0)) {
      FUN_00848a70(*(longlong *)(param_1 + 0x6d8),*(int *)(param_1 + 0x7c0));
    }
  }
LAB_01407cbe:
  FUN_0040d150(local_318);
  FUN_00409900();
  FUN_00414560(&local_3b8,2);
  FUN_004144d0(&local_3a8);
  FUN_00414480(&local_20);
  return;
}

