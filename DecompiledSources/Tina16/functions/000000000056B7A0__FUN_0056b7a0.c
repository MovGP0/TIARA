/* Ghidra address: 0056b7a0 */
/* Ghidra symbol: FUN_0056b7a0 */


undefined8 FUN_0056b7a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

