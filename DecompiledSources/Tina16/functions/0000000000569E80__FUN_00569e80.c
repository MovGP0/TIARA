/* Ghidra address: 00569e80 */
/* Ghidra symbol: FUN_00569e80 */


undefined8 FUN_00569e80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

