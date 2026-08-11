/* Ghidra address: 01ca0d90 */
/* Ghidra symbol: FUN_01ca0d90 */


undefined8 FUN_01ca0d90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    uVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x2500));
  }
  return uVar1;
}

