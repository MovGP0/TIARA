/* Ghidra address: 01495d20 */
/* Ghidra symbol: FUN_01495d20 */


void FUN_01495d20(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x8b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x180))(plVar1);
    FUN_01495cb0(param_1,param_2);
    FUN_00bfcc50(*(longlong *)(param_1 + 0x8b8),
                 param_2 - *(int *)(*(longlong *)(param_1 + 0x8b8) + 0x508) / 2);
  }
  return;
}

