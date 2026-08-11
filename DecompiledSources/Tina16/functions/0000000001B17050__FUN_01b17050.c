/* Ghidra address: 01b17050 */
/* Ghidra symbol: FUN_01b17050 */


undefined8 * FUN_01b17050(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return param_2;
}

