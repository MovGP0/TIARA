/* Ghidra address: 005a2030 */
/* Ghidra symbol: FUN_005a2030 */


undefined8 FUN_005a2030(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

