/* Ghidra address: 00d78430 */
/* Ghidra symbol: FUN_00d78430 */


undefined8 FUN_00d78430(longlong param_1)

{
  undefined8 uVar1;
  
  if ((byte)(*(char *)(param_1 + 0x99) - 5U) < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x128);
  }
  else {
    uVar1 = FUN_00d77210();
  }
  return uVar1;
}

