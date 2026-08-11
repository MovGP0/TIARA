/* Ghidra address: 007a7ed0 */
/* Ghidra symbol: FUN_007a7ed0 */


undefined8 * FUN_007a7ed0(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x20);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  FUN_00599af0(param_1 + 8,param_3,3);
  return param_2;
}

