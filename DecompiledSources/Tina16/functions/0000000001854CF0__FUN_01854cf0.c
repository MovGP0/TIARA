/* Ghidra address: 01854cf0 */
/* Ghidra symbol: FUN_01854cf0 */


void FUN_01854cf0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_041a2fd8(*(undefined8 *)(param_2 + 200));
  uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x120));
  thunk_FUN_041e8c78(uVar1,*(undefined4 *)(param_2 + 0xa4));
  if (*(char *)(param_2 + 0x148) != '\0') {
    FUN_01854780(param_2,*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x90),
                 *(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

