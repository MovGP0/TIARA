/* Ghidra address: 016e8e20 */
/* Ghidra symbol: FUN_016e8e20 */


void FUN_016e8e20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = FUN_00409eb0();
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 8);
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x70);
  }
  return;
}

