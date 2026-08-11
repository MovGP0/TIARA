/* Ghidra address: 00a05ef0 */
/* Ghidra symbol: FUN_00a05ef0 */


void FUN_00a05ef0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined4 *)(lVar1 + 0x10 + (longlong)*(int *)(lVar1 + 0x902c) * 4) = param_2;
  *(undefined4 *)(lVar1 + 0x4010 + (longlong)*(int *)(lVar1 + 0x902c) * 4) = param_3;
  *(int *)(lVar1 + 0x902c) = *(int *)(lVar1 + 0x902c) + 1;
  return;
}

