/* Ghidra address: 004b97b0 */
/* Ghidra symbol: FUN_004b97b0 */


undefined8 FUN_004b97b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00440640(*(undefined8 *)(param_1 + 8));
  if ((int)uVar1 == -1) {
    uVar1 = 0;
  }
  return uVar1;
}

