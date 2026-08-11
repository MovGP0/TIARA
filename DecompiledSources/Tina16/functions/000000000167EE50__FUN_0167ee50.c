/* Ghidra address: 0167ee50 */
/* Ghidra symbol: FUN_0167ee50 */


undefined8 * FUN_0167ee50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
           (longlong)*(int *)(param_1 + 0x10) * 0x18);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return param_2;
}

