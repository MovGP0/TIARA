/* Ghidra address: 004dbf20 */
/* Ghidra symbol: FUN_004dbf20 */


undefined8 FUN_004dbf20(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
  }
  return uVar1;
}

