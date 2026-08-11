/* Ghidra address: 004c38b0 */
/* Ghidra symbol: FUN_004c38b0 */


void FUN_004c38b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  if ((param_2 < lVar1) || (lVar1 + *(longlong *)(param_1 + 0x20) < param_2)) {
    FUN_004c3a60(param_1);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),param_2);
  }
  else {
    *(longlong *)(param_1 + 0x20) = param_2 - lVar1;
  }
  return;
}

