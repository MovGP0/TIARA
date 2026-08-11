/* Ghidra address: 0070f700 */
/* Ghidra symbol: FUN_0070f700 */


void FUN_0070f700(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    thunk_FUN_03c9d277(*(longlong *)(param_1 + 0xa0),0xfffffffc,*(undefined8 *)(param_1 + 0xb0));
  }
  FUN_004d62f0(*(undefined8 *)(param_1 + 0xa8));
  FUN_00692580(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

