/* Ghidra address: 00793dc0 */
/* Ghidra symbol: FUN_00793dc0 */


void FUN_00793dc0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = FUN_00793bb0(param_1,param_3,param_2);
  lVar3 = (longlong)(int)~uVar2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3 * 0x28) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + lVar3 * 0x28) = param_3;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar3 * 0x28);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return;
}

