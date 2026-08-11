/* Ghidra address: 00be2fe0 */
/* Ghidra symbol: FUN_00be2fe0 */


undefined8 * FUN_00be2fe0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar2 = puVar3[1];
  uVar1 = *(undefined4 *)(puVar3 + 2);
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar1;
  return param_2;
}

