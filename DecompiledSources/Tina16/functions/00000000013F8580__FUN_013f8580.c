/* Ghidra address: 013f8580 */
/* Ghidra symbol: FUN_013f8580 */


void FUN_013f8580(longlong param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined1 *local_390;
  undefined8 local_388;
  undefined8 local_378;
  undefined1 local_36a;
  undefined1 local_369;
  byte local_368 [80];
  undefined1 local_318 [760];
  undefined8 local_20;
  
  local_390 = auStack_3c8;
  local_3a8 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_20 = 0;
  uVar3 = (ulonglong)*param_2;
  if (0x4f < uVar3) {
    uVar3 = 0x50;
  }
  local_369 = (undefined1)uVar3;
  pbVar4 = local_368;
  for (; param_2 = param_2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar4 = *param_2;
    pbVar4 = pbVar4 + 1;
  }
  FUN_004154b0(&local_398,&local_369,0);
  FUN_00416880(&local_3a0,local_398);
  FUN_0040cf10(local_318,local_3a0,0);
  FUN_00409900();
  FUN_0040c9e0(local_318);
  FUN_00409900();
  FUN_013f8520(auStack_3c8);
  local_388 = *(undefined8 *)(param_1 + 0x750);
  FUN_013f8520(auStack_3c8);
  iVar2 = FUN_00416db0(local_20,L"Default");
  if (iVar2 == 0) {
    FUN_013f8520(auStack_3c8);
    cVar1 = FUN_013f8310(param_1,local_20,&local_36a);
    if (cVar1 == '\0') {
      FUN_013f8230(param_1,0x46c);
    }
    else {
      FUN_01d3aad0(local_388,0,local_36a);
      while( true ) {
        FUN_013f8520(auStack_3c8);
        FUN_00416dc0(&local_3a8,local_20,1,2);
        iVar2 = FUN_00416db0(local_3a8,&LAB_013f8860);
        if (iVar2 == 0) break;
        local_378 = FUN_00b8f030(local_20);
        FUN_013f8520(auStack_3c8);
        cVar1 = FUN_013f8310(param_1,local_20,&local_36a);
        if (cVar1 == '\0') {
          FUN_013f8230(param_1,0x46c);
          break;
        }
        FUN_01d3aad0(local_388,local_378,local_36a);
      }
    }
  }
  else {
    FUN_013f8230(param_1,0x46b);
  }
  FUN_0040d150(local_318);
  FUN_00409900();
  FUN_00414560(&local_3a8,2);
  FUN_004144d0(&local_398);
  FUN_00414480(&local_20);
  return;
}

