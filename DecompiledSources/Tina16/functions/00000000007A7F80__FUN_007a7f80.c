/* Ghidra address: 007a7f80 */
/* Ghidra symbol: FUN_007a7f80 */


undefined8 * FUN_007a7f80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return param_2;
}

