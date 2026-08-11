/* Ghidra address: 006d8780 */
/* Ghidra symbol: FUN_006d8780 */


longlong * FUN_006d8780(longlong param_1,longlong *param_2,int param_3)

{
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x260))(*(longlong **)(param_1 + 0x28))
    ;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2,param_1);
    if (param_3 < 0) {
      param_3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_3);
  }
  return param_2;
}

