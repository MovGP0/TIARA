/* Ghidra address: 01d3e170 */
/* Ghidra symbol: FUN_01d3e170 */


undefined4
FUN_01d3e170(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_438;
  undefined8 local_430 [2];
  undefined1 local_41c [4];
  undefined1 local_418 [256];
  undefined8 local_318 [96];
  
  local_430[0] = 0;
  local_438 = 0;
  puVar3 = local_318;
  for (lVar2 = 0x60; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_01d3e000(local_418,local_318,param_2,param_3,param_4);
  FUN_004154b0(local_430,local_418,0);
  FUN_00416880(&local_438,local_430[0]);
  uVar1 = FUN_0040e860(local_438,local_41c);
  FUN_00414480(&local_438);
  FUN_004144d0(local_430);
  return uVar1;
}

