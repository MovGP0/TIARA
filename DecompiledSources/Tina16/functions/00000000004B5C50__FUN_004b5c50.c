/* Ghidra address: 004b5c50 */
/* Ghidra symbol: FUN_004b5c50 */


void FUN_004b5c50(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x10);
  uVar3 = *puVar1;
  *puVar1 = *puVar2;
  *puVar2 = uVar3;
  uVar3 = puVar1[1];
  puVar1[1] = puVar2[1];
  puVar2[1] = uVar3;
  return;
}

