/* Ghidra address: 00be3030 */
/* Ghidra symbol: FUN_00be3030 */


undefined8 * FUN_00be3030(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar4) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar4 * 0x14);
  uVar3 = puVar1[1];
  uVar2 = *(undefined4 *)(puVar1 + 2);
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar2;
  return param_2;
}

