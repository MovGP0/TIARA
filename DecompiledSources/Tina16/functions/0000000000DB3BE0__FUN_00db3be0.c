/* Ghidra address: 00db3be0 */
/* Ghidra symbol: FUN_00db3be0 */


double * FUN_00db3be0(undefined8 param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_148 [31];
  int local_4c;
  int local_48;
  undefined8 *local_30;
  
  FUN_016ee260(param_3,&local_30,0x118,0);
  puVar2 = local_148;
  for (lVar1 = 0x23; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *local_30;
    local_30 = local_30 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_4c * 8) -
             *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_48 * 8);
  return param_2;
}

