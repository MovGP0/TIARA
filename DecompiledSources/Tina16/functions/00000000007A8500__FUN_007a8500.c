/* Ghidra address: 007a8500 */
/* Ghidra symbol: FUN_007a8500 */


undefined8 FUN_007a8500(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

