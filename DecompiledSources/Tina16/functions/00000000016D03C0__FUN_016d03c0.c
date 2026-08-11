/* Ghidra address: 016d03c0 */
/* Ghidra symbol: FUN_016d03c0 */


undefined8 FUN_016d03c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

