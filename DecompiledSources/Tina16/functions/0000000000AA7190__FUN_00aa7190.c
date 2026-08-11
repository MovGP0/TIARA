/* Ghidra address: 00aa7190 */
/* Ghidra symbol: FUN_00aa7190 */


void FUN_00aa7190(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x78) != 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0xb8));
    thunk_FUN_0418f5de(uVar1,*(undefined8 *)(param_2 + 0x78),0xffffffff);
  }
  return;
}

