/* Ghidra address: 0099e190 */
/* Ghidra symbol: FUN_0099e190 */


undefined8 FUN_0099e190(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

