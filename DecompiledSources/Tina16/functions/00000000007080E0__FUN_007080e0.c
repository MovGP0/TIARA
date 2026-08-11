/* Ghidra address: 007080e0 */
/* Ghidra symbol: FUN_007080e0 */


void FUN_007080e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_03c9d277(*(longlong *)(param_1 + 0x48),0xfffffffc,*(undefined8 *)(param_1 + 0x58));
  }
  FUN_004d62f0(*(undefined8 *)(param_1 + 0x50));
  FUN_00786a00(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

