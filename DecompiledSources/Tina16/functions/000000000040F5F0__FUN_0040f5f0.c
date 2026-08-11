/* Ghidra address: 0040f5f0 */
/* Ghidra symbol: FUN_0040f5f0 */


void FUN_0040f5f0(undefined1 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    if (0xff < param_3) {
      param_3 = 0xff;
    }
    for (; (*(char *)(param_2 + lVar1) != '\0' && (lVar1 < param_3)); lVar1 = lVar1 + 1) {
      param_1[lVar1 + 1] = *(char *)(param_2 + lVar1);
    }
  }
  *param_1 = (char)lVar1;
  return;
}

