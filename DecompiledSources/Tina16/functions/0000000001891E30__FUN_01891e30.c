/* Ghidra address: 01891e30 */
/* Ghidra symbol: FUN_01891e30 */


void FUN_01891e30(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_03f3ed25(0xb,param_2,*(undefined4 *)(param_1 + 0x5ac));
  *(undefined4 *)(param_1 + 0x588) = uVar1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x5a8),param_2,
                             *(undefined4 *)(param_1 + 0x5ac));
  *(undefined4 *)(param_1 + 0x5a8) = uVar1;
  return;
}

