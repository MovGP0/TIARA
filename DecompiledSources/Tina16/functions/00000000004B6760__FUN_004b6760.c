/* Ghidra address: 004b6760 */
/* Ghidra symbol: FUN_004b6760 */


void FUN_004b6760(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x40)) {
    FUN_004b3510(param_1,PTR_PTR_02003a10,param_2);
  }
  if (param_2 != *(int *)(param_1 + 0x44)) {
    FUN_00419260(param_1 + 0x38,&DAT_00478100,1,(longlong)param_2);
    *(int *)(param_1 + 0x44) = param_2;
  }
  return;
}

