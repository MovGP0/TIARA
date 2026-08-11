/* Ghidra address: 016d8780 */
/* Ghidra symbol: FUN_016d8780 */


void FUN_016d8780(longlong param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0.0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0x3ff0000000000000;
  }
  else {
    uVar1 = FUN_0040c850(param_2);
    *(undefined8 *)(param_1 + 0x1e0) = uVar1;
  }
  return;
}

