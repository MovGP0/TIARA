/* Ghidra address: 01656de0 */
/* Ghidra symbol: FUN_01656de0 */


longlong FUN_01656de0(int *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if ((*param_1 == 9) && (param_1[0x13] == 0x1a)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x10);
    if (lVar1 == 0) {
      FUN_01656de0(*(undefined8 *)(*(longlong *)(param_1 + 4) + 8));
    }
  }
  return lVar1;
}

