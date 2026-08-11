/* Ghidra address: 00716f10 */
/* Ghidra symbol: FUN_00716f10 */


undefined8 FUN_00716f10(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return uVar1;
}

