/* Ghidra address: 00595950 */
/* Ghidra symbol: FUN_00595950 */


void FUN_00595950(longlong *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(*param_1 + (longlong)param_2 * 2);
  *(undefined2 *)(*param_1 + (longlong)param_2 * 2) =
       *(undefined2 *)(*param_1 + (longlong)param_3 * 2);
  *(undefined2 *)(*param_1 + (longlong)param_3 * 2) = uVar1;
  return;
}

