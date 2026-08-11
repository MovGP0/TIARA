/* Ghidra address: 01cc13a0 */
/* Ghidra symbol: FUN_01cc13a0 */


void FUN_01cc13a0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_3[1];
  uVar2 = *(undefined1 *)(param_3 + 2);
  uVar4 = *param_4;
  uVar5 = param_4[1];
  puVar1 = (undefined8 *)(param_1 + 0x48 + (longlong)param_2 * 0x11);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 2) = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0xd0 + (longlong)param_2 * 0x10);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  return;
}

