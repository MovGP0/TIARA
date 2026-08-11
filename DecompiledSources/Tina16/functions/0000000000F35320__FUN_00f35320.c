/* Ghidra address: 00f35320 */
/* Ghidra symbol: FUN_00f35320 */


void FUN_00f35320(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00f350e0(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 0x10) = param_3;
  FUN_00414ad0(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x10,param_4);
  return;
}

