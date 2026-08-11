/* Ghidra address: 0045dda0 */
/* Ghidra symbol: FUN_0045dda0 */


longlong FUN_0045dda0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = thunk_FUN_041aa1c3(*(undefined8 *)(param_1 + 0x28));
    if (lVar1 == 0) {
      lVar1 = param_3;
    }
  }
  return lVar1;
}

