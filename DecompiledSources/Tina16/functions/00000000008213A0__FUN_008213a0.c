/* Ghidra address: 008213a0 */
/* Ghidra symbol: FUN_008213a0 */


void FUN_008213a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0xb8));
  thunk_FUN_0402759f(uVar1,*(undefined4 *)(param_2 + 0xb4));
  FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x80),1);
  return;
}

