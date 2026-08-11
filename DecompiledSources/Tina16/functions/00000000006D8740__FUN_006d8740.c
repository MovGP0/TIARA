/* Ghidra address: 006d8740 */
/* Ghidra symbol: FUN_006d8740 */


void FUN_006d8740(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_006d93f0(*(undefined8 *)(param_1 + 0x28),1,0);
  }
  else {
    uVar1 = FUN_004b1870(param_2);
    FUN_006d9200(*(undefined8 *)(param_1 + 0x28),uVar1,0);
  }
  return;
}

