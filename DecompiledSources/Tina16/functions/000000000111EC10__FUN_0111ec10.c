/* Ghidra address: 0111ec10 */
/* Ghidra symbol: FUN_0111ec10 */


undefined8 FUN_0111ec10(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  }
  else if (param_2 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  }
  else if (param_2 == 4) {
    uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  }
  else if (param_2 == 5) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

