/* Ghidra address: 01779b20 */
/* Ghidra symbol: FUN_01779b20 */


void FUN_01779b20(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_01779940(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x18) = param_2;
  FUN_00414bf0(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x18,param_3);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar2 * 0x18) = param_4;
  return;
}

