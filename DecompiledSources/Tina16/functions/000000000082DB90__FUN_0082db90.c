/* Ghidra address: 0082db90 */
/* Ghidra symbol: FUN_0082db90 */


undefined8 FUN_0082db90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

