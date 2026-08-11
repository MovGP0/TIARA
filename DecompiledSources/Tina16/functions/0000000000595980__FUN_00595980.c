/* Ghidra address: 00595980 */
/* Ghidra symbol: FUN_00595980 */


void FUN_00595980(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + (longlong)param_2 * 4);
  *(undefined4 *)(*param_1 + (longlong)param_2 * 4) =
       *(undefined4 *)(*param_1 + (longlong)param_3 * 4);
  *(undefined4 *)(*param_1 + (longlong)param_3 * 4) = uVar1;
  return;
}

