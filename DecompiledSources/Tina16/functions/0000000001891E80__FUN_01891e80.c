/* Ghidra address: 01891e80 */
/* Ghidra symbol: FUN_01891e80 */


void FUN_01891e80(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_03f3ed25(param_2,*(undefined4 *)(param_1 + 0x5ac),
                             *(undefined4 *)PTR_DAT_02001400);
  *(undefined4 *)(param_1 + 0x5a8) = uVar1;
  return;
}

