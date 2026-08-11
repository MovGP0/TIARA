/* Ghidra address: 0079d880 */
/* Ghidra symbol: FUN_0079d880 */


undefined8 * FUN_0079d880(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar3) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar3 * 0x10);
  uVar2 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  return param_2;
}

