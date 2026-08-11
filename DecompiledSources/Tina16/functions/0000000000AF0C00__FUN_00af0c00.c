/* Ghidra address: 00af0c00 */
/* Ghidra symbol: FUN_00af0c00 */


void FUN_00af0c00(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_00414480(local_20);
  uVar2 = FUN_00414480(&local_28);
  FUN_00a28910(param_2,uVar1,uVar2);
  iVar3 = FUN_00416db0(local_20[0],&DAT_00af0cf8);
  if (iVar3 == 0) {
    uVar1 = FUN_00414480(&local_30);
    FUN_00a29560(&local_28,param_2,uVar1);
    FUN_00af16e0(param_1,PTR_IMAGE_DOS_HEADER_0200c280,local_28,param_3);
  }
  else {
    FUN_00af0a20(param_1,param_2,param_3);
  }
  FUN_00414560(&local_30,3);
  return;
}

