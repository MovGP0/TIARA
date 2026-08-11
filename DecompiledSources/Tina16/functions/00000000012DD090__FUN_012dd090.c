/* Ghidra address: 012dd090 */
/* Ghidra symbol: FUN_012dd090 */


undefined8 FUN_012dd090(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8);
  }
  return uVar1;
}

