/* Ghidra address: 004f7430 */
/* Ghidra symbol: FUN_004f7430 */


undefined8 FUN_004f7430(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

