/* Ghidra address: 005e0780 */
/* Ghidra symbol: FUN_005e0780 */


void FUN_005e0780(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_005e05b0(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0x18) = param_2;
  FUN_00414ad0(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0x18,param_3);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar2 * 0x18) = param_4;
  return;
}

