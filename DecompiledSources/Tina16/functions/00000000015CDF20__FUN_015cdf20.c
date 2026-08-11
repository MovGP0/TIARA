/* Ghidra address: 015cdf20 */
/* Ghidra symbol: FUN_015cdf20 */


void FUN_015cdf20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xea8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0xea8));
    *(undefined8 *)(param_1 + 0xea8) = 0;
  }
  uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0xeb0));
  FUN_015bf470(uVar1);
  return;
}

