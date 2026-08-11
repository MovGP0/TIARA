/* Ghidra address: 01ca7630 */
/* Ghidra symbol: FUN_01ca7630 */


undefined8 FUN_01ca7630(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

