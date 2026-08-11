/* Ghidra address: 00bc5ea0 */
/* Ghidra symbol: FUN_00bc5ea0 */


void FUN_00bc5ea0(longlong param_1,undefined2 param_2,undefined2 *param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  if (*(longlong *)(param_1 + 0x160) == param_1 + 0x15c) {
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + param_4;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x160);
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + (longlong)param_4 * 2;
    puVar2 = *(undefined2 **)(param_1 + 0x160);
    while (param_3 < puVar1) {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      *puVar2 = *puVar1;
    }
    *param_3 = param_2;
    if (1 < param_4) {
      param_4 = param_4 + -1;
      do {
        param_3 = param_3 + 1;
        *param_3 = 0;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

