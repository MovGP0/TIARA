/* Ghidra address: 01236940 */
/* Ghidra symbol: FUN_01236940 */


void FUN_01236940(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_2000 [4];
  undefined8 local_1fe0;
  undefined8 local_1fd0;
  undefined1 local_1028;
  undefined1 local_28;
  
  local_28 = 0;
  local_1028 = 0;
  puVar2 = local_2000;
  for (lVar1 = 0x3fb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_2000;
  puVar3 = (undefined8 *)PTR_DAT_020021e8;
  for (lVar1 = 0x3fb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6b0),local_2000[0]);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x940),local_2000[2]);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x838),local_1fe0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),local_1fd0);
  return;
}

