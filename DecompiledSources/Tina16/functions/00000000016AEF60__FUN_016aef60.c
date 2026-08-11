/* Ghidra address: 016aef60 */
/* Ghidra symbol: FUN_016aef60 */


void FUN_016aef60(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((-1 < param_2) && (-1 < param_3)) {
    piVar1 = (int *)FUN_004095c0(0x10);
    *piVar1 = param_2;
    *(undefined8 *)(piVar1 + 2) =
         *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 8);
    *(int **)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 8) = piVar1;
    piVar1 = (int *)FUN_004095c0(0x10);
    *piVar1 = param_3;
    *(undefined8 *)(piVar1 + 2) =
         *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8);
    *(int **)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = piVar1;
  }
  return;
}

