/* Ghidra address: 009b0300 */
/* Ghidra symbol: FUN_009b0300 */


undefined8 FUN_009b0300(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

