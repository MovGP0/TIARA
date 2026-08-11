/* Ghidra address: 00be3380 */
/* Ghidra symbol: FUN_00be3380 */


undefined8 * FUN_00be3380(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
           (longlong)*(int *)(param_1 + 0x10) * 0x14);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 2);
  return param_2;
}

