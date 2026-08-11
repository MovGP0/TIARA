/* Ghidra address: 00795330 */
/* Ghidra symbol: FUN_00795330 */


undefined8 * FUN_00795330(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
           (longlong)*(int *)(param_1 + 0x10) * 0x28);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return param_2;
}

