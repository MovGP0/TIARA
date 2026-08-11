/* Ghidra address: 006da3b0 */
/* Ghidra symbol: FUN_006da3b0 */


void FUN_006da3b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_006db1f0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar1 = FUN_004b1870(param_2);
    FUN_006db1c0(*(undefined8 *)(param_1 + 0x28),uVar1);
  }
  return;
}

