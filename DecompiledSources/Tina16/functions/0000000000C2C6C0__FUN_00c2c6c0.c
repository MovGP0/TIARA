/* Ghidra address: 00c2c6c0 */
/* Ghidra symbol: FUN_00c2c6c0 */


void FUN_00c2c6c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0xb8));
  *(undefined8 *)(param_2 + 0xb8) = uVar1;
  thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0xb8));
  return;
}

