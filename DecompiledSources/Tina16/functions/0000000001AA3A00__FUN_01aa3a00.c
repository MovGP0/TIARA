/* Ghidra address: 01aa3a00 */
/* Ghidra symbol: FUN_01aa3a00 */


void FUN_01aa3a00(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + -0x10 + (longlong)param_3 * 0x18);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + -0x10 + (longlong)param_3 * 0x18);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + -0x10 + (longlong)param_2 * 0x18);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + -0x10 + (longlong)param_2 * 0x18);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  return;
}

