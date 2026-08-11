/* Ghidra address: 00538060 */
/* Ghidra symbol: FUN_00538060 */


undefined8 FUN_00538060(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + -0xa8);
  }
  return uVar1;
}

