/* Ghidra address: 014bf140 */
/* Ghidra symbol: FUN_014bf140 */


void FUN_014bf140(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6d8));
  lVar2 = FUN_006f6fe0(*(undefined8 *)(param_1 + 0x6e8));
  if ((lVar1 != 0) && (lVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  return;
}

