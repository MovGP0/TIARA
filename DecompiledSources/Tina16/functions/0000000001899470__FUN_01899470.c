/* Ghidra address: 01899470 */
/* Ghidra symbol: FUN_01899470 */


void FUN_01899470(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_01818d80(param_1,param_2);
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x4d0),param_2,
                             *(undefined4 *)(param_1 + 0x4b0));
  *(undefined4 *)(param_1 + 0x4d0) = uVar1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x4d4),param_2,
                             *(undefined4 *)(param_1 + 0x4b0));
  *(undefined4 *)(param_1 + 0x4d4) = uVar1;
  return;
}

