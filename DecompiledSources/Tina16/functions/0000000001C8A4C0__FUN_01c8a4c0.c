/* Ghidra address: 01c8a4c0 */
/* Ghidra symbol: FUN_01c8a4c0 */


undefined8 FUN_01c8a4c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x27a8);
  }
  return uVar1;
}

