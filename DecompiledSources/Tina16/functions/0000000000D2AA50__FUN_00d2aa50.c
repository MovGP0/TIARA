/* Ghidra address: 00d2aa50 */
/* Ghidra symbol: FUN_00d2aa50 */


void FUN_00d2aa50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00d2aa20(param_1);
  if (param_2 != lVar1) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(longlong *)(param_1 + 0x80) = param_2;
  }
  return;
}

