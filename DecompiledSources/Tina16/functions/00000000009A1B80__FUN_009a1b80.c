/* Ghidra address: 009a1b80 */
/* Ghidra symbol: FUN_009a1b80 */


undefined8 FUN_009a1b80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

