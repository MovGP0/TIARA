/* Ghidra address: 004aef40 */
/* Ghidra symbol: FUN_004aef40 */


void FUN_004aef40(undefined8 *param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 2)) {
    FUN_004ae960(*param_1,PTR_PTR_02003a10,(longlong)param_2);
  }
  if (param_2 != *(int *)((longlong)param_1 + 0x14)) {
    FUN_00419260(param_1 + 1,&DAT_004728e8,1,(longlong)param_2);
    *(int *)((longlong)param_1 + 0x14) = param_2;
  }
  return;
}

