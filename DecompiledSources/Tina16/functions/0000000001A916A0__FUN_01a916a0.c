/* Ghidra address: 01a916a0 */
/* Ghidra symbol: FUN_01a916a0 */


void FUN_01a916a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_01a914d0(param_1,param_3,param_2);
  lVar2 = (longlong)(int)~uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 0xc) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + lVar2 * 0xc) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + lVar2 * 0xc) = param_4;
  return;
}

