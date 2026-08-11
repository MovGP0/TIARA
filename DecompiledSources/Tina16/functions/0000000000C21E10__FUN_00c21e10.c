/* Ghidra address: 00c21e10 */
/* Ghidra symbol: FUN_00c21e10 */


void FUN_00c21e10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_00c21af0(param_1,param_1 + 8,param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x5c),0,
               param_1 + 0x10,param_1 + 0x18);
  while (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x10)) {
    FUN_00c21d40(param_1,*(undefined4 *)(param_1 + 0x5c),param_1 + 0x10,param_1 + 0x18);
  }
  return;
}

