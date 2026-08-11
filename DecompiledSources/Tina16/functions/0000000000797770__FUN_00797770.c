/* Ghidra address: 00797770 */
/* Ghidra symbol: FUN_00797770 */


undefined8 * FUN_00797770(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
           (longlong)*(int *)(param_1 + 0x10) * 0x20);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return param_2;
}

