/* Ghidra address: 00657310 */
/* Ghidra symbol: FUN_00657310 */


void FUN_00657310(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0xd8) + 8) == 0) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_2 + 0xd0));
    thunk_FUN_0416269d(uVar1,param_2 + 0x58);
  }
  return;
}

