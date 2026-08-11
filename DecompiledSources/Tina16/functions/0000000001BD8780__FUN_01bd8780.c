/* Ghidra address: 01bd8780 */
/* Ghidra symbol: FUN_01bd8780 */


void FUN_01bd8780(longlong param_1,int param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  if (param_2 == *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4bc)) {
    *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4c0);
    *param_4 = *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4c4);
    *param_5 = *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4c2);
  }
  else {
    FUN_00635080(param_2,param_3,param_4,param_5);
    *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4c0) = *param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4c4) = *param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4c2) = *param_5;
    *(int *)(*(longlong *)(param_1 + 0xd0) + 0x4bc) = param_2;
  }
  return;
}

