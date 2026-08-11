/* Ghidra address: 018bcfa0 */
/* Ghidra symbol: FUN_018bcfa0 */


undefined8 FUN_018bcfa0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_01978c20();
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x48);
  }
  return uVar1;
}

