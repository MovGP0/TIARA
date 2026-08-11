/* Ghidra address: 0056c890 */
/* Ghidra symbol: FUN_0056c890 */


undefined8 * FUN_0056c890(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
           (longlong)*(int *)(param_1 + 0x10) * 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return param_2;
}

