/* Ghidra address: 01b16b30 */
/* Ghidra symbol: FUN_01b16b30 */


undefined8 * FUN_01b16b30(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
           (longlong)*(int *)(param_1 + 0x10) * 0x20);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return param_2;
}

