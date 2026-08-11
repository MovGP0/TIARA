/* Ghidra address: 00726d80 */
/* Ghidra symbol: FUN_00726d80 */


void FUN_00726d80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    thunk_FUN_0398fb79(*(longlong *)(param_1 + 0x20));
  }
  uVar1 = FUN_00726bd0(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}

