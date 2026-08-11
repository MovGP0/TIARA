/* Ghidra address: 014072d0 */
/* Ghidra symbol: FUN_014072d0 */


void FUN_014072d0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380 [2];
  undefined1 local_370 [759];
  undefined1 local_79;
  byte local_78 [80];
  
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_380[0] = 0;
  local_388 = 0;
  uVar5 = (ulonglong)*param_2;
  if (0x4f < uVar5) {
    uVar5 = 0x50;
  }
  local_79 = (undefined1)uVar5;
  pbVar7 = local_78;
  for (; param_2 = param_2 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar7 = *param_2;
    pbVar7 = pbVar7 + 1;
  }
  FUN_004154b0(local_380,&local_79,0);
  FUN_00416880(&local_388,local_380[0]);
  FUN_0040cf10(local_370,local_388,0);
  FUN_00409900();
  FUN_0040ca00(local_370);
  FUN_00409900();
  lVar1 = *(longlong *)(param_1 + 0x7a8);
  uVar2 = FUN_0040f200(local_370,L"@ Catalog file for four poles");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040f590(local_370);
  FUN_00409900();
  uVar2 = FUN_0040f200(local_370,L"* A - Algebraical form");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(local_370,L"* D - Euler form, phase in degree");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(local_370,L"* R - Euler form, phase in radian");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040f590(local_370);
  FUN_00409900();
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    uVar2 = FUN_0040f3d0(local_370,0x41);
    FUN_0040f590(uVar2);
    FUN_00409900();
  }
  else if (DAT_021084b1 == '\0') {
    uVar2 = FUN_0040f3d0(local_370,0x52);
    FUN_0040f590(uVar2);
    FUN_00409900();
  }
  else {
    uVar2 = FUN_0040f3d0(local_370,0x44);
    FUN_0040f590(uVar2);
    FUN_00409900();
  }
  FUN_0040f590(local_370);
  FUN_00409900();
  iVar8 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      puVar3 = (undefined8 *)FUN_01d3c210(lVar1,iVar6);
      FUN_00b8fd60(&local_390,*puVar3,2,0,1);
      uVar2 = FUN_0040f200(local_370,local_390);
      FUN_0040f590(uVar2);
      FUN_00409900();
      lVar4 = FUN_01d3c210(lVar1,iVar6);
      FUN_00b8fd60(&local_398,*(undefined8 *)(lVar4 + 8),2,0,1);
      uVar2 = FUN_0040f200(local_370,local_398);
      FUN_0040f590(uVar2);
      FUN_00409900();
      lVar4 = FUN_01d3c210(lVar1,iVar6);
      FUN_00b8fd60(&local_3a0,*(undefined8 *)(lVar4 + 0x10),2,0,1);
      uVar2 = FUN_0040f200(local_370,local_3a0);
      FUN_0040f590(uVar2);
      FUN_00409900();
      FUN_0040f590(local_370);
      FUN_00409900();
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar2 = FUN_0040f200(local_370,L".@ end of file");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040d150(local_370);
  FUN_00409900();
  FUN_00414560(&local_3a0,4);
  FUN_004144d0(local_380);
  return;
}

