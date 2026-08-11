/* Ghidra address: 006da3f0 */
/* Ghidra symbol: FUN_006da3f0 */


longlong * FUN_006da3f0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x260))(*(longlong **)(param_1 + 0x28))
    ;
  }
  else if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2,param_1);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (param_3 < iVar1) {
      param_3 = iVar1 + -1;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_3);
  }
  return param_2;
}

