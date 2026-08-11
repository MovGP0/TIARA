/* Ghidra address: 0065b4a0 */
/* Ghidra symbol: FUN_0065b4a0 */


undefined8 FUN_0065b4a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x358);
  }
  else {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x78));
  }
  return uVar1;
}

