/* Ghidra address: 005008b0 */
/* Ghidra symbol: FUN_005008b0 */


undefined8 FUN_005008b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

