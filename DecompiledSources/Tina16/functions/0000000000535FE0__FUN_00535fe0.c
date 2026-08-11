/* Ghidra address: 00535fe0 */
/* Ghidra symbol: FUN_00535fe0 */


undefined8 FUN_00535fe0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8);
  }
  return uVar1;
}

