/* Ghidra address: 005540b0 */
/* Ghidra symbol: FUN_005540b0 */


undefined8 FUN_005540b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00552430(*(undefined8 *)(param_1 + 0x30));
  }
  return uVar1;
}

