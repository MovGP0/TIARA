/* Ghidra address: 017f2b70 */
/* Ghidra symbol: FUN_017f2b70 */


void FUN_017f2b70(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x868);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x180))(plVar1);
    FUN_017f2b00(param_1,param_2);
    FUN_00bfcc50(*(longlong *)(param_1 + 0x868),
                 param_2 - *(int *)(*(longlong *)(param_1 + 0x868) + 0x508) / 2);
  }
  return;
}

