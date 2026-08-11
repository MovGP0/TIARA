/* Ghidra address: 018cb200 */
/* Ghidra symbol: FUN_018cb200 */


double FUN_018cb200(undefined8 param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = 0.0;
  lVar1 = FUN_018cb270(param_1,&PTR_FUN_01931418);
  if (lVar1 != 0) {
    dVar2 = *(double *)(lVar1 + 0xb0) + 0.0;
  }
  lVar1 = FUN_018cb270(param_1,&PTR_FUN_01930a20);
  if (lVar1 != 0) {
    dVar2 = dVar2 + *(double *)(lVar1 + 0xb0);
  }
  return dVar2;
}

