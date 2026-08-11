/* Ghidra address: 012dd080 */
/* Ghidra symbol: FUN_012dd080 */


undefined8 FUN_012dd080(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + -8);
  }
  return uVar1;
}

