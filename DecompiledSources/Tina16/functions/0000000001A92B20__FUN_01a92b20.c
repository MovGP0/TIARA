/* Ghidra address: 01a92b20 */
/* Ghidra symbol: FUN_01a92b20 */


undefined8 FUN_01a92b20(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

