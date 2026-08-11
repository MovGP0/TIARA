/* Ghidra address: 007fa1a0 */
/* Ghidra symbol: FUN_007fa1a0 */


void FUN_007fa1a0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x26) != '\0') && (param_2 != param_3)) {
    uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x14),param_2,param_3);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  return;
}

