/* Ghidra address: 00f590f0 */
/* Ghidra symbol: FUN_00f590f0 */


double * FUN_00f590f0(undefined8 param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  undefined8 *local_30;
  
  FUN_016ee260(param_3,&local_30,0x88,0);
  puVar2 = &local_b8;
  for (lVar1 = 0x11; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *local_30;
    local_30 = local_30 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_b0 * 8) -
             *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)local_ac * 8);
  return param_2;
}

