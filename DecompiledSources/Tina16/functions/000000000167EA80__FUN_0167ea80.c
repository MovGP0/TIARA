/* Ghidra address: 0167ea80 */
/* Ghidra symbol: FUN_0167ea80 */


undefined8 * FUN_0167ea80(longlong param_1,undefined8 *param_2)

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

