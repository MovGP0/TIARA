/* Ghidra address: 00f38050 */
/* Ghidra symbol: FUN_00f38050 */


undefined8 FUN_00f38050(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

