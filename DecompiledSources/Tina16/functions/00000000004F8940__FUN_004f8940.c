/* Ghidra address: 004f8940 */
/* Ghidra symbol: FUN_004f8940 */


undefined8 FUN_004f8940(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

