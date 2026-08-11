/* Ghidra address: 0167ead0 */
/* Ghidra symbol: FUN_0167ead0 */


undefined8 * FUN_0167ead0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar4) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar4 * 0x18);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return param_2;
}

