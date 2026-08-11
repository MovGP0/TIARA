/* Ghidra address: 0099ee30 */
/* Ghidra symbol: FUN_0099ee30 */


undefined8 * FUN_0099ee30(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x10);
  uVar2 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  FUN_00599af0(param_1 + 8,param_3,3);
  return param_2;
}

