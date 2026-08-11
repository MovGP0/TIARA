/* Ghidra address: 00a3c5c0 */
/* Ghidra symbol: FUN_00a3c5c0 */


undefined8 FUN_00a3c5c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a35880(lVar1);
  }
  return uVar2;
}

