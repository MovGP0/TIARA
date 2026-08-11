/* Ghidra address: 00683250 */
/* Ghidra symbol: FUN_00683250 */


void FUN_00683250(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x38),local_20);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  thunk_FUN_041b2403(uVar1,0x14b,0,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x38),local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))(*(longlong **)(param_1 + 0x38));
  FUN_00414480(local_20);
  return;
}

