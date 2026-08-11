/* Ghidra address: 013e8340 */
/* Ghidra symbol: FUN_013e8340 */


void FUN_013e8340(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380 [2];
  undefined1 local_370 [759];
  undefined1 local_79;
  byte local_78 [88];
  
  local_398 = 0;
  local_390 = 0;
  local_380[0] = 0;
  local_388 = 0;
  uVar3 = (ulonglong)*param_2;
  if (0x4f < uVar3) {
    uVar3 = 0x50;
  }
  local_79 = (undefined1)uVar3;
  pbVar6 = local_78;
  for (; param_2 = param_2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *param_2;
    pbVar6 = pbVar6 + 1;
  }
  FUN_004154b0(local_380,&local_79,0);
  FUN_00416880(&local_388,local_380[0]);
  FUN_0040cf10(local_370,local_388,0);
  FUN_00409900();
  FUN_0040ca00(local_370);
  FUN_00409900();
  uVar1 = FUN_0040f200(local_370,L"@ Catalog file for optimization");
  FUN_0040f590(uVar1);
  FUN_00409900();
  FUN_0040f590(local_370);
  FUN_00409900();
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x788),iVar4);
      *(undefined8 **)(param_1 + 0x7a8) = puVar2;
      FUN_00b8fd60(&local_390,*puVar2,2,0,1);
      uVar1 = FUN_0040f200(local_370,local_390);
      FUN_0040f590(uVar1);
      FUN_00409900();
      FUN_00b8fd60(&local_398,*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 8),2,0,1);
      uVar1 = FUN_0040f200(local_370,local_398);
      FUN_0040f590(uVar1);
      FUN_00409900();
      FUN_0040f590(local_370);
      FUN_00409900();
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = FUN_0040f200(local_370,L".@ end of file");
  FUN_0040f590(uVar1);
  FUN_00409900();
  FUN_0040d150(local_370);
  FUN_00409900();
  FUN_00414560(&local_398,3);
  FUN_004144d0(local_380);
  return;
}

