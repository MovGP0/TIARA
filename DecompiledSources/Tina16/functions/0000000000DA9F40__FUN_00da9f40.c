/* Ghidra address: 00da9f40 */
/* Ghidra symbol: FUN_00da9f40 */


undefined8 FUN_00da9f40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

