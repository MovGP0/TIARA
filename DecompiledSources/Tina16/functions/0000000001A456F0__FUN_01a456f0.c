/* Ghidra address: 01a456f0 */
/* Ghidra symbol: FUN_01a456f0 */


void FUN_01a456f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    FUN_00414ad0(param_1 + 0x2a38,*(undefined8 *)(param_1 + 0x8b0));
    FUN_0147c100(*(undefined8 *)(param_1 + 0x6b8),param_1 + 0x29c0,*(int *)(param_1 + 0x920) + -1,
                 0xffff,param_1 + 0x2a48,0);
  }
  return;
}

