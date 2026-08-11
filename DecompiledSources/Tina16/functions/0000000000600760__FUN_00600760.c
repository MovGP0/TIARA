/* Ghidra address: 00600760 */
/* Ghidra symbol: FUN_00600760 */


void FUN_00600760(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x98) = uVar1;
  thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x98));
  return;
}

