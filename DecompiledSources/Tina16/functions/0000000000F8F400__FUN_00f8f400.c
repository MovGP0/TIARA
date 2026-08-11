/* Ghidra address: 00f8f400 */
/* Ghidra symbol: FUN_00f8f400 */


void FUN_00f8f400(longlong param_1)

{
  longlong lVar1;
  undefined1 local_20 [16];
  
  if (*(char *)(param_1 + 0x3510) == '\0') {
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x3500),0x123f,0,0);
  }
  lVar1 = FUN_00f8c610(param_1,local_20);
  *(longlong *)(param_1 + 0x3480) = lVar1;
  *(undefined4 *)(lVar1 + 0x104) = *(undefined4 *)(param_1 + 0x33fc);
  return;
}

