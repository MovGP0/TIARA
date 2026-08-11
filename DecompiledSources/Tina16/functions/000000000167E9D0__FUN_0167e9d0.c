/* Ghidra address: 0167e9d0 */
/* Ghidra symbol: FUN_0167e9d0 */


undefined8 * FUN_0167e9d0(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x18);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  FUN_00599af0(param_1 + 8,param_3,3);
  return param_2;
}

