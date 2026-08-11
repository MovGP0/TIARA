/* Ghidra address: 00a39e50 */
/* Ghidra symbol: FUN_00a39e50 */


void FUN_00a39e50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31108);
  if (lVar1 == 0) {
    lVar1 = FUN_00a33ac0(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31108);
    *(undefined1 *)(lVar1 + 0x30) = 1;
  }
  return;
}

