/* Ghidra address: 00876b30 */
/* Ghidra symbol: FUN_00876b30 */


longlong FUN_00876b30(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)*param_1)(param_1);
  lVar2 = FUN_004b6da0(param_1);
  lVar1 = lVar1 - lVar2;
  if (lVar1 < 0) {
    lVar1 = 0;
  }
  if ((-1 < param_2) && (param_2 < lVar1)) {
    lVar1 = param_2;
  }
  return lVar1;
}

