/* Ghidra address: 00726df0 */
/* Ghidra symbol: FUN_00726df0 */


void FUN_00726df0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_0398fb79(*(longlong *)(param_1 + 0x30));
  }
  uVar1 = FUN_00726bd0(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

