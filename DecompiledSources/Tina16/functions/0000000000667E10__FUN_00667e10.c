/* Ghidra address: 00667e10 */
/* Ghidra symbol: FUN_00667e10 */


void FUN_00667e10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x28),param_2);
  if (iVar1 != -1) {
    FUN_004aee50(*(undefined8 *)(param_1 + 0x28),param_2,0);
  }
  return;
}

