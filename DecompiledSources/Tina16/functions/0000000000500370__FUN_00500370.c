/* Ghidra address: 00500370 */
/* Ghidra symbol: FUN_00500370 */


undefined8 * FUN_00500370(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  uVar1 = (*(undefined8 **)(param_1 + 8))[1];
  *param_2 = **(undefined8 **)(param_1 + 8);
  param_2[1] = uVar1;
  return param_2;
}

