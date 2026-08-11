/* Ghidra address: 00878df0 */
/* Ghidra symbol: FUN_00878df0 */


void FUN_00878df0(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(*param_1 + -8);
  }
  FUN_00419260(param_1,&DAT_0086e978,1,(longlong)(iVar1 + 1));
  *(undefined1 *)(*param_1 + (longlong)iVar1) = param_2;
  return;
}

