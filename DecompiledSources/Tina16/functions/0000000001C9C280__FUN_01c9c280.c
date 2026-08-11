/* Ghidra address: 01c9c280 */
/* Ghidra symbol: FUN_01c9c280 */


void FUN_01c9c280(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03ea7391(uVar1,0);
  if (*(longlong *)(param_1 + 0x2510) != 0) {
    FUN_01a64180(*(longlong *)(param_1 + 0x2510));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2510));
  return;
}

