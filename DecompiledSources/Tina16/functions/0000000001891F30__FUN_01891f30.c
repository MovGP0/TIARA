/* Ghidra address: 01891f30 */
/* Ghidra symbol: FUN_01891f30 */


void FUN_01891f30(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00685860(param_1);
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x4f8),0xcf,(longlong)*(char *)(param_1 + 0x5a1),0);
  if (*(longlong *)(param_1 + 0x5b0) != *(longlong *)(param_1 + 0x4f8)) {
    *(longlong *)(param_1 + 0x5b8) = *(longlong *)(param_1 + 0x5b0);
  }
  uVar1 = FUN_00429990(*(undefined8 *)(param_1 + 0x5b8),0xfffffffc);
  *(undefined8 *)(param_1 + 0x598) = uVar1;
  FUN_00429fc0(*(undefined8 *)(param_1 + 0x5b8),0xfffffffc,*(undefined8 *)(param_1 + 0x590));
  return;
}

