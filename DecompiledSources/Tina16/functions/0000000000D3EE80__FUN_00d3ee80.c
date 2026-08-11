/* Ghidra address: 00d3ee80 */
/* Ghidra symbol: FUN_00d3ee80 */


void FUN_00d3ee80(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    iVar1 = thunk_FUN_041b570f(*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) {
      thunk_FUN_0413e052(*(undefined8 *)(param_1 + 8),0x112,0xf030,0);
    }
    else {
      thunk_FUN_0413e052(*(undefined8 *)(param_1 + 8),0x112,0xf120,0);
    }
  }
  return;
}

