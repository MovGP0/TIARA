/* Ghidra address: 009ec370 */
/* Ghidra symbol: FUN_009ec370 */


void FUN_009ec370(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x98) = uVar1;
  thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x98));
  return;
}

