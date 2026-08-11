/* Ghidra address: 004a08f0 */
/* Ghidra symbol: FUN_004a08f0 */


undefined8 FUN_004a08f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + -0xa0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + -0xa0) + 2);
  }
  return uVar1;
}

