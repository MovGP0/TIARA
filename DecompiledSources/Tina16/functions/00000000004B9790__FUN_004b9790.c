/* Ghidra address: 004b9790 */
/* Ghidra symbol: FUN_004b9790 */


undefined8 FUN_004b9790(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00440610(*(undefined8 *)(param_1 + 8));
  if ((int)uVar1 == -1) {
    uVar1 = 0;
  }
  return uVar1;
}

