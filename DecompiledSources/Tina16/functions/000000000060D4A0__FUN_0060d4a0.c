/* Ghidra address: 0060d4a0 */
/* Ghidra symbol: FUN_0060d4a0 */


void FUN_0060d4a0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x54) = param_2;
  }
  else {
    FUN_005ffdf0(PTR_PTR_02002530);
  }
  return;
}

