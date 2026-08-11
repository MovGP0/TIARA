/* Ghidra address: 007960f0 */
/* Ghidra symbol: FUN_007960f0 */


void FUN_007960f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = FUN_00795ed0(param_1,param_3,param_2);
  lVar3 = (longlong)(int)~uVar2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3 * 0x20) = param_2;
  FUN_00414ad0(*(longlong *)(param_1 + 8) + 8 + lVar3 * 0x20,param_3);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar3 * 0x20);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  return;
}

