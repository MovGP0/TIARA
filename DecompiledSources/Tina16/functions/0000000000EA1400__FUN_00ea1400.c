/* Ghidra address: 00ea1400 */
/* Ghidra symbol: FUN_00ea1400 */


longlong FUN_00ea1400(short *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (param_1[lVar1] != 0);
    return lVar2;
  }
  return 0;
}

