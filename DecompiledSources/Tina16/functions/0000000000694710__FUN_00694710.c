/* Ghidra address: 00694710 */
/* Ghidra symbol: FUN_00694710 */


void FUN_00694710(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x68));
  thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x68),uVar1);
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x68),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  return;
}

