/* Ghidra address: 0185ef90 */
/* Ghidra symbol: FUN_0185ef90 */


void FUN_0185ef90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined4 *)(lVar1 + 0x10 + (longlong)*(int *)(lVar1 + 0x902c) * 4) = param_2;
  *(undefined4 *)(lVar1 + 0x4010 + (longlong)*(int *)(lVar1 + 0x902c) * 4) = param_3;
  *(int *)(lVar1 + 0x902c) = *(int *)(lVar1 + 0x902c) + 1;
  return;
}

