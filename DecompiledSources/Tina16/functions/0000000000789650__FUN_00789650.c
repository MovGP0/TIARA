/* Ghidra address: 00789650 */
/* Ghidra symbol: FUN_00789650 */


void FUN_00789650(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x38));
  thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8),uVar1);
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x38),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

