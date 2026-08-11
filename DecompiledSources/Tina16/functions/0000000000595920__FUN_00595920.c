/* Ghidra address: 00595920 */
/* Ghidra symbol: FUN_00595920 */


void FUN_00595920(longlong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(*param_1 + (longlong)param_2);
  *(undefined1 *)(*param_1 + (longlong)param_2) = *(undefined1 *)(*param_1 + (longlong)param_3);
  *(undefined1 *)(*param_1 + (longlong)param_3) = uVar1;
  return;
}

