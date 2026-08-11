/* Ghidra address: 00be33b0 */
/* Ghidra symbol: FUN_00be33b0 */


undefined8 * FUN_00be33b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
           (longlong)*(int *)(param_1 + 0x10) * 0x14);
  uVar3 = puVar1[1];
  uVar2 = *(undefined4 *)(puVar1 + 2);
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar2;
  return param_2;
}

