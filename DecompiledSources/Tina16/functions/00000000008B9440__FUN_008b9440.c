/* Ghidra address: 008b9440 */
/* Ghidra symbol: FUN_008b9440 */


undefined8 FUN_008b9440(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

