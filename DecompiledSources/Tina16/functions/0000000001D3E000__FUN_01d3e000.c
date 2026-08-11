/* Ghidra address: 01d3e000 */
/* Ghidra symbol: FUN_01d3e000 */


undefined8 FUN_01d3e000(undefined8 param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_430;
  undefined1 local_428 [256];
  undefined8 local_328 [32];
  undefined1 local_228 [256];
  undefined1 local_128 [264];
  
  local_430 = 0;
  puVar4 = local_328;
  for (lVar3 = 0x60; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_5 == 0) {
    FUN_00414ff0(local_428,local_328);
  }
  else if (param_5 == 1) {
    FUN_00414ff0(local_428,local_228);
  }
  else if (param_5 == 2) {
    FUN_00414ff0(local_428,local_128);
  }
  if (param_4 == 1) {
    iVar2 = 1;
  }
  else {
    FUN_004169a0(&local_430,local_428);
    iVar2 = FUN_004170c0(&LAB_01d3e164,local_430,1);
    iVar2 = iVar2 + 1;
  }
  iVar1 = iVar2;
  if (param_3 != 1) {
    iVar1 = FUN_01d3deb0(local_428,0x2c,param_3 + -1,iVar2,param_4);
    iVar1 = iVar1 + 1;
  }
  iVar2 = FUN_01d3deb0(local_428,0x2c,param_3,iVar2,param_4);
  FUN_004151b0(param_1,local_428,iVar1,iVar2 - iVar1);
  FUN_00414480(&local_430);
  return param_1;
}

