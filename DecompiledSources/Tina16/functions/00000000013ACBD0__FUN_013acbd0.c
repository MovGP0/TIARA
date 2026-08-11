/* Ghidra address: 013acbd0 */
/* Ghidra symbol: FUN_013acbd0 */


undefined8 FUN_013acbd0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01d030e0(param_2,&local_28,local_res18[0]);
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x39) {
    cVar1 = FUN_01d04d40(param_2);
    if (cVar1 != '\0') {
      FUN_004168e0(local_20,*(undefined8 *)(param_2[0x35] + 0x38));
      goto LAB_013acd03;
    }
  }
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  cVar1 = FUN_01d42040(uVar3);
  if (cVar1 == '\0') {
    FUN_00b0d1f0(&local_30,local_28,&DAT_013ace24,&DAT_013ace2c);
    FUN_00414be0(&local_28,local_30);
    iVar5 = FUN_00417170(&DAT_013ace2c,local_28,1);
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = *(uint *)(local_28 + -4) >> 1;
    }
    FUN_00416430(local_20,local_28,iVar5 + 1,uVar4);
  }
  else {
    FUN_00415ef0(local_20,param_2 + 0x36);
  }
LAB_013acd03:
  iVar5 = FUN_00417170(&DAT_013ace34,local_20[0],1);
  if (iVar5 != 0) {
    FUN_00416490(local_20,iVar5,1);
    FUN_00416550(&DAT_013ace3c,local_20,iVar5);
    iVar5 = FUN_00417170(&DAT_013ace48,local_20[0],1);
    if (iVar5 == 0) {
      iVar5 = FUN_00417170(&LAB_013ace50,local_20[0],1);
      if (iVar5 != 0) {
        FUN_00416430(local_20,local_20[0],1,iVar5 + -1);
      }
    }
    else {
      FUN_00416430(local_20,local_20[0],1,iVar5 + -1);
    }
  }
  FUN_00414b90(param_1,local_20[0]);
  FUN_004145c0(&local_30,3);
  FUN_00414480(local_res18);
  return param_1;
}

