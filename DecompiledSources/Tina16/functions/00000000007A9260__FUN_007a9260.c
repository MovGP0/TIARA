/* Ghidra address: 007a9260 */
/* Ghidra symbol: FUN_007a9260 */


undefined8 * FUN_007a9260(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}

